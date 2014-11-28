//operator overloading
// ratio ver. 2

#include <iostream>
#include <list>
#include <string>
using namespace std;

typedef list<string> List;
typedef List::iterator it;
void print(List & Lst);

int main () {
	List mylist;
	mylist.push_back("one");
	mylist.push_back("two");
	mylist.push_back("three");
	mylist.push_back("four");

	print(mylist);

}

void print(List & Lst) {
	cout << endl;
	for (it iter = Lst.begin(); iter != Lst.end(); iter++) {
		cout << *iter << endl;
	}
}
