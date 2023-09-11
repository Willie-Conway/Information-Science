/**************************************************************************
*  File: linuxtime.cpp
*  Willie Conway
*  CS351 Computer Operating systems
*  This program gets and displays system information.
**************************************************************************/



#include <iostream>  
#include <fstream>  
#include <math.h>
#include <unistd.h> 

using namespace std;  

void work(void)  
 {  
 double y;  
 double x = 3.0;  
 double e = 2.0;  
 int i,j;  

 for(i=0; i<5; i++)  
 {  
   for(j=0; j<400000; j++)  
   {  
     y=pow(x,e);  
   }  
   printf("Loop %d of work cycle\n", i);  
  //pause for one second between loops so that the work cycle takes a little time.  
   sleep(1); 
 }  
}  
    
int main(void)  
{  
 double beginTotalTime;  
 double beginIdleTime;  
 double endTotalTime;  
 double endIdleTime;  
 double programTotalTime = 0.0;  
 double programIdleTime = 0.0;  
 double programWorkTime = 0.0;  
 double percentage = 0.0;  

 std::cout.precision(6);
 ifstream file;
 file.open ("/proc/uptime");
 file >> beginTotalTime;
 file >> beginIdleTime; 
 cout << "beginTotalTime: " << beginTotalTime << " beginIdleTime: " << beginIdleTime <<endl;
 file.close();
 
 work(); 

 file.open ("/proc/uptime");
 file >> endTotalTime;
 file >> endIdleTime;
 cout << "  endTotalTime: " << endTotalTime << "   endIdleTime: " <<endIdleTime << endl;
 file.close();  

 //Perform calculations
 programTotalTime = beginTotalTime - endTotalTime;  
 programIdleTime = beginIdleTime - endIdleTime;  
 programWorkTime = programTotalTime - programIdleTime;  
 percentage = (programWorkTime/programTotalTime) * 100;  

 //Print results
 cout << "\nThe program's Total Time is:   " << programTotalTime << endl;  
 cout << "The program's Idle Time is:    " << programIdleTime << endl;  
 cout << "The program's Work Time is:    " << programWorkTime << endl;  
 cout << "The percentage the CPU was busy: " << percentage << "%" << endl;  

 return 0;  
}