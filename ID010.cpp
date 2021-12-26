#include <iostream>
using namespace std;
 
int main(){
    int N;
    long long multiplication = 1;
    cin >> N;
    while(N>0){
        multiplication *= N;
        N --;
    }
    cout << multiplication << endl;
 
}