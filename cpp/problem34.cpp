#include <iostream>
#include <vector>
#include <sstream>
#include <ctime>

using namespace std;

string to_s(unsigned int number){
    stringstream ss;
    ss << number;
    string s = ss.str();
    return s;
}

int main(){
    unsigned int factorial[] = {0,1,2,6,24,120,720,5040,40320,362880};
    vector<unsigned int> numbers;
    int begin = clock();

    for(unsigned int range = 20; range <100 ; range++){
        bool found = false;
        int delta = clock();
        for(unsigned int i = (range*1000000) ; i<((range+1)*1000000)-1 ; i++){
            unsigned int sum = 0;
            string digits = to_s(i);

            for(unsigned int j = 0; j<digits.length() ; j++){
                unsigned int digit = digits[j]-'0';//char to int
                sum += factorial[(digit)];
            }

            if(sum == i){
                found = true;
                numbers.push_back(i);
            }

        }
        if(found == true){
            for(unsigned int i = 0; i<numbers.size(); i++){
                cout<<numbers[i]<<endl;
            }
        }else{
            cout<<"numbers not found in range ("
                <<range*1000000<<" - "<<((range+1)*1000000)-1<<") "
                <<(clock() - begin)/double(CLOCKS_PER_SEC)<<"sec"
                <<" delta: "
                <<(clock() - delta)/double(CLOCKS_PER_SEC)<<"sec"
                <<endl;

        }
        numbers.clear();
    }

        cout<<"execution time: "<<(clock() - begin)/double(CLOCKS_PER_SEC)<<"sec"<<endl;
        return 0;
}
