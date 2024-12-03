#ifndef search_Sort_Algorithms_h
#define search_Sort_Algorithms_h


template <class elemType>
int recursiveSeqSearch(const elemType list[], int length, int index, const elemType& item){
    if(index >= length)
        return -1;
    if(list[index] == item)
        return index;
    return recursiveSeqSearch(list, length, index + 1, item);
}

/*
template <class elemType>
int seqSearch (const elemType list[], int length, const elemType& item){
    int loc;
    bool found = false;

    loc = 0;

    while (loc < listLength && !found)
        if (list[loc] == item)
            found = true;
        else    
            loc++;

    if (found)
        return loc;
    else    
        return -1;
}
*/

#endif
