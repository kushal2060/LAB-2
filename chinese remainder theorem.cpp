#include<iostream>
using namespace std;

int main(){
	int n;
	cout<<"Enter number of x: ";
	cin>>n;
	int a[n],b[n],m=1,M[n],I[n],Mp[n];
	for(int i=0;i<n;i++){
    cout<<"Enter a(mod b):";
	cin>>a[i]>>b[i];
}
    for(int i=0;i<n;i++){
      m=m*b[i];
}

	for(int i=0;i<n;i++){
	M[i]=m/b[i];
}
	int j=1;

for(int i=0;i<n;i++){
	while((M[i]*j)%b[i]!=1){
	j++;
		
	}
	I[i]=j;
	if((M[i]*j)%b[i]==1){
		j=1;
	}
}
int sum=0;
for(int i=0;i<n;i++){
	Mp[i]=a[i]*M[i]*I[i];
}
for(int i=0;i<n;i++){
	sum=sum+Mp[i];
}

if(sum>m){
	while(sum>m){
		sum=sum%m;
	}
	cout<<"X is: "<<sum;
}
else{
	cout<<"X is: "<<sum;
}
}


