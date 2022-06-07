//Q5: write a program to compute the total and average of six numbers


#include <iostream>

using namespace std;

int main ()
{
	
	float n1, n2, n3, n4, n5, n6, tot, avrg;
	cout << "\n\t COMPUTE THE TOTAL NUMBER AND AVERAGE OF SIX NUMBER: \n";
	cout << "----------------------------------------------------------------\n\n";
	
	cout << "Input the 1st number:";
	cin >> n1;
	
	cout << "Input the 2nd number:";
	cin >> n2;
	
	cout << "Input the 3rd number:";
	cin >> n3;
	
	cout << "Input the 4th number:";
	cin >> n4;
	
	cout << "Input the 5th number:";
	cin >> n5;
	
	cout << "Input the 6th number:";
	cin >> n6;
	
	tot = n1+n2+n3+n4+n5+n6;
	avrg= tot/6;
	
	cout <<"\nThe total of six number is "<< tot<< endl;
	cout << "The average of six number is "<< avrg << endl;
	cout << endl;
	
	
	return 0;
}



