#include<iostream>
using namespace std;
void printO(int m,int n){
	if(m>0&&n>0){
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			cout << "O";
		}
		cout << "\n";}
	}
	else{
		cout <<"Invalid input";
	}
}
//Write the function printO() here

int main(){
	
	printO(2,2);
	cout << "\n";
	
	printO(3,5);
	cout << "\n";	
	
	printO(5,3);
	cout << "\n";	
	
	printO(0,3);
	cout << "\n";	
	
	printO(7,-1);
	cout << "\n";	
	
	return 0;
}
