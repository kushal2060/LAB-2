#include<iostream>
using namespace std;
class prime{
	public:
		int a,count;
		prime(){
			cout<<"Enter the number for finding its prime factors: ";
			cin>>a;
		}
	
		void check(){
			count=0;
			cout<<"Prime factors of "<<a<<" are: ";
			for(int i=1;i<a;i++){
				for(int j=1;j<a;j++){
					if(i%j==0){
						count++;
						}
					
				}
				if(count==2 && (a%i==0)){
					cout<<i<<" ";
				}
				count=0;
				
			}
	   
	}
};
int main(){
	prime q;
	q.check();
}