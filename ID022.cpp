#include <iostream>
#include <cmath>
#include <vector>
using namespace std;


int main() {
	long long N;
	cin >> N;
	vector<long long> a(N);
	
	for(int i = 0; i < N; i++){
		cin >> a[i];	
	}
	long long ans = 0;
	
	for(int i = 0; i < N; i++){
		for(int j = i + 1; j < N; j++){
			if(a[i]+a[j] == 100000) ans ++;
		}
	}
	cout << ans  << endl;
	return 0;
}