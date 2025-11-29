#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
};

int main(){

    Node* head = new Node();
    Node* second = new Node();

    head -> data = 2;
    head -> next = second;

    second-> data = 3;
    second -> next = NULL;

    cout << "hello world" << endl;


    return 0;
}