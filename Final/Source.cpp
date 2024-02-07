#include <iostream>
using namespace std;


int main() {
	list<string>teamNames;
	teamNames.push_back("Green");
	teamNames.push_back("Red");
	teamNames.push_front("Blue");
	teamNames.push_back("Yellow");
	cout << teamNames.front() << endl;
	return 0;
}