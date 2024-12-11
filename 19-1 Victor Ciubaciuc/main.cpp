#include <iostream>
#include <binarySearchTree.h>

using namespace std;

int main() {
    // Write your main here
    bSearchTreeType<int> bSearchTree;

    bSearchTree.insert(2);
    bSearchTree.insert(20);
    bSearchTree.insert(20);
    bSearchTree.insert(75);
    bSearchTree.insert(1);
    bSearchTree.insert(54);
    bSearchTree.insert(37);

    cout << bSearchTree.treeNodeCount() << " Nodes in the tree." << endl;
    

    return 0;
}
