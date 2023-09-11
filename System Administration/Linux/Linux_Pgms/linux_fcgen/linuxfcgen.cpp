
/* File: linuxfcgen.cpp
*  Willie Conway
*  CS351 Computer Operating Systems
*  This file is saved as linuxfcgen.cpp file.
*  To compile it, write the code : g++ - o linuxfcgen linuxfcgen.cpp
*  Here, the executable file name is linuxfc which will get generated from linuxfcgen.cpp.
*  To run this file, write :  . / linuxfcgen
*  This will print the average and highest number of the following grades inputted */


#include<iostream>
#include <climits>
using namespace std;
int main()                     //main function
{
	float grade[5],avg;       // declare grade array of size 5.
	int i;        
	char choice='r';           // declare choice to 'r' initially
	while(choice=='r'||choice=='R')             //loop for run the program again and again 
	{
		float total=0;
		cout<<"Input the Five Grades: "<<endl;
		for(i=0;i<5;i++){         //loop asking 5 grades 
		cin>>grade[i];             // grade input from user
		total=total+grade[i];     // adding up all the 5 grades
	}
	avg=total/5;                   // finding average grade
	cout<<"Average : "<<avg<<endl;   // Printing average grade
	float max=INT_MIN;
	
	for(int i=0;i<5;i++){        // loop to find out highest grade.
		if(max<grade[i])         // checking condition
		max=grade[i];
	}
	cout<<"Highest grade : "<<max<<endl<<endl;  // printing highest grade
	cout<<"Do you want to quit? y/n "<<endl;    
	cin>>choice;               // asking user choice whether he/she wants to continue?
	}

	return 1; 
}