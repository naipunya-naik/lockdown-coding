//* Write a C++ Program to swap two numbers using friend as a bridge concept without temp variable *//
#include<iostream>
using namespace std;
class Swap
{
public:
          int a,b;

    Swap(int a, int b) 
    { 
        this->a = a; 
        this->b = b; 
    } 
    friend void swap(Swap&);
};
// Define the swap function outside class scope 
void swap(Swap& s1) 
{ 
    cout << "\nBefore Swapping: " << s1.a << " " << s1.b; 
    {
         s1.b = s1.a + s1.b;
         s1.a = s1.b - s1.a;
         s1.b = s1.b - s1.a;
    }
    cout << "\nAfter Swapping: " << s1.a << " " << s1.b; 
}
int main()
{
   Swap s1(10, 20); 
    swap(s1); 
    return 0; 
} 
   
