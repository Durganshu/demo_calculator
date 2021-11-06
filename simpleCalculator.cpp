
#include<iostream>

using std::cout;
using std::cin;
using std::endl;

double multiply(double a, double b){
	cout<<"The product is: "<< a*b<< endl;
	return a*b;
}

double divide(double a, double b){	
	cout<<"The division is: " << a/b<<endl;
	return a/b;
}

double mean(double a, double b){
	cout<<"The mean is: "<<(a+b)/2<<endl;
	return (a+b)/2;
}


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
	cout<<"Please enter the numbers: "<<endl;
	cin>>a>>b;
	char oper;
	cout<<"Which operation do you wish to perform?"<<endl;
	cout<<"(1) Sum (+)"<<endl;
    cout<<"(2) Subtract (-)"<<endl;
    cout<<"(3) Multiply (*)"<<endl;
    cout<<"(4) Divide (/)"<<endl;
    cout<<"(5) Mean (m)"<<endl;
	cin >> oper;
				        
	switch(oper){
		case '+':
			add(a,b);
			break;
		case '-':
			subtract(a,b);
			break;
		case '*':
			multiply(a,b);
			break;
		case '/':
			divide(a,b);
			break;
		case 'm':
			mean(a,b);
			break;			

	}
					    
					    
	return 0;
}
