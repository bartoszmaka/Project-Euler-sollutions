#include <iostream>
using namespace std;
int fib(int n);

int main()
{
    long long sum = 0;

    for (int i=1; i<=33;i++)
    {
        int x = fib(i);
        if (x%2==0)
        {
            sum += x;
        }
    }
    cout<<sum<<endl;
    return 0;
}

int fib(int n)
{
    int a = 0;
    int b = 1;
    int c = 0;
    for (int i=0;i<n;i++)
    {
        c = a;
        a = b;
        b = c+b;
    }
    return a;
}
