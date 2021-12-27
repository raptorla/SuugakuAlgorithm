#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

long long GCD(long long a, long long b){
	while(a >= 1 && b >= 1){
			if(a > b) a = a % b;
			else b = b % a;
		}
		if(a>=1) return a;
		else return b;
}


int main() {
	long long N;
	cin >> N;
	vector<long long> a(N);
	
	for(int i = 0; i < N; i++){
		cin >> a[i];	
	}
	long long ans = GCD(a[0],a[1]);
	for(int i = 2; i < N; i++){
		ans = GCD(a[i],ans);
	}
	cout << ans << endl;
	return 0;
}