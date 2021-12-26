#include <iostream>
#include <vector>
using namespace std;

int main(){
    long long N, S;
    vector<long long> a(61); 
    cin >> N >> S;
    for(int i=0; i<N; i++) {
        cin >> a[i];
    }
    for(long long bit = 0; bit<(1<<N); bit++) {
        long long sum = 0;
        for(int j=0; j<N; j++) {
            if(bit & (1<<j)){
                sum += a[j];
            }

        }
        if(sum == S) {
            cout << "Yes" << endl;
            return 0;
        }
        
    }
    cout << "No" << endl;
    return 0;
}