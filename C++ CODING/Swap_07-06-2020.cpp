//* Write a C++ Program to swap two numbers using friend as a bridge concept without temp variable *//
#include<iostream>
using namespace std;
class Swap
{
public:
        int a,b;
           void input() 
	{
	 cout << "Enter Two Numbers :";
	 cin >> a >>b;
	}
          friend void swap(Swap& );
          void display() 
	{
	 cout << "\nBefore Swapping: " << b<< " " <<a; 
	 cout << "\nAfter Swapping: " << a << " " << b; 
	}
};
// Define the swap function outside class scope 
void swap(Swap& s1) 
{ 
    {
         s1.b = s1.a + s1.b;
         s1.a = s1.b - s1.a;
         s1.b = s1.b - s1.a;
    }
    
}
int main()
{
  Swap s;
    s.input();
    swap(s);
    s.display();
    return 0;
}
