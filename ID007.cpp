#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int N, X, Y;
    int sum = 0;
    cin >> N >> X >> Y;
    for(int i=1;i <= N;i++){
        if(i % X == 0 || i % Y == 0){
            sum ++;
        }
    }
    cout << sum << endl;
}