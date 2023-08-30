/* File: linuxfc.cpp
*  Willie Conway
*  CS351 Computer Operating Systems
*
*  This file is saved as linuxfc.cpp file.
*  To compile it, write the code : g++ - o linuxfc linuxfc.cpp
*  Here, the executable file name is linuxfc which will get generated from linuxfc.cpp.
*  To run this file, write :  . / linuxfc
*  This will print The average is : 86 */


/*Explanation:
Source Code :*/



// linuxfc.cpp



#include<iostream>



using namespace std;





//This is the function which calculates the average of the grades. This is generically defined so that it can find 

//average for any number of grades..



//average is calculated as : sum of all the entries divided by the number of entries.

float average(int sum, int numGrades)

{

	return sum / numGrades;

}



int main()

{

	// these are the hardcoded values, so you can either directly use sum = 77 + 85 + 80 + 94 + 97.



	int num1 = 77, num2 = 85, num3 = 80, num4 = 94, num5 = 97;



	// number of grades that is to be passed to the function

	int number_of_grades = 5;



	//sum that holds the total of all grade values. Here they are 5, but it can be used for more numbers too as the 

	// function average is defined in generic way instead of 5 values.

	int sum = num1 + num2 + num3 + num4 + num5;



	// average value is int here, but it can be decimal number so we should write float here instead of int to make it more generalized



	//call the average() function and save it in avg_amt. This is float as the function's return type is also float.

	float avg_amt = average(sum, number_of_grades);



	//print the average amount.

	cout << "The average is: " << avg_amt;

	return 0;
	
	}

