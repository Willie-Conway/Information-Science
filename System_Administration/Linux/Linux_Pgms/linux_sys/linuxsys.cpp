/**************************************************************************
*  File: linuxsys.cpp
*  Willie Conway
*  CS351 Computer Operating systems
*  This program gets and displays system information.
*
*************************************************************************/





#include <iostream>
#include <fstream>
#include <cstdlib>
using namespace std;

int main() // main function
{

cout << "\nHere is the Totaltime and Idletime:\n" << endl; // prints Totaltime and Idletime of the system
system("cat /proc/uptime");                               // to obtain Totaltime and Idletime
cout << "\nHere is the hostname:\n" << endl;              // prints hostname of the system
system("cat /proc/sys/kernel/hostname");                  // to obtain the hostname
cout << "\nHere is the kernel version:\n" << endl;        // prints kernal version of the system
system("cat /proc/version");                              // to obtain the kernel version
cout << "\nHere is the system memory info:\n" << endl;    // prints memory information of the system
system("cat /proc/meminfo");                              // to obtain the amount of used memory and free memory
cout << "\nHere is the time and date:\n" << endl;         // prints time and date of the system
system("cat /proc/driver/rtc");                           // to obtain time and date

return 0;

} // end program
