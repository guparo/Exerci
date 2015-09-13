// HealthS.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int main() {
	int userAgeYears = 0;
	int userAgeDays = 0;

	cout << "Enter your age in years: " << endl;
	cin >> userAgeYears;

	userAgeDays = userAgeYears * 365;

	cout << "You are " << userAgeDays << " days old." << endl;
	system("pause");

	return 0;
	
}
	