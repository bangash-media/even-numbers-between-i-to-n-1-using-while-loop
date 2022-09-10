#include <iostream>

using namespace std;
//Program to print all even numbers between i to n-1 using while loop
int main() 
{
	int num1,num2;
	cout<<"\n\n\t\t\"EVEN NUMBER PRINTER\"";
	cout<<"\n\n\n\t\tEnter First number: "; cin>>num1;
	cout<<"\n\t\tEnter Second number: "; cin>>num2;
	cout<<endl<<endl;
	cout<<"\n\t\tEven numbers between "<<num1<<" and "<<num2<<" =   ";
	int i=num1; //starting point for while loop
	while(i<num2) //condition for n-1
	{
		if (i%2==0) //only compile even numbers
		cout<<i<<" ";
		i++;
	}
	return 0;
}
