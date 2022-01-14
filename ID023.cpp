#include <iostream>
#include <cmath>
#include <vector>
using namespace std;


int main() {
	long long N;
	cin >> N;
	vector<long long> B(100010);
	vector<long long> R(100010);
	
	for(int i = 0; i < N; i++){
		cin >> B[i];	
	}
	for(int i = 0; i < N; i++){
		cin >> R[i];	
	}
	double ansB = 0;
	double ansR = 0;
	for(int i = 0; i < N; i++){
		ansB += B[i];
		ansR += R[i];
	}
	double ans = (ansB + ansR) / N;
	
	printf("%.12lf\n", ans);
	
	return 0;
}