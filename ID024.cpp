#include <iostream>
#include <cmath>
#include <vector>
using namespace std;


int main() {
	long long N;
	cin >> N;
	vector<long long> P(60);
	vector<long long> Q(60);
	
	for(int i = 0; i < N; i++){
		cin >> P[i] >> Q[i];	
	}
	
	double ans = 0.0;
	for(int i = 0; i < N; i++){
		ans += 1.0 * Q[i] / P[i];
	}
	
	printf("%.12lf\n", ans);
	
	return 0;
}