#include <iostream>
using namespace std;

// Write code here
template <class elemType>
struct Node{
    elemType data;
    Node* next;
};

template <class elemType>
Node<elemType> minLocation(Node<elemType>* start){
    Node<elemType>* minNode = start;
    Node<elemType>* current = start -> next;

    while(current != nullptr){
        if(current -> data < minNode -> data)
            minNode = current;
        current = current -> next;
    }   

    return minNode;   
}

template <class elemType>
void swap(Node<elemType>* first, Node<elemType>* second){
    if(first == nullptr || second == nullptr)
        return;

    elemType temp = first -> data;
    first -> data = second -> data;
    second -> data = temp;
}

template <class elemType>
void selectionSort(Node<elemType>* head){
    if(head == nullptr)
        return;
    Node<elemType>* current = head;

    while(current != nullptr){
        temp = temp -> next;
    }
    temp -> next = newNode;
   
}

template <class elemType>
void print(Node<elemType>* head){
    Node<elemType>* temp = head;
    while(temp != nullptr){
        cout << temp -> data << " ";
        temp = temp -> next;
    }
    cout << endl;
}

template <class elemType>
void append(Node<elemType>*& head, elemType value){
    Node<elemType>* newNode = new Node<elemType>;
    newNode -> data = value;
    newNode -> next = nullptr;

    if(head == nullptr){
        head = newNode;
        return;
    }

    Node<elemType>* temp = head;
    while(temp -> next != nullptr)
        temp = temp -> next;

    temp -> next = newNode;

}
