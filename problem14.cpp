#include <iostream>
#include <ctime>

using namespace std;

int collatz(unsigned int n){
    int len = 1;
    while(n != 1){
        len++;
        if(n%2 == 0){
            n = n/2;
        }else{
            n = (3*n)+1;
        }
    }
    return len;
}

int main()
{
    int begin = clock();
    int max = 1;
    int result = 1;

    for(unsigned int i = 2 ; i<1000000 ; i++){
       	result = collatz(i);
        if(result>max){
            max = result;
            cout<<i<<"\t"<<result<<"\t"
               	<<(clock()-begin)/double(CLOCKS_PER_SEC)
                <<"sec\t"<<endl;
        }
    }

    cout<<"execution time: "
        <<(clock()-begin)/double(CLOCKS_PER_SEC)<<"sec"<<endl;
    return 0;
}
