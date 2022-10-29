#include <iostream>
#include <ctime>
using namespace std;
//void PrintArray(int arr[], const uint32_t size)
//{
//  for (size_t i = 0; i < size; i++)
//  {
//      cout << arr[i] << "\t";
//  }cout << endl;
//}
//void PrintArray(double arr[], const uint32_t size)
//{
//  for (size_t i = 0; i < size; i++)
//  {
//      cout << arr[i] << "\t";
//  }cout << endl;
//}
//void PrintArray(char arr[], const uint32_t size)
//{
//  for (size_t i = 0; i < size; i++)
//  {
//      cout << arr[i] << "\t";
//  }cout << endl;
//}
template<typename T>
T Rand(char trigger = 'i')
{
    switch (trigger)
    {
    case 'i':
    {
        return rand() % 10;
    }break;
    case 'd':
    {
        return (1000 + rand() % 9999) * 0.1;
    }break;
    case 'c':
    {
        return 100 + rand() % 255;
    }break;
    }
}
template <typename T>
void RandArray(T arr[], const uint32_t size)
{
    char trigger = '0';
    if (typeid(arr[0]) == typeid(int))
    {
        trigger = 'i';
    }
    if (typeid(arr[0]) == typeid(double))
    {
        trigger = 'd';
    }
    if (typeid(arr[0]) == typeid(char))
    {
        trigger = 'c';
    }
    for (size_t i = 0; i < size; i++)
    {
        arr[i] = Rand<T>(trigger);
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
void PrintArray(T arr[], const uint32_t size)
{
    for (size_t i = 0; i < size; i++)
    {
        cout << arr[i] << "\t";
    }cout << endl;
}
int main()
{
    srand(time(0));
    const uint32_t size = 5;
    int arr_i[size];
    RandArray<int>(arr_i, size);
    PrintArray<int>(arr_i, size);
    cout << endl;
    double arr_d[size][size];
    RandArray<double>(arr_d, size, size);
    PrintArray<double>(arr_d, size, size);
    return 0;
}


