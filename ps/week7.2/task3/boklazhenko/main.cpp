#include <iostream>
#include <chrono>

using namespace std;

const int BOARD_SIZE = 6;
const char NOT_VISITED = '.';
const char VISITED = '+';
const char HORSE = 'g';
const int SHIFTS_SIZE = 8;
int X_SHIFTS[SHIFTS_SIZE] = {-1, -1, 1, 1, -2, -2, 2, 2};
int Y_SHIFTS[SHIFTS_SIZE] = {-2, 2, -2, 2, -1, 1, -1, 1};

//forward declarations
void print(char[BOARD_SIZE][BOARD_SIZE]);
bool isRange(int, int);
bool isCanMove(int, int, char[BOARD_SIZE][BOARD_SIZE]);
bool tryMoveHorse(int, int, int, int, char[BOARD_SIZE][BOARD_SIZE], char[BOARD_SIZE][BOARD_SIZE]);
void copy(char[BOARD_SIZE][BOARD_SIZE], char[BOARD_SIZE][BOARD_SIZE]);
void fill(char[BOARD_SIZE][BOARD_SIZE], int, int);
bool trySolve(char board[BOARD_SIZE][BOARD_SIZE],
              int step,
              char solution[BOARD_SIZE * BOARD_SIZE][BOARD_SIZE][BOARD_SIZE]);
bool tryGetHorseCoors(char[BOARD_SIZE][BOARD_SIZE], int *, int *);

int main() {
  int horseX, horseY;
  cout << "enter horse x coor..." << endl;
  cin >> horseX;

  cout << "enter horse y coor..." << endl;
  cin >> horseY;

  if (!isRange(horseX, horseY) || !cin.good()) {
    cerr << "bad input!" << endl;
    return 1;
  }

  char board[BOARD_SIZE][BOARD_SIZE];
  fill(board, horseX, horseY);

  char solution[BOARD_SIZE * BOARD_SIZE][BOARD_SIZE][BOARD_SIZE];

  cout << "begin solving..." << endl;
  chrono::steady_clock::time_point start = chrono::steady_clock::now();

  if (!trySolve(board, 0, solution)) {
    cerr << "solution not exists";
    return 1;
  }

  chrono::steady_clock::time_point stop = chrono::steady_clock::now();
  cout << "solved! elapsed: " << chrono::duration_cast<chrono::seconds>(stop - start).count() << " sec" << endl;

  cout << "press n - next state; p - previous state; q - quit" << endl;

  int step = 0;
  do {
    print(solution[step]);

    char c;
    cin >> c;
    switch (c) {
      case 'n':step = min(step + 1, BOARD_SIZE * BOARD_SIZE - 1);
        break;
      case 'p':step = max(step - 1, 0);
        break;
      case 'q':return 0;
    }
  } while (true);
}

bool trySolve(char board[BOARD_SIZE][BOARD_SIZE],
              int step,
              char solution[BOARD_SIZE * BOARD_SIZE][BOARD_SIZE][BOARD_SIZE]) {
  copy(board, solution[step]);

  if (step == BOARD_SIZE * BOARD_SIZE - 1)
    return true;

  int horseX, horseY;

  if (!tryGetHorseCoors(board, &horseX, &horseY))
    return false;

  for (int i = 0; i < SHIFTS_SIZE; ++i) {
    char newBoard[BOARD_SIZE][BOARD_SIZE];

    if (!tryMoveHorse(horseX, horseY, horseX + X_SHIFTS[i], horseY + Y_SHIFTS[i], board, newBoard))
      continue;

    if (trySolve(newBoard, step + 1, solution))
      return true;
  }

  return false;
}

void print(char board[BOARD_SIZE][BOARD_SIZE]) {
  for (int y = 0; y < BOARD_SIZE; ++y) {
    for (int x = 0; x < BOARD_SIZE; ++x) {
      cout << board[y][x] << ' ';
    }
    cout << '\n';
  }
  cout << endl;
}

void fill(char board[BOARD_SIZE][BOARD_SIZE], int horseX, int horseY) {
  for (int y = 0; y < BOARD_SIZE; ++y)
    for (int x = 0; x < BOARD_SIZE; ++x)
      board[y][x] = NOT_VISITED;
  board[horseY][horseX] = HORSE;
}

bool tryMoveHorse(int oldHorseX,
                  int oldHorseY,
                  int newHorseX,
                  int newHorseY,
                  char from[BOARD_SIZE][BOARD_SIZE],
                  char to[BOARD_SIZE][BOARD_SIZE]) {
  if (!isCanMove(newHorseX, newHorseY, from))
    return false;

  copy(from, to);

  to[oldHorseY][oldHorseX] = VISITED;
  to[newHorseY][newHorseX] = HORSE;

  return true;
}

bool isRange(int x, int y) {
  return 0 <= x && x < BOARD_SIZE && 0 <= y && y < BOARD_SIZE;
}

bool isCanMove(int x, int y, char board[BOARD_SIZE][BOARD_SIZE]) {
  return isRange(x, y) && board[y][x] == NOT_VISITED;
}

void copy(char src[BOARD_SIZE][BOARD_SIZE], char dst[BOARD_SIZE][BOARD_SIZE]) {
  for (int y = 0; y < BOARD_SIZE; ++y)
    for (int x = 0; x < BOARD_SIZE; ++x)
      dst[y][x] = src[y][x];
}

//maybe it is bad function, but for pointers demonstration
bool tryGetHorseCoors(char board[BOARD_SIZE][BOARD_SIZE], int *horseX, int *horseY) {
  for (int y = 0; y < BOARD_SIZE; ++y)
    for (int x = 0; x < BOARD_SIZE; ++x)
      if (board[y][x] == HORSE) {
        *horseX = x;
        *horseY = y;
        return true;
      }
  return false;
}