//addressBookType.h  
 
#ifndef H_addressBookType
#define H_addressBookType
  
#include <string>
#include <fstream>
#include "extPersonType.h"
 
using namespace std;

class addressBookType
{
public:
    void print() const;

    void printNameInTheMonth(int month);
    void printInfoOf(string lName);
    void printNamesWithStatus(string status);
    void printAt(int i);

    void printNamesBetweenLastNames(string last1, string last2);

    void insertAt(const extPersonType&  eP, int i);

    void insertLast(const extPersonType& eP);

    int search(string lName);

    void sort();

    void addEntry(const extPersonType& eP);
    bool deleteEntry(string lName);
    void saveData(ofstream&);

    addressBookType();
    ~addressBookType();     //Destructor

private:
    extPersonType list[500];

    struct Node{
        extPersonType person;
        Node* next;

        Node(const extPersonType& p) : person(p), next(nullptr){

        }
    };

    Node* head;
    int length;
};

#endif
