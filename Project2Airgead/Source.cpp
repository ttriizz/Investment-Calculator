#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	float initInv, monDep, AnuInt, months, years;
	float totalAm, intAmt, yearTotalInt;

	cout << "*******************************\n";
	cout << "********** Data Input *********\n";
	cout << "Initial Investment Amount: \n";
	cout << "Monthly Deposit: \n";
	cout << "Annual Interest: \n";
	cout << "Number of years: \n";

	system("PAUSE");

	cout << "*******************************\n";
	cout << "********** Data Input *********\n";
	cout << "Initial Investment Amount: $";
	cin >> initInv;
	cout << "Monthly Deposit: $";
	cin >> monDep;
	cout << "Annual Interest: %";
	cin >> AnuInt;
	cout << "Number of years: ";
	cin >> years;
	months = years * 12;

	system("PAUSE");

	totalAm = initInv;
	cout << "\nBalance and Interest Without Additional Monthly Deposits\n";
	cout << "=============================================================\n";
	cout << "Year\t\tYear End Balance\tYear End Earned Interest\n";
	cout << "-------------------------------------------------------------\n";

	for (int i = 0; i < years; i++) {
		intAmt = (totalAm) * ((AnuInt / 100));
		totalAm = totalAm + intAmt;
		cout << (i + 1) << "\t\t$" << fixed << setprecision(2) << totalAm << "\t\t\t$" << intAmt << "\n";
	}
	totalAm = initInv;

	cout << "\n\nBalance and Interest With Additional Monthly Deposits\n";
	cout << "=============================================================\n";
	cout << "Year\t\tYear End Balance\tYear End Earned Interest\n";
	cout << "-------------------------------------------------------------\n";

	for (int i = 0; i < years; i++) {
		yearTotalInt = 0;
		for (int j = 0; j < 12; j++) {
			intAmt = (totalAm + monDep) * ((AnuInt / 100) / 12);
			yearTotalInt = yearTotalInt + intAmt;
			totalAm = totalAm + monDep + intAmt;
		}
		cout << (i + 1) << "\t\t$" << fixed << setprecision(2) << totalAm << "\t\t\t$" << yearTotalInt << "\n";
	}

	return 0;
}