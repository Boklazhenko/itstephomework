#include <iostream>

using namespace std;

int countsDays(int startDay, int startMonth, int startYear, int endDay, int endMonth, int endYear);

int main()
{

	cout << countsDays(1, 1, 2000, 20, 12, 2000);

	return 0;
}


int countsDays(int startDay, int startMonth, int startYear, int endDay, int endMonth, int endYear)
{


	int d1 = 365; // дней в году
	int d2 = 366; // високосный год

	int arr1[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 }; // обычный год
	int arr2[12] = { 31,29,31,30,31,30,31,31,30,31,30,31 }; // високосный год

	int sumDay1 = startDay; // кол-во дней до конца начального года
	int sumDay2 = endDay; // кол-во дней прошло в конечном году
	//int sumDay1Year = 0; // кол-во дней если промеждуток лежит в одном году
	int dauInYears = 0; // кол-во дней в промежуточных годах


	if (startYear > endYear) {
		cout << "error";
	}


	if (startYear != endYear) {


		for (int i = startMonth - 1; i < 12; ++i) {

			if (startYear % 4 == 0 && startYear % 100 != 0 && startYear % 400 == 0) //дней до конца начального года, если високосный	
				sumDay1 += arr2[i];

			else
				sumDay1 += arr1[i];  //дней до конца начального года, если год обычный


		}





		for (int i = 0; i < endMonth - 1; ++i) {

			if (endYear % 4 == 0 && endYear % 100 != 0 && endYear % 400 == 0)//кол-во дней в промежуточных годах если високосный
				sumDay2 += arr2[i];

			else   					//кол-во дней в промежуточных годах если год обычный
				sumDay2 += arr1[i];

		}




		for (int i = startYear; i < endYear - 1; ++i) // окончательный расчет количества дней
		{
			if (i % 4 == 0 && i % 100 != 0 && i % 400 == 0)
			{
				dauInYears += d2 - 1;
			}
			else
				dauInYears += d1 - 1;
			--dauInYears;
		}


		int result = sumDay1 + sumDay2 + dauInYears;


		return result;
	}

	//--------------------------------------  В течении одного года ---------------------------------------------  

	int n = startDay;
	int m = endDay;

	if (startYear == endYear) {
		for (int i = 0; i < startMonth - 1; ++i) {
			if (startYear % 4 == 0 && startYear % 100 != 0 && startYear % 400 == 0)
				n += arr1[i];

			else
				n += arr2[i];
		}
		for (int i = 0; i < endMonth - 1; ++i) {
			if (startYear % 4 == 0 && startYear % 100 != 0 && startYear % 400 == 0)
				m += arr1[i];
			else
				m += arr2[i];

		}
		int result = m - n;
		return result;
	}


}
