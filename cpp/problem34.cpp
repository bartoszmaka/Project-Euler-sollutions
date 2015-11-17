#include <iostream>
#include <vector>
#include <sstream>

#include <ctime>


using namespace std;

string to_s(int number){
    stringstream ss;
    ss << number;
    string s = ss.str();
    return s;
}

int main(){
    int factorial[] = {0,1,2,6,24,120,720,5040,40320,362880};
    vector<int> numbers;
    int begin = clock();

    for(int i = 3; i<150; i++){
        string num = to_s(i);
        int sum = 0;
        for(int j = 0; i<num.size(); j++){
            sum += factorial[i-'0'];
            if (i == sum){
                numbers.push_back(i);
            }
        }
    }
    for(int i = 0; i<numbers.size(); i++){
        cout<<numbers[i]<<endl;
    }

    cout<<"execution time: "<<(clock() - begin)/double(CLOCKS_PER_SEC)<<"sec"<<endl;
    return 0;
}
