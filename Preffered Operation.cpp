#include<iostream>
using namespace std;
int main()
{
    int num;
    float a,b,c;
   cout<<"Enter 2 numbers: ";
   cin>>a;cin>>b;
   cout<<"1. Addition"<<endl<<"2. Subtraction"<<endl<<"3. Division"<<endl<<"4. Multiplication"<<endl<<"5. Exit"<<endl;
   cout<<"Enter the number of the operation you require to perform!"<<endl;
   cin>>num;
  
   switch(num)
   {
       case 1: c=a+b;
       cout<<"Addition is: "<<c<<endl;
       break;
       
       case 2: c=a-b;
       cout<<"Subtraction is: "<<c<<endl;
       break;
       
       case 3: c=a/b;
       cout<<"Division is: "<<c<<endl;
       break;
       
       case 4: c=a*b;
       cout<<"Product is: "<<c<<endl;
       break;
       
       default: cout<<"Choose a number!!";
   }
   
return 0;
}
