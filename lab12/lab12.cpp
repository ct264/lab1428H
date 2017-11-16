#include <iostream>

using namespace std;

int mulNumbers(int n);
int fib(int n);

int mulNumbers(int n)
{
    // When to stop
    if (n == 1)
        return n;
    return n * mulNumbers(n-1);
}

int main()
{
    int n;
    cout << "Pick a number" << endl;
    cin >> n;
    cout << "Factorial: " << endl;

    cout << mulNumbers(n) << endl;
    cout << "Fibonacci: " << endl;
    cout << fib(n) << endl;

}

    int fib(int n)
    {
        if (n == 1)
            {
            return n;
            }
        else if (n == 0)
           {
            return n;
           }
        else;
        {
        return fib(n-1)+fib(n-2);
        }
    }
