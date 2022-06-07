//Q8 Write the program to input length in centimeter and conver it into meter



#include <iostream>


using namespace std;

int main(){
	
	float met, cent;
	
	cout << "\n\n Conver Centimeter into meter";
	
	cout << "\n INput the distance in Centimeter ";
	cin >> cent;
	
	met=(cent/100);
	
	cout << "\n The distance in meter is: "<<met<< endl;
	
	return 0;
}


