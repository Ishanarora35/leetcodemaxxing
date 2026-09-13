#include <iostream>
#include <map>
#include <unordered_map>
#include <vector>
#include <string>
using namespace std;

struct person {
	string name;
	int age;
	person(string n, int a) {
		name = n;
		age = a;
	}
};


int main() {

person c();
	unordered_map<string, int> map;
	map["ishan"] = 20;
	map["john"] = 40;
	string x = "found";

	// modifying the data now
	map["john"] = 32;
	cout << map["john"] << endl;

	if (map.count("bob")) {
		cout << x;
	}
	else {
		x = "not found";
		cout << x << endl;
	}
for (auto c: map) {
	cout << c.first << ", " << c.second << endl;
}
}



