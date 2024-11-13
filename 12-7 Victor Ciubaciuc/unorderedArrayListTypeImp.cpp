
#include <iostream>
#include "unorderedArrayListType.h"
 
using namespace std; 

void arrayListType::removeAt(int location){
     if (location < 0 || location >= length)
        cout << "The location of the item to be removed "
             << "is out of range." << endl;
    else
    {   //This assigns the element to last
        list[location] = list[length - 1];
            //decreasing the list length by 1
        length--;
    }
}
