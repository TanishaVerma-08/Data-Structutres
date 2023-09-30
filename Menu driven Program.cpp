/*Design, Develop and Implement a menu driven Program in C for the following Array operations
a. Creating an Array of N Integer Elements
b. Display of Array Elements with Suitable Headings
c. Inserting an Element (ELEM) at a given valid Position (POS)
d. Deleting an Element at a given valid Position(POS)
e. Exit.
*/
#include<iostream>
using namespace std;
int main()
{
    int size,pos,op;
    cout<<"Enter size of the element: ";
    cin>>size;
    string AML7[50],UID[size],elem;
    cout<<"Enter Student Name: ";
    for(int i=0;i<5;i++)
    {
        cin>>AML7[i];
    }
    cout<<"Select Operation to be done!!"<<endl<<"1. Insertion"<<endl<<"2. Deletion"<<endl<<"3. Exit"<<endl;
    cin>>op;
    /*cout<<"Enter UID of the above students: ";
    for(int j=0;j<size;j++)
    {
        cin>>UID[j];
    }*/
    
    switch(op)
{
    case 1:
    cout<<"Enter Name of the studuent to be inserted: ";
    cin>>elem;
    cout<<"Enter position where name to be inserted: ";
    cin>>pos;
    for(int k=size;k>=pos-1;k--)
    {
        AML7[k+1]=AML7[k];
       //AML7[pos-1]=elem;
    }
    AML7[pos-1]=elem;
    cout<<endl;
    cout<<"After insertion: ";
    for(int i=0;i<=size;i++)
    {
    cout<<AML7[i]<<endl;
    }
    break;
    
    case 2: 
    cout<<"Enter Name of the studuent to be deleted: ";
    cin>>elem;
    cout<<"Enter position where name to be deleted: ";
    cin>>pos;
    for(int k=pos-1;k>=size-1;k++)
    {
        AML7[k]=AML7[k+1];
       
    }
    cout<<endl;
    cout<<"After Deletion: ";
    for(int i=0;i<=size;i++)
    {
        cout<<AML7[i]<<endl;
    }
    break;
    case 3: exit;
}
return 1;
}
