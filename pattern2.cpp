// Patterns 2

#include<iostream>
using namespace std;

int main(){
	int num=0;
	cout<<"Entre a Number : ";
	cin>>num;
	for( int i=0;i<=num;i++){
		for(int j=0;j<=i;j++){
			cout<<"*"<<" ";
		}
		cout<<endl;
	}
	
}
