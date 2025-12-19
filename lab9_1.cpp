#include<iostream>
#include<iomanip> //For using setw(), setprecision(), ...
using namespace std;

int main(){	

	double initial , rate , pay ;

	cout << "Enter initial loan: ";
	cin >> initial;
	cout << "Enter interest rate per year (%): ";
	cin >> rate;
	cout << "Enter amount you can pay per year: ";
	cin >> pay;

	cout << setw(13) << left << "EndOfYear#"; 
	cout << setw(13) << left << "PrevBalance"; 
	cout << setw(13) << left << "Interest"; 
	cout << setw(13) << left << "Total";
	cout << setw(13) << left << "Payment";
	cout << setw(13) << left << "NewBalance";
	cout << "\n";
	
    cout << fixed << setprecision(2); 
	
	double prevBalance = initial;
	int year = 1;

	while (prevBalance > 0) {
		double interest = prevBalance * rate / 100.0;
		double total = prevBalance + interest;

		double payment;
		if (total < pay)
			payment = total;
		else
			payment = pay;
		
		double newBalance = total - payment;

		cout << setw(13) << left << year
		     << setw(13) << left << prevBalance
		     << setw(13) << left << interest
		     << setw(13) << left << total
		     << setw(13) << left << payment
		     << setw(13) << left << newBalance
		     << "\n";

		prevBalance = newBalance;
		year++;
	}

	return 0;
}
