#include <iostream>
#include "unsortedtype.h"
#include "unsortedtype.cpp"
using namespace std;
//template<class ItemType>
int main()
{

   unsortedtype<int> obj;
   int a[5];
   int b ;
   a[0]={5};
   a[1]={7};
   a[2]={6};
   a[3]={9};
   if(obj.lengthIs()==5)
   {
       cout<<"List empty "<<endl;
   }
   else cout<<"List is not empty "<<endl;
    obj.InsertItem(a[0]);
    obj.InsertItem(a[1]);
    obj.InsertItem(a[2]);
    obj.InsertItem(a[3]);
    for(int i=0;i<4;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
    cout<<"Length of List : "<<obj.lengthIs()<<endl;
    a[4]= {1};
    obj.InsertItem(a[4]);
    cout<<" After Insert one element : ";
    for(int i=0;i<5;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
    bool found;
    obj.RetrieveItem(a[4],found);
    if(!found)
        cout<<"Item  found";
    else
        cout<<"Item is Not found";
    cout<<endl;

    obj.RetrieveItem(a[5],found);
    if(!found)
        cout<<"Item not found";
    else
        cout<<"Item found";
    cout<<endl;

    obj.RetrieveItem(a[9],found);
    if(!found)
        cout<<"Item not found";
    else
        cout<<"Item found";
    cout<<endl;

    obj.RetrieveItem(a[10],found);
    if(!found)
        cout<<"Item  found";
    else
        cout<<"Item is Not found";
    cout<<endl;
    if(obj.lengthIs()<=5)
        cout<<"List Full"<<endl;
    else
        cout<<"List NOT Full"<<endl;
        obj.DeleteItem(5);
        obj.ResetList();
        obj.GetNextItem(b);
    if(obj.lengthIs()==5)
        cout<<"List Full"<<endl;
    else
        cout<<"List NOT Full"<<endl;
obj.DeleteItem(1);
    obj.ResetList();

    cout<<"After Delete 1 from list ";
    for(int i=0;i<3;i++)
    {
        obj.GetNextItem(b);
        cout<<b<<" ";
    }
    cout<<endl;


    obj.DeleteItem(6);
    obj.ResetList();

    cout<<"After Delete 6 from list ";
    for(int i=0;i<2;i++)
    {
        obj.GetNextItem(b);
        cout<<b<<" ";
    }
    cout<<endl;


    return 0;
}
