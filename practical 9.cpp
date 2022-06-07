//Q9: Write a program to convert temperature from fahrenheit into celcius;

#include <iostream>


using namespace std;


double fahrenheitToCelsius(double fahrenheit){
	
	double celcius;
	celcius = (fahrenheit - 32.0)*5.0/9.0;
	return celcius;
}


int main ()
{

	double fahrenheit;
	std:: cout << " Enter Temperature in fahrenheit: ";
	cin >> fahrenheit;
	
	cout << "Temperature in Celsius: " <<fahrenheitToCelsius(fahrenheit) << std::endl;	
	
	
	return 0;
	
}
