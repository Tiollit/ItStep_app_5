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

void Big(int arr_i[][5], const uint32_t col, const uint32_t row, int max)
{
    max = arr_i[0];
    for (size_t i = 0;i < col; i++)
    {
        for (size_t j = 0; j < row; j++)
        {
            if (i == j && max > arr_i[i])
            {
                max = arr_i[i];
            }                   
        }        
    }
    cout << "Maximum: " << max << endl;
}

void Small(int arr_i[][5], const uint32_t col, const uint32_t row, int min)
{
    min = arr_i[0];
    for (size_t i = 0;i < col; i++)
    {
        for (size_t j = 0; j < row; j++)
        {
            if (i == j && min < arr_i[i])
            {
                min = arr_i[i];
            }
        }
    }
    cout << "Maximum: " << min << endl;
}

int main()
{
    srand(time(0));
    const uint32_t size = 5;
    int min, max;
    int arr_i[size][size];
    RandArray<int>(arr_i, size, size);
    PrintArray<int>(arr_i, size, size);
    cout << endl;
    double arr_d[size][size];
    RandArray<double>(arr_d, size, size);
    PrintArray<double>(arr_d, size, size);
    cout << endl;
    char arr_c[size][size];
    RandArray<char>(arr_c, size, size);
    PrintArray<char>(arr_c, size, size);
    cout << endl;
    Big<int>(arr_i, size, size, max);
    cout << endl;
    return 0;
}


