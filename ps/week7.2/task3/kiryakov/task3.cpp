﻿#include <iostream>
using namespace std;

const int N = 8;
int rx[N * N], ry[N * N];

bool exist(int x, int y, int s)
{ for (int i = 0; i <= s; i++) if (rx[i] == x && ry[i] == y)
return true; 
return false; }

bool f(int s) {
	if (s + 1 >= N * N)
		return true;

	for (int dx = -2; dx <= 2; dx++)
		for (int dy = -2; dy <= 2; dy++) {
		if (abs(dx) + abs(dy) != 3) continue;

		int xn = rx[s] + dx, yn = ry[s] + dy;
		if (xn<1 || xn>N || yn<1 || yn>N) continue;

		if (exist(xn, yn, s)) continue;

		rx[s + 1] = xn; ry[s + 1] = yn;
		if (f(s + 1)) return true;
	}
	return false;
}

int main() {
	cin >> rx[0] >> ry[0];
	if (f(0)) for (int i = 0; i < N * N; i++) cout << "(" << rx[i] << "," << ry[i] << ") ";
	else cout << "No solutions\n";
}