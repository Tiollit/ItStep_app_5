//Написати гру «Бики та корови».Програма «загадує» чотиризначне число і гравець має вгадати його.
//Після введення користувачем числа програма повідомляє,скільки цифр числа вгадано(бики) і скільки цифр вгадано
//і стоїть на потрібному місці(корови).Після відгадування числа на екран необхідно вивести кількість зроблених
//користувачем спроб
#include <iostream>
#include <cmath>
#include <ctime>
using namespace std;
int Cow(int arr[], int number[], int p)
{
    int n, k = 3, v;
    cout << "Incert number: " << endl;
    cin >> n;
    cout << endl;
    for (int i = 0; i < 3; i++)
    {
        v = pow(10, k);
        number[i] = n % v;
        //cout << number[i] << " ";
        n = n - number[i] * v;
        k -= 1;
    }
    number[3] = n;
    for (int i = 0; i < 4; i++) cout << number[i] << " ";
    int b = 0, c = 0;
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (number[i] == arr[j])
            {
                b = b + 1;
                if (i == j) c += 1;
            }                
        }
    }         
    cout << "You try in game: " << p << endl;
    cout << "You count in game: " << endl;
    cout << "Buls: " << b << endl;
    cout << "Cows: " << c << endl;
    system("pause");
    if (c == 4)
    {
        cout << "Congratulation, You found the right nember!" << endl;
        return 0;
    }
    if (b != c)
    {
        return Cow(arr, number, p + 1);
    }
}

int main()
{
    srand(time(0));
    int arr[4], number[4], p = 1;
    cout << "Generating number." << endl;
    for (int i = 0; i < 4; i++)
    {
        arr[i] = rand() % 9;
        cout << arr[i] << " ";
    }
    if (arr[0] == 0) arr[0] = rand () % 8 + 1;
    cout << endl;    
    Cow(arr, number, p);

    return 0;
}


