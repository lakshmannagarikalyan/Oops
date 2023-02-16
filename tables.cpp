#include<iostream>
using namespace std;


int main()
{
	int number,i,a;
	cout<<"enter the number";
	cin>>number;
	for(i=1;i<=10;i++)
	{
		a=number*i;
	
		cout<<number<<"*"<<i<<"="<<a<<"\n";
	}
	return 0;
}
