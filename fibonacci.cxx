#include <iostream>

using namespace std; 

int main ()
{

    double fibonaccizahl;
    double fib0=0;
    double fib1=1;
    double fib2;

    cout << "Welche Fibonaccizahl willst du hoeren?" << endl;
    cin >> fibonaccizahl;
    
    if (fibonaccizahl==0)
    {
        cout << "Die " << fibonaccizahl << ". Fibonaccizahl ist " << fib0 << endl;
    }
    else if (fibonaccizahl==1)
    {
        cout << "Die " << fibonaccizahl << ". Fibonaccizahl ist " << fib1 << endl;
    }
    else
    {
        for (int i=0; i<fibonaccizahl-1; i++)
        {
            fib2=fib0+fib1;
            fib0=fib1;
            fib1=fib2;
        }
        cout << "Die " << fibonaccizahl << ". Fibonaccizahl ist " << fib2 << endl;
    }
    return 0;
}