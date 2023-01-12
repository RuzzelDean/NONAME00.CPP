#include <iostream.h>
#include <conio.h>

main()
{
	int num;
clrscr();

	cout << "Odd or Even Checker\n\n";
	
	cout << "Enter a number: ";
	cin >> num;
	
	if (num%2 == 0) {
		cout << "\n" << num << " is an even number";
	}
	
	else {
		cout << "\n" << num << " is an odd number";
	}
	
	getch();
	return 0;
}
