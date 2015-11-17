#include <iostream>
#include <sstream>

using namespace std;

bool is_palindrome(int num)
{
    stringstream ss;
    ss << num;
    string number = ss.str();

    for (int i=0; i!=number.size()/2;i++)
    {
        if (number[i] != number[number.size()-(i+1)])
        {
            return false;
        }
    }
    return true;
}

int main()
{

    for (int i = 999; i>=900; i--)
    {
        for(int j = 999; j>=900; j--)
        {
            int number = i*j;
            if (is_palindrome(number))
            {
                cout<<is_palindrome(number)<<endl;
            }

        }
    }
    return 0;
}
