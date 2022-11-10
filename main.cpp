#include <iostream>
#include <ctime>
using namespace std;

void HowMany(int arr[], int n)
{   
    int z = 0, m = 0, p = 0;
    for (int i = 0; i < n; i++)
    {       
        if (arr[i] == 0) z += 1;
        else if (arr[i] < 0) m += 1;
        else if (arr[i] > 0) p += 1;  
    } 
    cout << "In array there is: " << z << " Zero elements; " << p << " Plus elements; " << m << " Minus elements";
}

int main()
{
    srand(time(0));
    int arr[20];    
    cout << "Generating array: " << endl;
    for (int i = 0;i < 20;i++)
    {
        arr[i] = rand() % 100 - 50;
        cout << arr[i] << " ";
    }
    cout << endl;
    int n = sizeof(arr) / sizeof(arr[0]);    
    HowMany(arr, n);           
    return 0;
}


