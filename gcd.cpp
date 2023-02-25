#include<iostream>
using namespace std;
int main(){
	
	int a,b,r,x,y,z;
	cout<<"Enter the numbers (a,b):";
	cin>>a>>b;
	x=a;
	y=b;
	r=a%b;
	while(r!=0){
		a=b;
		b=r;
		r=a%b;
		if(r==0){
			z=b;
		}
	}
	cout<<"GCD("<<x<<","<<y<<") is: "<<z;
	return 0;
}