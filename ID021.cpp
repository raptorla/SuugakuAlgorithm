#include <iostream>
#include <cmath>
#include <vector>
using namespace std;


int main() {
	long long n, r;
	cin >> n >> r;
	long long nfactors = 1; 
	long long rfactors = 1;
	long long nrfactors = 1;
	for(int i = 1; i <= n; i++){
		nfactors = nfactors * i;	
	}
	for(int i = 1; i <= r; i++){
		rfactors = rfactors * i;	
	}
	for(int i = 1; i <= n - r; i++){
		nrfactors = nrfactors * i;	
	}
	
	
	cout << nfactors/ (rfactors * nrfactors)   << endl;
	return 0;
}