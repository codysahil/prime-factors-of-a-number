#include<algorithm>
#include<iostream>
#include<math.h>
using namespace std;
// APPROACH_1
void primeFactors(int n) {
	while (n % 2 ==0) {
		cout << 2 << " ";
		n = n / 2;
	}
	for (int i = 3; i <= sqrt(n); i = i + 2) {
		while (n%i==0) {
			cout << i << " ";
			n = n / i;
		}
		
	}
	if (n > 2) {
		cout << n << " ";
	}
	
}
//APPROACH_2
void primefactors(int n) {
	int c = 2;
	while (n > 1) {
		if (n % c == 0) {
			cout << c << " ";
			n = n / c;
		}
		else c++;
	}
}
int main() {
	
	primeFactors(28);
	cout << endl;
	primeFactors(28);
	return 0;
}
