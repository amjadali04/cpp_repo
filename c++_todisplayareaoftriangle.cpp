/*problem Statement:
Write a computer	program in C++ that accepts the	base and height of a right 
 angle triangle from the user and displays the area of the triangle.*/

#include <iostream>
#include <conio.h>
using namespace std;
int main(){
	float areaOfTriangle,baseOfTriangle,heightOfTriangle;/*variable names are written
	                                                                 in camelCase*/
	cout<<"Enter the hieght of triangle: ";
	cin>>heightOfTriangle;
	cout<<"Enter the base of triangle: ";
	cin>> baseOfTriangle;
	//Area of triangle is A= height*base/2;
	areaOfTriangle=baseOfTriangle * heightOfTriangle/2;
	cout<<"Area of triangle is = " <<areaOfTriangle<<endl;
	
	getch();//getch statement for pause console screen
	return 0;
	
}
