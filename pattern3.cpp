// Patterns 3

#include<iostream>
using namespace std;

int main(){
	int num=0;
	cout<<"Entre a Number : ";
	cin>>num;
	for( int i=0;i<=num;i++){
		for(int j=i;j<num;j++){
			cout<<"*"<<" ";
		}
		cout<<endl;
	}
	
}
