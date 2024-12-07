#include <iostream>
#include "unorderedLinkedList.h"

using namespace std;

int main() {
    // Write your main here
    Node<int>* head = nullptr;

    append(head, 10);
    append(head, 7);
    append(head, 41);
    append(head, 1);
    append(head, 23);
    append(head, 65);
    append(head, 14);

    cout << "List: ";
    print(head);

    selectionSort(head);

    cout << "Sorted:";
    print(head);


    return 0;
}
