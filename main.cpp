#include <iostream>
#include <iomanip>
#include <ctime>
#include <stdlib.h>
using namespace std;

template<typename T>
T Rand(char trigger = 'i')
{
    switch (trigger)
    {
    case 'i':
    {
        return rand() % 100;
    }break;
    case 'd':
    {
        return (1000 + rand() % 999) * 0.1;
    }break;
    case 'c':
    {
        return 100 + rand() % 255;
    }break;
    }
}


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

void Big(int arr[], const uint32_t size, int max)
{
    max = arr[0];
    for (size_t i = 0;i < size; i++)
    {
        for (size_t j = 0; j < size; j++)
        {
            if (i == j && max > arr[i])
            {
                max = arr[i];
            }                   
        }        
    }
    cout << "Maximum: " << max << endl;
}

int main()
{
    srand(time(0));
    const uint32_t size = 4;
    int min, max;
    void Matrix(arr, size);
    void Big(arr, size, max);
    
    return 0;
}


