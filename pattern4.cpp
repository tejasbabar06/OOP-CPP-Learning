// Patterns 4

#include<iostream>
using namespace std;

int main(){
	int num=0;
	cout<<"Entre a Number : ";
	cin>>num;
	for( int i=0;i<=num;i++){
		for(int j=1;j<=i;j++){
			cout<<j<<" ";
		}
		cout<<endl;
	}
	
}
