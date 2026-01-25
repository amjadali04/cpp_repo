#include <iostream>
using namespace std;
int main(){
	int age;
	cout<<"Enter your age: ";
	cin>>age;
	if(age >= 18){
		cout<<"You are eligible for vote";
	}
	else{
		cout<<"Your under 18(you are not eligibe for vote)";
	}
	return 0;
}
