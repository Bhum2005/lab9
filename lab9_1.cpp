#include<iostream>
#include<iomanip> //For using setw(), setprecision(), ...
using namespace std;

int main(){	
	double debt,rate,pay,balance,total,interest;
	cout << "Enter initial loan: ";
	cin >> debt;
	cout << "Enter interest rate per year (%): ";
	cin >> rate;
	cout << "Enter amount you can pay per year: ";
	cin >> pay;
	balance=debt;
	total=0;
	//use 'setw' to set width of table and 'left' to set left-alignment
	//you can change input argument of 'setw()' to see the effect
	//Try to change from 'left' to 'right' and see the effect
		cout << setw(13) << left << "EndOfYear#"; 
		cout << setw(13) << left << "PrevBalance"; 
		cout << setw(13) << left << "Interest"; 
		cout << setw(13) << left << "Total";
		cout << setw(13) << left << "Payment";
		cout << setw(13) << left << "NewBalance";
		cout << "\n";
	for(int i=0; ;i++)
	{
	//use 'fixed' and 'setprecision' to fix the number of decimal digits for displaying
	//you can change input argument of 'setprecision()' to see the effect
		cout << fixed << setprecision(2); 
		cout << setw(13) << left << i+1; 
		cout << setw(13) << left << balance;
		interest=balance*(rate/100);
		cout << setw(13) << left << interest;
		total=balance+interest;
		cout << setw(13) << left << total;
		if(total<pay){
			cout << setw(13) << left << total;
			cout << setw(13) << left << 0.00;
			break;
		}
		cout << setw(13) << left << pay;
		balance=total-pay;
		cout << setw(13) << left << balance;
		cout << "\n";	
	}
	return 0;
}
