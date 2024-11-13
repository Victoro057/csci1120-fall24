 
//Data:  18 42 78 22 42 5 42 57 
 
#include <iostream>
#include "unorderedArrayListType.h"

using namespace std;

int main() {
    // Write your main here

    unorderedArrayListType list[8];

        //inserting the data according to the top of this page
    list->insertEnd(18);
    list->insertEnd(42);
    list->insertEnd(78);
    list->insertEnd(22);
    list->insertEnd(42);
    list->insertEnd(5);
    list->insertEnd(42);
    list->insertEnd(57);

    cout << "The smallest number in intList: " << list[0].min() << endl;


    return 0;
}
