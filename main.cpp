#include <iostream>
#include <iomanip>
#include <ctime>
#include <stdlib.h>
using namespace std;

void Matrix(int arr[], const uint32_t size)
{
    for (size_t i = 0;i < size; i++)
    {
        for (size_t j = 0; j < size; j++)
        {
            arr[i][j] = rand() % 100;
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }   
}

void Matrix(double arr[], const uint32_t size)
{   
    for (size_t i = 0;i < size; i++)
    {
        for (size_t j = 0; j < size; j++)
        {
            arr[i][j] = (rand() % 100) * 0.1;
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }    
}

void Matrix(char arr[], const uint32_t size)
{    
    for (size_t i = 0;i < size; i++)
    {
        for (size_t j = 0; j < size; j++)
        {
            arr[i][j] = rand() % 255;
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    /*{
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
    }*/    
}

int main()
{
    srand(time(0));
    const uint32_t size = 4;
    
    return 0;
}


