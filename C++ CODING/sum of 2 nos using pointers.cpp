#include<iostream>
using namespace std;
int main()
{
  int num1,num2, *p1, *p2, sum=0;
	cout<<"Enter the two numbers :";
	cin>>num1>>num2;
	p1 = &num1;
	p2 = &num2;
	sum = *p1 + *p2;
	cout<<"Sum of the two number is "<<sum;
    return 0;
}
