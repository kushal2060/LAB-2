#include<iostream>
using namespace std;
class matrices{
	public:
	int a[50][50],b[50][50],i,j,i1,j1,join[50][50],meet[50][50],product[50][50];
	void get(){
		cout<<"Enter the number of rows and columns for matrix A:";
	cin>>i>>j;
    cout<<"Enter the number of rows and columns for matrix B:";
    cin>>i1>>j1;
    cout<<"Enter the matrix A: ";
    for(int x=0;x<i;x++){
		for(int y=0;y<j;y++){
			cout<<"A["<<x+1<<y+1<<"]=";
			cin>>a[x][y];
		}
	}
	cout<<"Enter the matrix B: ";
	for(int x=0;x<i1;x++){
		for(int y=0;y<j1;y++){
			cout<<"B["<<x+1<<y+1<<"]=";
			cin>>b[x][y];
		}
	}
	}
	
	void display(){
	if(i==i1&&j==j1){
	for(int x=0;x<i;x++){
		for(int y=0;y<j;y++){
			join[x][y]=a[x][y]|b[x][y];
		}
	}
	for(int x=0;x<i;x++){
		for(int y=0;y<j;y++){
			meet[x][y]=a[x][y]&b[x][y];
		}
	}
	cout<<"Join of the matrix is:"<<endl;
	for(int x=0;x<i;x++){
		for(int y=0;y<j;y++){
			cout<<join[x][y]<<" ";
			if(y==j-1){
				cout<<endl;
			}
		}
	
}
cout<<"meet of the matrix is:"<<endl;
	for(int x=0;x<i;x++){
		for(int y=0;y<j;y++){
			cout<<meet[x][y]<<" ";
			if(y==j-1){
				cout<<endl;
			}
		}
	
}
}
else{
	cout<<"Can not produce join and meet."<<endl;
}
}
 
void product1(){
 	
 	if(j==i1){
 		int product[i][j1];
 		for(int k=0;k<i;k++){
 			for(int l=0;l<j1;l++){
 				 product[k][l]={0};
 			    for(int n=0;n<j;n++){
				 product[k][l]=product[k][l]|(a[k][n]&b[n][l]);
				 }
			 }
		 }
cout<<"Product of the matrix: "<<endl;
for(int x=0;x<i;x++){
		for(int y=0;y<j1;y++){
			cout<<product[x][y]<<" ";
			if(y==j1-1){
				cout<<endl;
			}
		}
	
}
}
else
cout<<"Product not possible.";
 } 

};
int main(){
    matrices q;
	q.get();
     q.display();
     q.product1();
	return 0;
}