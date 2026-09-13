#include <iostream>
#include <vector>
#include <deque>
using namespace std;

class card {
private:
	string suit;
	string rank;
public:
	card(string s, string r) {
		suit = s;
		rank = r;
	}
	void print() {
		cout << rank << "of" << suit << endl;
	}
};

class deck {
private:
card d[52];
public:
	deck()

};
/* this is a recursion algo peak stuff
int recursion(int x) {
	if (x == 1 || x==0) {
		return x;
	}
	else if (x < 0) {
		cout << "bad input big bro";
		exit(1);
	}
	int i = x - 1;
	return x + (recursion(i));
}
int x = 3;
	cout << &x; //& is the memory address of x.
	int* y = &x;
	int main() {
	vector<int> vec;
	vec.push_back(5);
	vec.push_back(15);
	cout << vec[1] << endl;
	cout << "should be 15" << endl;
	deque<int> x;
	x.push_back(5);
	x.push_back(15);
	cout << x[0] << endl;
	cout << "should be 5" << endl;

}

*/
// THIS IS HOW YOU WRITE A BASIC LINKED LIST
/*struct node {
	int data;
	node* next;
};
*/
/*
node* first = new node;
node* second = new node;
first->data = 10;
second->data = 20;
first->next = second;
second->next = nullptr;
node* current = first;
while (current != nullptr) {
	cout << current->data << endl;
	current = current->next;
}
*/




int main() {
	/*
	
	node* first = new node;
	node* second = new node;
	second->data = 20;
	first->data = 10;
	cout << first->data;
	first->next = second;
	second->next = nullptr;
	node* current = first;
	current->next = first->next;
	while (current != nullptr) {
		cout << current->data << endl;
		current = current->next;
	}
	*/
}
