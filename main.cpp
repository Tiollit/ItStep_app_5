#include <iostream>
#include <ctime>
#include <string>
using namespace std;
int LeapYear(int y1, int Month[1], int year)
{
	if (y1 % 4 == 0)
	{
		Month[1] = 29;
		year = 365;
	}
	else
	{
		Month[1] = 28;
		year = 364;
	}
	return 0;
}
int Final(int d1, int d2, int d3)
{	
	
}


int main()
{
	int d1, d2, m1, y1, m2, y2, year, month = 0, day = 0, sum = 0;
	int Month[12]{ 31,28,31,30,31,30,31,31,30,31,30,31 };	
	cout << "Incert 2 dates in format dd mm yy:" << endl;
	cout << "Incert 1st date: " << endl;
	cin >> d1 >> m1 >> y1;
	cout << "Incert 2d date: " << endl;
	cin >> d2 >> m2 >> y2;	   
	for (int i = y1; i <= y2; i++)
	{
		LeapYear(i, Month, year);
		sum += year;
		if (m2 > m1)
		{			
			for (int j = m1; j < m2; j++)
			{
				month = month + Month[j - 1];
				if (d1 > d2 && j = m1)
				{
					day = day + Month[j - 1] - d1 + d2;
					month = month - Month[j - 1];
				}
				else if (d1 < d2 && j = m1)
				{
					day = day - d1 + d2;
				}							
			}
		}
		if (m2 < m1)
		{
			for (int j = m1; j <= 12; j++)
			{
				month = month + Month[j - 1];
				if (d1 > d2 && j = m1)
				{
					day = day + Month[j - 1] - d1 + d2;
					month = month - Month[j - 1];
				}
				else if (d1 < d2 && j = m1)
				{
					day = day - d1 + d2;
				}
			}
			for (int j = 0; j < m2; j++)
			{
				month = month + Month[j-1];
			}
		}
	}
	sum = sum + month + day;
	return 0;
}


