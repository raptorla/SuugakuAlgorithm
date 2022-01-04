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
			for(int k = j + 1; k < N; k++){
				for(int l = k + 1; l < N; l++){
					for(int m = l + 1; m < N; m++){
						if(a[i]+a[j]+a[k]+a[l]+a[m] == 1000) ans ++;
					}
				}
			}
		}
	}
	cout << ans  << endl;
	return 0;
}