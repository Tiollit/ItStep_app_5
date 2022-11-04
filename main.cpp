#include <iostream>
#include <ctime>
using namespace std;

int HowMany(int arr[], int m, int p, int z, int n)
{    
    for (int i = 0; i < n; i++)
    {       
        if (arr[i] == 0) z += 1;
        else if (arr[i] < 0) m += 1;
        else if (arr[i] > 0) p += 1;       
        return m, p, z;
    }
}

int main()
{
    srand(time(0));
    int arr[20];
    int m = 0, p = 0, z = 0;
    cout << "Generating array: " << endl;
    for (int i = 0;i < 20;i++)
    {
        arr[i] = rand() % 100 - 50;
        cout << arr[i] << " ";
    }
    int n = sizeof(arr) / sizeof(arr[0]);
    HowMany(arr, m, p, z, n);
    cout << endl;
    cout << "In array there is: " << z << " Zero elements; " << p << " Plus elements; " << m << " Minus elements";
            
    return 0;
}


