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
	long long ans4 = 0;
	for(int i = 0; i < N; i++){
		if(a[i] == 100) ans1 ++;
		if(a[i] == 200) ans2 ++;
		if(a[i] == 300) ans3 ++;
		if(a[i] == 400) ans4 ++;
	}
	cout << ans1 * ans4 + ans2 * ans3<< endl;
	return 0;
}