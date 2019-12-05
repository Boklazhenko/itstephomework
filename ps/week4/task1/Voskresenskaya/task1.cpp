#include <iostream>
using namespace std;
int main()
{

	
	// решение а

 for (int x=0; x <= 9; ++x)
	{
			for (int y=0; y <= 9; ++y) // написала в один файл, но проверяла по отдельности каждое решение.                      
			{
				if (x == y || x<y ) 
				cout << "*";
				else { cout << " "; }
			}
			cout << endl;

	}

	return 0;

}
// решение б


	for (int x=0; x <= 9; ++x)
	{
			for (int y=0; y <= 9;++y)
			{
				if (x == y || x>y )
				cout << "*";
				else { cout << " "; }
			}
			cout << endl;

	}

	return 0;

}
	// решение в
	int N = 9;
	for (int x = 0; x <= 9; ++x)
	{
		if (x <= 4)
		{
			for (int y = 0; y <= 9; ++y)
			{
				if ( x == y || x + y <= N - 1 && y>x)
					cout << "*";
				else { cout << " "; }
			}
			cout << endl;
		}
	}

	return 0;

}

// решение г

	int N = 10;
	for (int x = 0; x <= N; ++x)
	{

		if (x < 5)
		{
			cout << " ";
		}

		else
		{
			for (int y = 0; y <= N; ++y)
			{
				if (y>N-1-x && y<=x)
				{

					cout << "*";
				}

				else { cout << " "; }
			}
		}

		cout << endl;

	}

return 0;

}

// решение д

	int N = 9;
	for (int x = 0; x < N; ++x)
	{
		if (x <= 4)
		{
			for (int y = 0; y <= N; ++y)
			{
				if (x == y || x + y <= N - 1 && y > x)
				{
					cout << "*";
				}
				else
				{
					cout << " ";
				}
			}
		}
		else
		{
			for (int y = 0; y <= N; ++y)
			{
				if (y >= N -1 - x && y < x || x==y )
				{
					cout << "*";
				}
				else
				{
					cout << " ";
				}
			}
		}
		cout << endl;
	}
		return 0;

	}

//решение e*/

int N = 10;
for (int x = 0; x < N; ++x)
{
	if (x < 5)
	{
		for (int y = 0; y <= N; ++y)
		{
			if (x <= y && y <= N - 1 - x)
			{
				cout << "*";
			}
			else
			{
				cout << " ";
			}

		}
	}
	else
	{
		for (int y = 0; y <= N; ++y)
		{
			if (x >= y && y >= N - 1 - x)
			{
				cout << "*";
			}
			else
			{
				cout << " ";
			}
		}
	}
	cout << endl;
}
return 0;

}


	///решение ж
int N = 10;
for (int x = 0; x <= N; ++x)
{
	if (x <= 5)
	{
		for (int y = 0; y <= N; ++y)
		{
			if (x == y || x>y)
			{
				cout << "*";
			}
			else
			{
				cout << " ";
			}

		}
	}
	else
	{
		for (int y = 0; y <= N; ++y)
		{
			if (x+y == N || y<=N-x)
			{
				cout << "*";
			}
			else
			{
				cout << " ";
			}


		}
	}
	cout << endl;
}
return 0;

	}
//решение з
	int N = 10;
	for (int x = 0; x <= N; ++x)
	{
		if (x <= 5)
		{
			for (int y = 0; y <= N; ++y)
			{
				if (x + y == N ||  y > N-1-x)
				{
					cout << "*";
				}
				else
				{
					cout << " ";
				}

			}
		}
		else
		{
			for (int y = 0; y <= N; ++y)
			{
				if (x == y || x < y)
				{
					cout << "*";
				}
				else
				{
					cout << " ";
				}


			}
		}
		cout << endl;
	}
	return 0;

}


	// решение и
		int N = 9;
		for (int x = 0; x <= N; ++x)
		{
			for (int y = 0; y <= N; ++y)
			{
				if (x+y==N || y  <= N-1-x )
					cout << "*";
				else { cout << " "; }
			}
			cout << endl;

		}

		return 0;

	}
	// решение k
	int N = 9;
	for (int x = 0; x <= N; ++x)
	{
		for (int y = 0; y <= N; ++y)
		{
			if (x + y == N || y >= N - x)
				cout << "*";
			else { cout << " "; }
		}
		cout << endl;

	}

	return 0;

}*