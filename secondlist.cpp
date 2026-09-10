#include <iostream>
using namespace std;
struct node {
    int data = 0;
    node* next = nullptr;
};
void add(int x, node* &current) { //from back
    node* list = new node;
    list->data = x;
    node* copy = current;
    if (current == nullptr) {
    current = list;
    } else {
        while(copy->next != nullptr) {
            copy=copy->next;
        }
    copy->next = list;
    }
}
void print(node* current) {
    for (node* temp = current; temp; temp=temp->next) {
        cout << temp->data << endl;
    }
}
int main () {
    node* head = new node;
    head->data = 5;
    add(4,head);
    add(67,head);
    print(head);


}
