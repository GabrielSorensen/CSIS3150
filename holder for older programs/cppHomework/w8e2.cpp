//
using namespace std;

#include <iostream>

void fibonachi(int n);
unsigned long long a = 1;
unsigned long long b = 1;
unsigned long long i;
unsigned long long c;
int main () {
	int g = 0;
	cout << "Enter number to count up to in fibonachi:" << endl;
	cin >> g;
	cout << "fibbonachi n times:" << endl;
	fibonachi(g);
}

void fibonachi(int n){
	if (n == 0) {
		cout << "0" << endl;
	}

	cout << "1" << endl;
	for (i = 3; i <= n; i++) {
		c = a + b;
		a = b;
		b = c;
		cout << b << endl;
	}

}
