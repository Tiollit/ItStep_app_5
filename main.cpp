#include <iostream>
#include <ctime>
using namespace std;

int Biggest(int a, int b)
{
    if (a % b == 0 && b % b == 0) cout << "The looking number is " << b;
    else return Biggest(a, b - 1);     
}

int main()
{
    int a, b;
    cout << "Incert 2 numbers: " << endl;
    cin >> a >> b;
    Biggest(a, b);
    return 0;
}


