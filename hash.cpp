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

/*
struct letter {
    char cha;
    int da;
    letter(char c, int d) {
        cha = c;
        da = d;
    }
};

int main () {
    string n = "hello";
    letter cha();
    unordered_map<char, int> map;
    for (int i = 0; i < n.length(); i++) {
        map[n[i]]++;
    }

    for (auto cha : map) {
        cout << cha.first << ", " << cha.second << endl;
    }
}
vector<int> nums = {1, 2, 3, 2, 1, 1, 5, 2};
gotta count the numbers


int main () {
    vector<int> nums = {1, 2, 3, 2, 1, 1, 5, 2};
    unordered_map <int, int> map;
    for (int i = 0; i < nums.size(); i++) {
        map[nums[i]]++;
    }
    for (auto final : map) {
        cout << final.first << ", " << final.second << endl;
    }
}

*/



