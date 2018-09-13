//A program to determine the Greatest Common Divisor of two numbers

#include <iostream>
using namespace std;

int calc_gcd(int a, int b) {
	if(b != 0)
	return calc_gcd(b, a % b);
	else  
	return a;
}


int main() {
	int a, b;
	cout<<"Enter first number: ";
	cin>>a;
	cout<<"\nEnter second number: ";
	cin>>b;
	int answer = calc_gcd(a, b);
	cout<<answer;
	return 0;
}
