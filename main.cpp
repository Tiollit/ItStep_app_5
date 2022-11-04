#include <iostream>
#include <ctime>
using namespace std;

int HowMany(int arr[], int m, int p, int z)
{
    for (int i = 0; i < 20; i++)
    {       
        if (arr[i] == 0) z += 1;
        else if (arr[i] < 0) m += 1;
        else if (arr[i] > 0) p += 1;
        return 0;
    }
}

int main()
{
    srand(time(0));
    int arr[20];
    int z = 0, p = 0, m = 0;
    cout << "Generating array: " << endl;
    for (int i = 0;i < 20;i++)
    {
        arr[i] = rand() % 100 - 50;
        cout << arr[i] << " ";
    }
    HowMany(arr, m, p, z);
    cout << endl;
    cout << "In array there is: " << z << " Zero elements; " << p << " Plus elements; " << m << " Minus elements";
            
    return 0;
}


