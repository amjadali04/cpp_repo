#include <iostream>
#include <conio.h>
using namespace std;
int main(){
	char grade;
	cout<<"Enter ur grade in character(e.g:A,B,C...) :";
	cin>>grade;
	
	switch(grade){
		case 'A':
			cout<<"Excelent! "<<endl;
			break;
		case 'B':
		case 'C':
			cout<<"welldone "<<endl;
			break;
		case 'D':
			cout<<"You passed";
			break ;
		case 'F':
			cout<<"you failed, Try again "<<endl;
			break;
		default:
			cout<<"Invalid Grade "<<endl;
			break;	
	}
	       cout<<"Your grade is "<<grade;
    getch();
	return 0;
}


