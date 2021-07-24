#include <iostream>
using namespace std;
int main()
{
   int age;
   cout<<"Enter your age: ";
   cin>>age;
   if(age>=25)
   { cout<<"\nYou are eligible to vote and contest for elections"; }
   else if(age<=18)
   {  cout<<"\nYou are neither eligible to vote nor contest elections\nWait for "<<18-age<<" years to vote and "<<25-age<<" years to contest for elections";
   }
   else
   { cout<<"\nYou are eligible to vote but not eligible to contest elections\nWait for "<<25-age<<" years to contest elections"; }
   return 0;
}
