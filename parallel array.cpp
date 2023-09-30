/*WAP to save records of student having following details :- A) Name B) UID C) AGE D) % age*/
#include<iostream>
#include<string>
using namespace std;
// By using parallel Arrays
const int size=100;int s;
    string name[size];
    string UID[size];
    int age[size];
    int percentage[size];
    
int input();
int input()
{
    cout<<"Enter number of students: ";
    cin>>s;
    cout<<"Enter Name, UID, Age, Percentage of "<<s<<" students: ";
    for(int i=0;i<s;i++)
    {
        cout<<"\nEnter name: ";
        cin>>name[i];
        cout<<"Enter UID: ";
        cin>>UID[i];
        cout<<"Enter age: ";
        cin>>age[i];
        cout<<"Enter percentage: ";
        cin>>percentage[i];
    }
}
int display();
int display()
{
    cout<<endl;
    for(int i=0;i<s;i++)
    {
        cout<<"Student's name :"<<name[i]<<"\nStudent's UID :"<<UID[i]<<"\nStudent's AGE :"<<age[i]<<"\nStudent's Percentage :"<<percentage[i]<<"\n";
    }
    cout<<endl;    
}
int condition();
int condition()
{
    cout<<"Details of Students whose age is greater than 18!!\n";
    for(int i=0;i<size;i++)
    {
        if(age[i]>18)
        {
            cout<<"Student's name :"<<name[i]<<"\nStudent's UID :"<<UID[i]<<"\nStudent's AGE :"<<age[i]<<"\nStudent's Percentage :"<<percentage[i]<<"\n";
        }
    }
}
int sort();
int sort()
{
    int temp,j;
    for(int i=1;i<s;i++)
    {
        temp= percentage[i];
        j=i-1;
        while(j>=0 && percentage[j]>temp)
        {
            percentage[j+1]=percentage[j];
            name[j+1]=name[j];
            j-=1;
        }
        percentage[j+1]=temp;
    }
    cout<<"Students Percentage in increasing order: "<<endl;
    for(int i=0;i<s;i++)
    {
        cout<<percentage[i]<<"\t";    
    }
}
int main()
{
   cout<<"Enter details of the students in your database!!"<<endl;
   input();
   display();
   cout<<endl;
   condition();
   cout<<"Sorting students according to their percentage!! \n\n";
   sort();
return 0;
}
