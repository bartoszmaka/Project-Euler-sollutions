#include <iostream>

using namespace std;

int foo(int &value)
{
    value+=2;
    return value;
}

int main()
{
    int value = 5;

    cout<<foo(value)<<endl;
    return 0;
}
