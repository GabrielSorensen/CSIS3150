//operator overloading
// ratio ver. 2

#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <algorithm>

using namespace std;

#define PI 4*atan(1)

int main () {
	string a, b, c, d, e, f, g, h, i, j;
	a = "Apple";
	b = "Brain";
	c = "Carrot";
	d = "Dog";
	e = "Elephant";
	f = "Fudge";
	g = "GOAT";
	h = "hAppy";
	i = "iGloo";
	j = "jacKet";

	vector<string> stringVector, vector2;
	stringVector.push_back(a);
	stringVector.push_back(b);
	stringVector.push_back(c);
	stringVector.push_back(d);
	stringVector.push_back(e);
	stringVector.push_back(f);
	stringVector.push_back(g);
	stringVector.push_back(h);
	stringVector.push_back(i);
	stringVector.push_back(j);

	cout << "vector1" << endl;
	for (int i=0; i< stringVector.size(); i++) {
		cout << stringVector.at(i) << endl;
	}

	cout << "vector2" << endl;
	for (int i=0; i< vector2.size(); i++) {
		cout << vector2.at(i) << endl;
	}

	transform(a.begin(), a.end(), a.begin(), :: tolower);

	cout << "vector1" << endl;
	for (int i=0; i< stringVector.size(); i++) {
		cout << stringVector.at(i) << endl;
	}

	stable_sort(stringVector.at(0), stringVector.at(stringVector.size()));

	cout << "vector1" << endl;
	for (int i=0; i< stringVector.size(); i++) {
		cout << stringVector.at(i) << endl;
	}

	reverse(stringVector.at(0), stringVector.at(stringVector.size()));

	cout << "vector1" << endl;
	for (int i=0; i< stringVector.size(); i++) {
		cout << stringVector.at(i) << endl;
	}

	swap(stringVector.at(5), stringVector.at(2));

	cout << "vector1" << endl;
	for (int i=0; i< stringVector.size(); i++) {
		cout << stringVector.at(i) << endl;
	}

	reverse_copy(stringVector.at(0), stringVector.at(stringVector.size()), vector2);

	cout << "vector2" << endl;
	for (int i=0; i< vector2.size(); i++) {
		cout << vector2.at(i) << endl;
	}
}
