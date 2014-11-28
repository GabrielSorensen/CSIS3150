//operator overloading
// ratio ver. 2

using namespace std;
#include <cmath>
#include <iostream>

const double PI  =3.141592653589793238463;

int main () {
	int n = -1;
	double i = 0;
	cout << "Input how many times to divide sin" << endl;
	while (n < 0) {
		cin >> n;
	}
	double c = (2*PI)/n;
	//cout << n << endl;
	while (i <= 2*PI) {
		cout << "Sin("<< i <<")= " << sin(i) << endl;

		i = i + c;
	}


}

