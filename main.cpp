#include <iostream>
#include<iomanip>
#include <ctime>
#include<stdlib.h>
using namespace std;
#define n 4;

int Matrix(int arr[])
{
    for (int i = 0;i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            arr[i][j] = rand() % 100;
        }
    }
}

double Matrix(double arr[])
{    
    for (int i = 0;i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            arr[i][j] = rand() % 100 + 0.1;
        }
    }
}

int main()
{
    srand(time(0));
    
    
    return 0;
}


