#include <iostream>
#include <ctime>
#include <string>
using namespace std;

void HowMany(int month[], int d1, int d2, int m1, int m2, int y1, int y2)
{
	int y, days = 0, months = 0, years = 0, sum = 0;
	for (int i = y1; i <= y2; i++)
	{
		
		if (i % 4 == 0)
		{
			y = 365;
			month[1] = 29;
		}
		else
		{
			y = 364;
			month[1] = 28;
		}		
		if (i == y1)
		{
			for (int j = m1 + 1; j <= 12; j++)
			{
				months += month[j - 1];				
			}			
		}
		if (i == y2)
		{
			for (int k = m2 - 1; k >= 1; k--)
			{
				months += month[k - 1];				
			}
		}		
		else years += y;		
	}		
	days = month[m1 - 1] - d1 + d2;
	years = years - y;
	//cout << "years: " << years << endl;
	//cout << "months: " << months << endl;
	//cout << "days: " << days << endl;
	sum += years + months + days;	
	cout << "The number of days between 2 dates is: " << sum;
}

int main()
{
	int month[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
	int d1, d2, m1, m2, y1, y2;
	cout << "Incert 2 dates in format dd mm yy begining from the lovest one: " << endl;
	cout << "Incert 1-st date: " << endl;
	cin >> d1 >> m1 >> y1;
	cout << "Incert 2-d date: " << endl;
	cin >> d2 >> m2 >> y2;
	HowMany(month, d1, d2, m1, m2, y1, y2);	
	return 0;
}


