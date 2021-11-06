
#include<iostream>
double multiply(double a, double b)
{
	cout<<"The product is: "<< a*b<< endl;
	return a*b;
}

double divide(double a, double b)
{	cout<<"The division is: " << a/b<<endl;
	return a/b;
}

using std::cout;
using std::cin;
using std::endl;
double add(double a, double b)
{
	cout<<"The sum is: "<< a+b<< endl;
	return a+b;
}

double subtract(double a, double b)
{	cout<<"The difference is: " << a-b<<endl;
	return a-b;
}

int main()
{
	int a,b;
	cout<<"Welcome to our calculator!"<<std::endl;
	cout<<"Please enter a & b: "<<endl;
	cin>>a>>b;
	char oper;
	cout<<"Enter an operator"<<endl;
	cin >> oper;
				        
	switch(oper){
		case '+':
			add(a,b);
			break;
		case '-':
			subtract(a,b);
			break;
	}
					    
					    
	return 0;
}
