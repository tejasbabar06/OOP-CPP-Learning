//Create a class to store Complex numbers. Using operatorover-loading,
//create the logic to subtract one complex number from another.

#include<iostream>
using namespace std;

class Complex{
	private:
		int real;
		int img;
	public:
		Complex(int r,int i){
			real=r;
			img=i;
		}
		
		void display(){
			cout<<real<<" + "<<img<<"i"<<endl;
		}
		
		void operator + (Complex &c2){
			int res_real=this->real+c2.real;
			int res_img=this->img+c2.img;
			Complex c3(res_real,res_img);
			cout<<"Res : ";
			c3.display();
		}
};

int main(){
	Complex c1(1,2);
	Complex c2(3,4);
	
	c1.display();
	c2.display();
	c1+c2;
}
