#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

int main(){
    long long N;
    cin >> N;
    
    for(long long i = 1; i * i <= N; i++){
        if (N % i == 0){
            cout << i << endl;

            if(i*i != N){
                cout << (N / i) << endl;
            }
        }
        
        
    }
   
    return 0;
}