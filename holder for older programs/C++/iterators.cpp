//operator overloading
// ratio ver. 2

#include <iostream>
#include <vector>
using namespace std;

typedef vector<int>::iterator it;

int main () {
	vector<int> v(11);
	for (int i=0; i <= 10; i++) {
		v[i] = i*i;
	}
	for (it it = v.begin(); it != v.end(); it++) {
		cout << *it << "\n";
	}

}

