#include "unsortedtype.h"
template<class ItemType>
unsortedtype<ItemType>::unsortedtype()
{
    length = 0;
    currentPos = -1 ;
}
template<class ItemType>
void unsortedtype<ItemType>::MakeEmpty()
{
    length = 0;
}
template<class ItemType>
bool unsortedtype<ItemType>::IsFull()
{
    return(length == MAX_ITEMS);
}
template<class ItemType>
int unsortedtype<ItemType>::lengthIs()
{
    return length;
}
template<class ItemType>
void unsortedtype<ItemType>::ResetList()
{
    currentPos = -1;
}
template<class ItemType>
void unsortedtype<ItemType>::GetNextItem(ItemType& item)
{
    currentPos++;
    item = info[currentPos];
}
template<class ItemType>
void unsortedtype<ItemType>::RetrieveItem(ItemType& item ,bool &found)
{
    int location = 0;
    bool moreToSearch = (location < length);
    found = false ;
    while(moreToSearch && !found)
    {
        if(item == info[location])
        {
            found = true ;
            item = info[location];
        }
        else
        {
            location++;
            moreToSearch= (location < length);
        }
    }
}

template<class ItemType>
void unsortedtype<ItemType>::InsertItem(ItemType item)
{
    info[length] = item;
    length++;
}
template<class ItemType>
void unsortedtype<ItemType>::DeleteItem(ItemType item)
{
    int location = 0;
    while(item != info[location])
        location++;
    info[location] = info[length-1];
    length--;
}

