#include<iostream>

using namespace std;

main(){
	
	int a;
	int b;
	
	cout<<"Enter your age : ";
	cin>>a;
	cout<<"---------------------------"<<endl;
	
	try{
		if(a>=18){
			throw a;
		}
		else{
			cout<<"You Are Validate";
		}
	}
	catch(int b){
		cout<<"Enter valid Number "<<b;
	}
}
