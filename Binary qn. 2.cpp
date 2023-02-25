#include<iostream>
#include<math.h>	
using namespace std;
class binary{
	public:
	int n,m,temp,sum,sum1;
	
	void display(){
		 cout<<"Enter the number of digits of 1st  binary form: ";
        cin>>n;
        cout<<"Enter the number of digits of 2nd  binary form: ";
        cin>>m;
	}
	int a[50],b[50],mul[50],add[50],div[50];
    void get(){
    	cout<<"Enter the 1st binary number bit by bit:";
    for(int i=0;i<n;i++){
    	cin>>a[i];
    	
	}
	cout<<"Enter the 2nd binary number bit by bit:";
    for(int i=0;i<m;i++){
    	cin>>b[i];
    
	}
}

void decimal(){
sum=0;sum1=0;
int j=0;
   	   for(int i=n-1;i>=0;i--){
   	   	     sum=sum+a[i]*pow(2,j);
   	   	     j++;
		  }
		  j=0;
		   for(int i=m-1;i>=0;i--){
   	   	     sum1=sum1+b[i]*pow(2,j);
   	   	     j++;
		  }
		
}
   void multiplication(){
		temp=sum*sum1;
		
		int i=0,rem,count=0;
    	while(temp!=1){
    		count++;
    		rem=temp%2;
    		temp=temp/2;
    		mul[i]=rem;
    		i++; 
    		}
    		mul[count]=1;
    		
    		
			cout<<"Binary multiplication:"<<endl<<" ";
    for(int i=0;i<n;i++){
		cout<<a[i];
	}
	cout<<endl<<"*";
	for(int i=0;i<m;i++){
		cout<<b[i];
	}
    cout<<endl<<"=";
	for(int i=count;i>=0;--i){
		cout<<mul[i];
	}
			
    		
    	}
    
    	void addition(){
		  
	     temp=sum+sum1;
		
		int i=0,rem,count=0;
    	while(temp!=1){
    		count++;
    		rem=temp%2;
    		temp=temp/2;
    		add[i]=rem;
    		i++; 
    		}
    		add[count]=1;
    		
    cout<<endl<<"Binary sum:"<<endl<<" ";
    for(int i=0;i<n;i++){
		cout<<a[i];
	}
	cout<<endl<<"+";
	for(int i=0;i<m;i++){
		cout<<b[i];
	}
    cout<<endl<<"=";
	for(int i=count;i>=0;--i){
		cout<<add[i];
	}
			
    	}
    
    	void division(){
      
		temp=sum/sum1;
		
		int i=0,rem,count=0;
    	while(temp!=1){
    		count++;
    		rem=temp%2;
    		temp=temp/2;
    		div[i]=rem;
    		i++; 
    		}
    		div[count]=1;
    		
	cout<<endl<<"Binary division:"<<endl<<" ";
    for(int i=0;i<n;i++){
		cout<<a[i];
	}
	cout<<endl<<"/";
	for(int i=0;i<m;i++){
		cout<<b[i];
	}
    cout<<endl<<"=";
	for(int i=count;i>=0;--i){
		cout<<div[i];
	}
			
    		
    	}
    	
};

int main(){
	binary q;
	q.display();
	q.get();
	q.decimal();
	system("CLS");
	q.multiplication();
	q.addition();
    q.division();
}