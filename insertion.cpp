#include <iostream>
using namespace std;


struct node {
    int data = 0;
    node* next = nullptr;
};


void print(node* current) {
    for (node* temp = current; temp; temp = temp->next) {
        cout << temp->data << endl;
    }
}

void add(node* &current, int x) {
    node* added = new node;
    added->data = x;
    node* temp = current;
    if (current == nullptr) {
       current = added;
    }
    else {
        while (temp->next != nullptr) {
            temp = temp->next;
        }
        temp->next = added;
    }
}

int main() {

    node* head = new node;
    head->data = 5;
    node* second = new node;
    second->data = 10;
    head->next = second;
    print(head);
    cout << "now trying out the insertion" << endl;
    add(second, 15);
    print(head);
    cout << "lets keep going pal" << endl;
    add(second, 20);
    print(head);

}
