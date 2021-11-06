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

double add(double a, double b)
{
	return a+b;
}

double subtract(double a, double b)
{
	return a-b;
}

int main()
{
    std::cout<<"Hello Calculator"<<std::endl; 
    return 0;
}
