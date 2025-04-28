// program to print bill

#include<iostream>
using namespace std;

int main(){
	float pencil;
	float pen;
	float eraser;
	
	cout<<"Entre the price of pencil :";
	cin>>pencil;
	
	cout<<"Entre the price of pen :";
	cin>>pen;
	
	cout<<"Entre the price of eraser :";
	cin>>eraser;
	
	float bill = (pencil + pen + eraser);
	float gst = bill*18/100;
	bill = bill + gst;
	cout<<"Your toatl bill is : "<<bill<<endl;
}
