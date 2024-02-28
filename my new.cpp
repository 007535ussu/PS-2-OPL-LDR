#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
#define MAX 3
class Stack
{
private:
int s[MAX],top,a[10],n,ele,count,f[10],n1,pos,e,i;
public:
Stack( ) // Constructor to initialize TOP pointer
{
top = -1;
}
void push(int); // Member Function Declaration
void display( );
void dis();
void rem();
};
void Stack::push(int item)
{
if(top == MAX-1)
cout<<"Stack is Full....Overflow!!!"<<endl;
else
{
top++;
s[top]=item;
}
}
void Stack::display( )
{

if(top == -1)
cout<<"Empty Stack!!!"<<endl;
else
{
for(int i=0; i<=top; i++)
cout<<endl<<s[i];
cout<<"-->top element"<<endl;
}
getch();
}
void Stack::dis()
{
cout<<"Enter the size of the array:"<<endl;
cin>>n;
cout<<"Enter the array elements:"<<endl;
for(int i=0; i<n; i++)
cin>>a[i];
cout<<"Enter the element to find the frequency"<<endl;
cin>>ele;
count=0;
for(int i=0; i<n; i++)
if(ele == a[i]) //Traversing Operation
count++;
if(count > 0)
cout<<ele<<" Occurs   "<<count<<"   Time"<<endl;
else
cout<<ele<<" Does Not Exists"<<endl;
}
void Stack::rem()
{
cout<<"Enter the size of the array"<<endl;
cin>>n1;
cout<<"Enter the elements for the array"<<endl;
for(i=0; i<n; i++)
cin>>f[i];
cout<<"Enter the position of the element in the array"<<endl;
cin>>pos;
cout<<"Enter the element to be inserted"<<endl;
cin>>e;
if(pos>n)
{
cout<<"Out of array limits!!!";
getch( );
exit(0);
}
else
{
for(i=n1; i>=pos; i--)
f[i+1] = f[i]; // Shift array elements
f[pos] = ele; // Insert the given element
n1 = n1+1;
cout<<"Array elements after insertion are:"<<endl;
for(i=0; i<n; i++)
cout<<a[i]<<"\t";
}
}

void main( )
{
Stack s;
int choice, ele;
clrscr( );
while(1)
{
cout<<"Stack Push Operation Menu"<<endl;
cout<<"1. PUSH"<<endl;
cout<<"2. DISPLAY"<<endl;
cout<<"3. EXIT"<<endl;
cout<<"Enter your Choice"<<endl;
cin>>choice;
switch(choice)
{
case 1: cout<<"Push Operation"<<endl;
cout<<"Enter the value of element:"<<endl;
cin>>ele;
s.push(ele);
break;
case 2: cout<<"Stack elements are:"<<endl;
s.display( );
s.dis();
s.rem();
break;

case 3: cout<<"End of Stack Operation"<<endl;

getch( );
exit(1);
default:cout<<"Invalid choice.....!!!"<<endl;
}
getch();
}
}



