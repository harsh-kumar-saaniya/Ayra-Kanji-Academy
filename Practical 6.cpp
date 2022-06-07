//Q6: Write a program to check weather a number is positive, negative or zero

#include <iostream>

using namespace std;

int main (){
	
	signed long num1 = 0;
	
	cout << "CHECK NUMBER IS POSITIVE, NEGATIVE OR ZERO\n";
	
	cout << "Input the number: ";
	cin >> num1;
	
	if(num1 > 0){
		cout << "Number is positive!";
	}

	else if(num1 < 0){
		cout << "Number is negative!";
	}
	
	else{
		cout << "Number is zero";
	}	
	
	
	return 0;
}
