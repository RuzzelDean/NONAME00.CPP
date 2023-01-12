#include <iostream.h>
#include <conio.h>

main() {
	int yr;
clrscr();

	cout << "Enter a year: ";
	cin >> yr;
	
	if ((yr % 4 == 0) && (yr % 100 != 0) && (yr % 400 == 0)) {
		cout << "It is a leap year";
	}
	
	else {
		cout << "It is not a leap year";
	}
	
	getch();
	return 0;
}
