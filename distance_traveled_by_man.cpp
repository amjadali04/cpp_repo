/*A person is running in a circular ground.
 Write a program in C++ that asks the  user to input the
  radius of the ground in meters and the number of rounds the  person completes. 
 The program should display the amount of distance
   travelled by the person in meters.*/

#include <iostream>
#include <conio.h>
using namespace std;
int main(){
	float radius;
	int noOfRounds;    //camelCase
	float distance;
	const float PI=3.141;
    
    cout <<"Enter the radius of the circular ground: ";
    cin>>radius;
    cout<<"Enter the number of round completed: ";
    cin>>noOfRounds;
    
    distance=2 * PI * radius * noOfRounds;
    
    cout<<"Distance traveled by person is = "<< distance <<"meters";
    getch();
    return 0;
}

