#include <iostream>
#include <algorithm>
#include <vector>
#include <sstream>

using namespace std;
string str(int num){
    stringstream str;
    str << num
    return str.str();
}
int main()
{
    vector<int> double_palindromes;
    for(int i = 1; i<1000000; i++){
        if(str(i) == reversed(str(i)) ){
            if(str(bin(i)) == reversed(str(bin(i)))){
                double_palindromes.push_back(i);
            }
        }
    }
    cout<<sum(double_palindromes);


    return 0;
}
