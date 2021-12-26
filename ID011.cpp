#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int N;
    cin >> N;

    
    cout << 2 << " ";
    
    for(int i=3; i <= N; i+=2){
        int flag=0;
        for(int j=3; j <= sqrt(i); j+=2){
            if(i % j == 0){
                flag = 1;
            }
        }
        if(flag==0){
            cout << i << " ";
        }
    }
    return 0;
}