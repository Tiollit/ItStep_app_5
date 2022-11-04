#include <iostream>
#include <ctime>
#include <string>
using namespace std;
int LeapYear(int i)
{
	int y;
	int month[12]{ 31,28,31,30,31,30,31,31,30,31,30,31 };
	if (i % 4 == 0)
	{
		y = 365;
		month[1] = 29;
	}
	else y = 364;
	return 0;
}

int HowManyDays(int d1, int d2, int m1, int m2, int y1, int y2)
{
	int month[12]{ 31,28,31,30,31,30,31,31,30,31,30,31 };
	int y, days = 0, months = 0, years = 0, sum = 0;
	if (y1 == y2)
	{
		LeapYear(y1);
		if (m2 > m1)
		{
			for (int i = m1; i <= m2; i++)
			{				
				if (i == m1) 
				{
					days = days + month[i - 1] - d1;
				}
				else if (i == m2) 
				{
					days = days + d2;
				}
				else months = months + month[i - 1];		
			}
		}
		else if (m2 == m1)
		{
			days = d2 - d1;
		}
	}
	else if (y1 != y2)
	{		
		for (int i = y1; i < y2; i++)
		{
			LeapYear(i);
			if (i == y1)
			{

				for (int i = m1; i <= 12; i++)
				{
					if (i == m1) days += month[i - 1] - d1;
					else months += month[i - 1];
				}
				for (int i = 1; i <= m2; i++)
				{
					if (i == m2) days += d2;
					else months += month[i - 1];
				}
			}
			else years += y;			
		}
	}
	sum = days + months + years;
	return sum;
}

int main()
{
	int month[12]{ 31,28,31,30,31,30,31,31,30,31,30,31 };
	int d1, d2, m1, m2, y1, y2, days = 0, months = 0, years = 0, sum = 0;
	cout << "Incert 2 dates in format dd mm yy begining from the lovest one: " << endl;
	cout << "Incert 1-st date: " << endl;
	cin >> d1 >> m1 >> y1;
	cout << "Incert 2-d date: " << endl;
	cin >> d2 >> m2 >> y2;
	sum = HowManyDays(d1, d2, m1, m2, y1, y2);
	cout << "The number of days between 2 dates is: " << sum;
	return 0;
}


