#include <iostream>
#include <cmath>
#include <vector>
using namespace std;


int main() {
	long long N;
	cin >> N;
	vector<long long> a(200010);
	vector<long long> cnt(100010);
	
	for(int i = 1; i <= N; i++){
		cin >> a[i];	
	}
	long long ans = 0;
	
	for(int i = 1; i <= 99999; i++){
		cnt[i] = 0;
	}
	for(int i = 1; i <= N; i++){
		cnt[a[i]] += 1;
	}

	for(int i = 1; i <= 49999; i++){
		ans += cnt[i] * cnt[100000-i];
	}
	ans += cnt[50000] * (cnt[50000] - 1) / 2; 
	cout << ans  << endl;
	
	return 0;
}