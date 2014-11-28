//operator overloading
// ratio ver. 2

#include <iostream>
#include <queue>
using namespace std;


int main () {

	priority_queue<string> pq;
	pq.push("one");
	pq.push("two");
	pq.push("three");
	pq.push("four");

	while (!pq.empty()) {
		cout << pq.top() << endl;
		pq.pop();
	}

}

