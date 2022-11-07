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

template <typename T>
void RandArray(T arr[][5], const uint32_t col, const uint32_t row)
{
    char trigger = '0';
    if (typeid(arr[0][0]) == typeid(int))
    {
        trigger = 'i';
    }
    if (typeid(arr[0][0]) == typeid(double))
    {
        trigger = 'd';
    }
    if (typeid(arr[0][0]) == typeid(char))
    {
        trigger = 'c';
    }
    for (size_t i = 0; i < col; i++)
    {
        for (size_t j = 0; j < row; j++)
        {
            arr[i][j] = Rand<T>(trigger);
        }
    }
}

template <typename T>
void PrintArray(T arr[][5], const uint32_t col, const uint32_t row)
{
    for (size_t i = 0; i < col; i++)
    {
        for (size_t j = 0; j < row; j++)
        {
            cout << arr[i][j] << "\t";
        }
        cout << endl;
    }
    cout << endl;
}

template <typename T>
void Big(T arr[][5], const uint32_t size, int max)
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
    const uint32_t size = 5;
    int min, max;
    
    
    return 0;
}


