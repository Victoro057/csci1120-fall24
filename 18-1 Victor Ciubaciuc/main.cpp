
#include <iostream>
#include "searchSortAlgorithms.h"     

using namespace std;

int main() {
    // Write your main here

    int list[] = {0, 5, 10, 15, 20};
    int size = 5;
    int item = 10;

    int result = recursiveSeqSearch(list, size, 0, item);

    if(result == -1)
        cout << "Not found in the list" << endl;
    else
        cout << "Item found at index: " << result << endl;

    return 0;
}
