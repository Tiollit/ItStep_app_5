#include <iostream>
#include <ctime>
using namespace std;

int Middle(int arr[], int m)
{
    m = 0;
    for (int i = 0; i < 10; i++)
    {
        m += arr[i];
    }   
    return m / 10;
}
int main()
{
    int arr[10];
    int m = 0;
    cout << "Generating array: " << endl;    
    for (int i = 0; i < 10; i++)
    {
        arr[i] = rand() % 100;
        cout << arr[i] << " ";
    }
    m = Middle(arr, m);
    cout << "Middle element of array is: " << m;
    return 0;
}


