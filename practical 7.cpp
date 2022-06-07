//Q7: Write the program to find the area of rectangle.




#include <iostream>

using namespace std;


//float area(float length, float width){
//	return (length*width);
//}



int main ()
{
	
	float length, width, rec_area;	
	
	cout << "Enter the length: ";
	cin >> length;
	
	cout << "Enter the width: ";
	cin >> width;
	
	rec_area = area(length, width);
//	rec_area = length*width; this is also the way to performing this task istead of making the calling function inside function
	
	cout << "\n Area of Rectangle is: " << rec_area; 
	return 0;
}
