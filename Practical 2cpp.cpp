//WRITE THE PROGRAM TO CALCUTE TOTAL, PERCENTAGE, AND GRADE

#include<iostream>


using namespace std;

int main(){
	cout << "CALCUTE TATOL, PERCENTAGE AND GRADE\n";
	int math, english, urdu, computer, science, total, percent;
	
	cout << "Enter marks of Maths: ";
	cin>> math;

	cout << "Enter marks of English: ";
	cin>> english;
	
	cout << "Enter marks of urdu: ";
	cin>> urdu;
	
	cout << "Enter marks of computer: ";
	cin>> computer;
	
	cout << "Enter marks of science: ";
	cin>> science;

	cout << "\nX-----------X-----------X-----------X\n";
	cout << "Note: Each subject carries 100 marks \n";

	total = math+english+urdu+computer+science;
	cout << "\n The total is equal to: "<<total<< "\n";

	percent=total*100/500;
	
	cout << "The percentage is equal to:"<<percent<<"%";
	
	if(percent>=33 && percent<=40){
		cout<<"The Grade is Equal to E";
	}
	else if(percent>=41 && percent<=50){
		cout<<"The Grade is Equal to D";
	}
	else if(percent>=51 && percent<=60){
		cout<<"The Grade is Equal to C";
	}
	else if(percent>=61 && percent<=70){
		cout<<"The Grade is Equal to B";
	}
	else if(percent>=71 && percent<=79){
		cout<<"The Grade is Equal to A";
	}
	else if(percent>=80 && percent<=100){
		cout<<"The Grade is Equal to A1";
	}
	else{
		cout<<"Out of Range";
	}
	
	return 0;
}
