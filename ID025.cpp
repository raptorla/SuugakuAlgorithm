#include <iostream>
#include <cmath>
#include <vector>
using namespace std;


int main() {
	long long N;
	cin >> N;
	vector<long long> A(200010);
	vector<long long> B(200010);
	double ans = 0.0;
	
	for(int i = 0; i < N; i++){
		cin >> A[i];	
	}
	for(int i = 0; i < N; i++){
		cin >> B[i];	
	}
	
	for(int i = 0; i < N; i++){
		ans += 1.0 / 3.0 * A[i] + 2.0 / 3.0 * B[i];
	}
	
	printf("%.12lf\n", ans);
	
	return 0;
}