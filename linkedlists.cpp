#include <iostream>
using namespace std;


struct node {
    int data = 0;
    node* next;
};

void add(int x, node* &current) {
    node* list = new node;
    list->data = x;
   node* copy = current;
    if (current == nullptr) {
        current = list;
        return;
    } else {
    while (copy->next != nullptr) {
        copy = copy->next;
    }
}
    copy->next = list;
}

int count(node* current){
    int x = 0;
    for (node* temp = current; temp; temp = temp->next) {
        x +=1;
    }
    return x;
}

void front(int x, node* &current) {
    node* list = new node;
    list->data = x;
    list->next = current;
    current = list;
}

bool find(int x, node* current) {
    bool z = 1;
      for (node* temp = current; temp; temp = temp->next) {
        if (x == temp->data){
            return z;
        }
    }
    z = 0;
    return z;
}

void print(node* start) {
    for (node* temp = start; temp; temp = temp->next) {
        cout << temp->data << endl;
    }
}

void removeFront(node* &current) {
node* copy = current;
copy = current->next;
delete current;
current = copy;
}

void removeBack(node* &current) {

    // wanna remove from back ok
node* copy = current;
if (current == nullptr) {
    delete current;
    return;
} else {
    while (copy->next->next != nullptr) {
        copy=copy->next;
    }
    delete copy->next;
    copy->next=nullptr;
    return;
}

}

int main () {
node* head = new node;
    head->data = 1;
    node* second = new node;
    second->data = 2;
    head->next = second;
    second->next = nullptr;
    add(3,head);
    add(4,head);
    front(5,head);
    removeFront(head);
    removeBack(head);
    print(head);
   cout << find(1,head) << endl;  
   add(67,head);
   cout << count(head) << endl; //should be 4
}
