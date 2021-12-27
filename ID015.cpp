#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

int main() {
	long long a, b;
	cin >> a >> b;
	
	while(a >= 1 && b >= 1){
		if(a>b){
			a = a % b;
		}
		else{
			b = b % a;
		}
	}
	if (a >= 1){
		cout << a << endl;
	}
	else{
		cout << b << endl;
	}
	
	
	return 0;
}