#include <iostream>
#include <iomanip>
#include <ctime>
#include <stdlib.h>
using namespace std;

int Matrix(int arr[])
{
    int arr[4][4];
    for (size_t i = 0;i < 4; i++)
    {
        for (size_t j = 0; j < 4; j++)
        {
            arr[i][j] = rand() % 100;
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    return arr[4][4];
}

double Matrix(double arr[])
{
    double arr[4][4];
    for (size_t i = 0;i < 4; i++)
    {
        for (size_t j = 0; j < 4; j++)
        {
            arr[i][j] = rand() % 100 + 0.1;
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    return arr[4][4];
}

char Matrix(char arr[])
{
    char arr[4][4];
    arr[4][4] =
    {
        {'h', 'e', 'l', 'l'},
        {'b', 'a', 'c', 'k'},
        {'r', 'e', 'a', 'l'},
        {'f', 'a', 'l', 'l'}
    };
    for (size_t i = 0; i < 4; i++)
    {
        for (size_t j = 0; j < 4; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    return arr[4][4];
}

int main()
{
    srand(time(0));
    
    
    return 0;
}


