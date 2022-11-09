//Написати перевантажені функції (int, double,char) для виконання таких завдань :
//Ініціалізація квадратної матриці;
//Вивід матриці на екран;
//Визначення максимального й мінімального елемента на головній діагоналі матриці;
//Сортування елементів за зростанням окремо для кожного рядка матриці.

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
void Big(T arr[][5], const uint32_t col, const uint32_t row)
{
    T max = arr[0][0];
    for (size_t i = 0;i < col; i++)
    {
        for (size_t j = 0; j < row; j++)
        {
            if (i == j && max < arr[i][j])
            {
                max = arr[i][j];
            }                   
        }        
    }
    cout << "Maximum: " << max << endl;
}

template <typename T>
void Small(T arr[][5], const uint32_t col, const uint32_t row)
{
    T min = arr[0][0];
    for (size_t i = 0;i < col; i++)
    {
        for (size_t j = 0; j < row; j++)
        {
            if (i == j && min > arr[i][j])
            {
                min = arr[i][j];
            }
        }
    }
    cout << "Minimum: " << min << endl;
}

template <typename T>
void Sort(T arr[][5], uint32_t m, const uint32_t row)
{                                                             
    T n;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < row - 1; j++)
        {
            if (arr[m][j] > arr[m][j + 1])
            {
                n = arr[m][j];
                arr[m][j] = arr[m][j + 1];
                arr[m][j + 1] = n;
            }
        }
    }

    for (int i = 0; i < row; i++)
    {
        cout << arr[m][i] << "\t";
    }
    cout << endl;
}

int main()
{
    srand(time(0));
    const uint32_t size = 5;   
    int arr_i[size][size];
    cout << "Array type Int: " << endl;
    RandArray<int>(arr_i, size, size);
    PrintArray<int>(arr_i, size, size);
    Big<int>(arr_i, size, size);
    Small<int>(arr_i, size, size);
    cout << endl;
    cout << "Sorted array type Int: " << endl;
    Sort<int>(arr_i, 0, size);
    Sort<int>(arr_i, 1, size);
    Sort<int>(arr_i, 2, size);
    Sort<int>(arr_i, 3, size);
    Sort<int>(arr_i, 4, size);
    cout << endl;
    cout << endl;
    cout << "Array type Double: " << endl;
    double arr_d[size][size];
    RandArray<double>(arr_d, size, size);
    PrintArray<double>(arr_d, size, size);
    Big<double>(arr_d, size, size);
    Small<double>(arr_d, size, size);
    cout << endl;
    cout << "Sorted array type Double: " << endl;
    Sort<double>(arr_d, 0, size);
    Sort<double>(arr_d, 1, size);
    Sort<double>(arr_d, 2, size);
    Sort<double>(arr_d, 3, size);
    Sort<double>(arr_d, 4, size);
    cout << endl;
    cout << endl;
    cout << "Array type Char: " << endl;
    char arr_c[size][size];
    RandArray<char>(arr_c, size, size);
    PrintArray<char>(arr_c, size, size);
    cout << endl;    
    
    return 0;
}


