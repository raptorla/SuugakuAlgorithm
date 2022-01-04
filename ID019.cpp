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
	long long ans1 = 0;
	long long ans2 = 0;
	long long ans3 = 0;
	
	for(int i = 0; i < N; i++){
		if(a[i] == 1) ans1 ++;
		if(a[i] == 2) ans2 ++;
		if(a[i] == 3) ans3 ++;
	}
	cout << (ans1 * (ans1-1)) / 2  + (ans2 * (ans2-1)) / 2  + (ans3 * (ans3-1)) / 2  << endl;
	return 0;
}