#include <iostream>
#include <cmath>
#include <vector>
using namespace std;


int main() {
	long long N;
	cin >> N;
	vector<long long> P(100010);
	vector<long long> Q(100010);
	
	for(int i = 0; i < N; i++){
		cin >> P[i] >> Q[i];	
	}
	
	double ans = 0;
	for(int i = 0; i < N; i++){
		ans += Q[i] / P[i];
	}
	
	printf("%.12lf\n", ans);
	
	return 0;
}