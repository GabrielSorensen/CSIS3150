//operator overloading
// ratio ver. 2

#include <iostream>
#include <algorithm>
using namespace std;


int main () {
	char s[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	cout << endl;
	for (int i = 0; i < 20; i++) {
		random_shuffle(s, s+26);
		cout << s << endl;
	}
	cout << s << endl;
	sort(s, s+26);
	cout << s << endl;

}


