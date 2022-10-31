#include <iostream>

using namespace std;

bool isPrime(int number)
{
    for (int i = 2; i < number; i++)
    {
        if (number % i == 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int number;
    cout << "Enter a number: ";
    cin >> number;

    if (isPrime(number) == true)
    {
        cout << "The number " << number << " is prime" << endl; //число простое
    }
    else
    {
        cout << "The number " << number << " is composite" << endl; //число составное 
    }
}
