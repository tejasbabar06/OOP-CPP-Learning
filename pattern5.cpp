// Patterns 5

#include<iostream>
using namespace std;

int main(){
	int num=0;
	char ch='A';
	cout<<"Entre a Number : ";
	cin>>num;
	for( int i=0;i<=num;i++){
		for(int j=1;j<=i;j++){
			cout<<ch<<" ";
			ch++;
		}
		cout<<endl;
	}
	
}
