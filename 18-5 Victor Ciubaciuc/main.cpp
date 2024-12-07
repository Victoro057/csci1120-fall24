#include "searchSortAlgorithms.h"
#include <iostream>

using namespace std;

int main() {
    // Write your main here
    const int size = 10;
    int array[size] = {64, 34, 25, 12, 22, 11, 90, 88, 77, 66};

        cout << "Unsorted array:" << endl;
    for (int i = 0; i < size; ++i){
        cout << array[i] << " ";

    }
    cout << endl;

    modifiedBubbleSort(array, size);

   
        cout << endl << "Sorted array: " << endl;
    for(int i = 0; i < size; ++i){
        cout << array[i] << " ";

    }
    cout << endl;
    
    return 0;
}
