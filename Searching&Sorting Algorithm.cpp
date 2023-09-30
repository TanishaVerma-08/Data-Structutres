#include<iostream>
#include<stdlib.h>
#include<bits/stdc++.h>
using namespace std;
int const size=100;int arr[size]; int s;
//--------------------------------------------------------------------------------------
int input();
int input()
{
    cout<<"Enter size of the array: "; cin>>s;
    cout<<"Enter elements in the array: ";
    for(int i=0;i<s;i++)
    cin>>arr[i];
}
//--------------------------------------------------------------------------------------
int display();
int display()
{
    cout<<"Diplaying / Traversing the Array: ";
    for(int i=0;i<s;i++)
    cout<<arr[i]<<"\t";
    cout<<endl;
}
//--------------------------------------------------------------------------------------
int insertion();
int insertion()
{
    int pos,elem;
    cout<<"Enter position and element to be entered: "; cin>>pos>>elem;
    for(int i=s;i>=pos-1;i--)
    arr[i+1]=arr[i];
    arr[pos-1]=elem;
    cout<<"After insertion the array is: ";
    for(int i=0;i<=s;i++)
    cout<<arr[i]<<"\t";
    cout<<endl;
    
}
//--------------------------------------------------------------------------------------
int deletion();
int deletion()
{
    int elem,i,pos;
    cout<<"Enter position of element to be deleted: ";cin>>pos;
    for(i=pos-1;i<s;i++)
    arr[i]=arr[i+1];
    cout<<"Array after Deletion: ";
    for(i=0;i<s;i++)
    cout<<arr[i]<<"\t";
}
//--------------------------------------------------------------------------------------
int linear_search();
int linear_search()
{
    int elem;
    cout<<"Enter element to be searched: ";
    cin>>elem;
    for(int i=0;i<s;i++)
    {
        if(elem == arr[i])
        {
            cout<<"Element is present at position "<<i;
            break;
        }
    }
    cout<<"Element not found!!";
    cout<<endl<<endl;
}
//--------------------------------------------------------------------------------------
int binary_search();
int binary_search()
{
    int elem,low,high,mid;
    cout<<"Enter element to be searched: ";cin>>elem;
    low=arr[0];
    high=arr[s-1];
    while(low<=high)
    {
        mid = low+(high-low)/2;
        if(arr[mid]==elem)
        return mid;
        if(arr[mid]<elem)
        low=mid+1;
        else
        high=mid-1;
    }
    return -1;
}
//--------------------------------------------------------------------------------------
int insertion_sort();
int insertion_sort()
{
    int temp,j;
    for(int i=1;i<s;i++)
    {
        temp= arr[i];
        j=i-1;
        while(j>=0 && arr[j]>temp)
        {
            arr[j+1]=arr[j];
            j-=1;
        }
        arr[j+1]=temp;
    }
    cout<<"Sorted array is: ";
    for(int i=0;i<s;i++)
    {
        cout<<arr[i]<<"\t";    
    }  
    cout<<endl;
}
//--------------------------------------------------------------------------------------
int selection_sort();
int selection_sort()
{
    int min;
    for(int i=0;i<s;i++)
    {
        min = i;
        for(int j=i+1;j<s;j++)
        {
            if(arr[j]<arr[min])
            min=j;
        }
        if(min!=1)
        swap(arr[min],arr[i]);
    }
    
    cout<<"Sorted Array is: ";
    for(int i=0;i<s;i++)
    cout<<arr[i]<<"\t";
    cout<<endl;
}
//--------------------------------------------------------------------------------------
int bubble_sort();
int bubble_sort()
{
    int j;
    for(int k=0;k<s;k++)
    {

    for(int i=0;i<s-k-1;i++)
    {
        j=i+1;
        if(arr[j]<arr[i])
        swap(arr[j],arr[i]);
    }
    }
    cout<<"Sorted Array is: ";
    for(int i=0;i<s;i++)
    cout<<arr[i]<<"\t";
    cout<<endl;
}
int main()
{
    int op,j=0;
    cout<<"OPERATIONS ON AN ARRAY"<<endl;
    while(j==0)
    {
    cout<<"Select one from the following"<<endl;
    cout<<"1. Input an array\n\n2. Display an array\n\n3. Insert an element in array\n\n4. Delete an element in array\n\n5. Search element via linear search\n\n6. Search element via Binary search\n\n7. Sort the array using insertion sort\n\n8. Sort the array using selection sort\n\n9. Sort the array using bubble sort\n\n"<<endl;
    cin>>op;
    switch(op)
    {
        case 1: input();
        break;
        case 2: display();
        break;
        case 3: insertion();
        break;
        case 4: deletion();
        break;
        case 5: linear_search();
        break;
        case 6: 
        {
            int result = binary_search();
            if(result==-1)
            cout<<"Element not present\n";
            else
            cout<<"Element is present at "<<result+1<<" position";
            cout<<endl;
        }
        break;
        case 7: insertion_sort();
        break;
        case 8: selection_sort();
        break;
        case 9: bubble_sort();
        break;
        default: cout<<"Invalid choice!";
        break;
    }
    }
return 1;
}
