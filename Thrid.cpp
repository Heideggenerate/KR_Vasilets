#include <iostream>

using namespace std;

//struct Node {
//    char ch;
//    Node* next;
//};
//
//void foo(char ch, Node*& head) {
//    Node* node = new Node{ch, head};
//    head = node;
//}

void print(Node*& p) {


    const char start = p->ch;
    int count = 0;

    while (p) {
        if (start == p->ch) {
            count++;
        }
        p = p->next;
    }
    cout << count;
}


int main() {
//    Node* head = nullptr;
//    foo('c', head);
//    foo('a', head);
//    foo('b', head);
//    foo('c', head);
//    print(head);
}
