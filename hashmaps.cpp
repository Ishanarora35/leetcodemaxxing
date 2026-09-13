#include "first.h"

// practice to understand hashmaps again for leetcode, cuz its good for big o notation
struct person {
    string name;
    int age;

    person(string s, int a){
        name = s;
        age = a;
    }
};


int main () {

    person ishan("ishan", 20);
    unordered_map<string, int> map;
    map["ishan"] = 20;
    map["John"] = 32;
    map["Alex"] = 25;

string x;
cout << "give me the person whos age u want" << endl;
cin >> x;

if (map.count(x)) {
    cout << "found" << endl;
    cout << map[x] << endl;
} else {
    cout << "not found" << endl;
    }



    string s;
    int d;
    cout << "what person value u wanna change" << endl;
    cin >> s;
    cin >> d;
    map[s] = d;
    cout << map[s] << endl;
    cout << map["John"] << endl;
    if (map[s] == map["John"]) {
        cout << "matching" << endl;
    } else {
        return 0;
    }
}   
