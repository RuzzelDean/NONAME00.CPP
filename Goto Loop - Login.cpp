#include <iostream.h>
#include <conio.h>
#include <string.h>

main() {
	char username[20], password[20];
	int attempts=0;
	
	top:
	clrscr();
	
	gotoxy(30, 12); cout<<"Username: ";
	gotoxy(30, 13); cout<<"Password: ";
	
	gotoxy(40, 12); cin>>username;
	gotoxy(40, 13); cin>>password;
	
	attempts++;
	
	if ((strcmp(username, "admin")==0 && strcmp(password, "xyz")==0)) {
		gotoxy(30, 15); cout<<"Welcome Admin";
		goto exit;
	}

	else if (attempts < 3) {
		gotoxy(30, 15); cout<<"Invalid Credentials";
		getch();
		goto top;
	}
	
	else {
		gotoxy(30, 15); cout<<"Invalid Credentials";
		gotoxy(30, 16); cout<<"Maximum Attempts reached!";
	}
	
	exit:
	getch();
	return 0;
}
