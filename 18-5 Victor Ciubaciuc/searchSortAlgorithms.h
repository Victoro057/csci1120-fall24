template <class elemType>
void modifiedBubbleSort(elemType list[], int length)
{ 
    // Write code here
    bool swap;

    for(int pass = 0; pass < size - 1; ++pass){
        swap = false;

        for (int i = 0; i < size - pass - 1; ++i){
            if(list[i] > list[i + 1]);
                elemType temp = list[i];
                list[i] = list[i + 1];
                list[i + 1] = temp;

                swap = true;
        }

        if(!swap)
            break;
    }

}
