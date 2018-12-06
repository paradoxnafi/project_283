#include <iostream>
#include <cstdlib>
#include <string>
#include "Login.h"
#include "Translator.h"
#include <conio.h>

using std::cout;
using std::cin;
using std::endl;
using std::string;

Login::Login() {

	cout << "Morse Code Translator\n\n";

	retry:

	cout << "Username: ";
	getline(cin, USERNAME);

	cout << "Password: ";
	PASSWORD = getpass();

	if( (USERNAME == "admin") && (PASSWORD == "AdmiN") ) {
		ask = 1;
	} else {
		cout << "\nWrong Password\n";
			goto end;
	}

	while(ask) {

		system("cls");

		Translator T_obj;
		T_obj.interface();
		cout << "\n\nReturn to main menu[0/1]: ";
		cin >> ask;
	}

	end:

	cout << "\nGood bye!!!";
}

string Login::getpass() {

    unsigned char ch = 0;

    while((ch=getch())!=RETURN) {

        if(ch==BACKSPACE) {

            if(PASSWORD.length()!=0) {
                cout <<"\b \b";
                PASSWORD.resize(PASSWORD.length()-1);
            }
        } else {
               PASSWORD+=ch;
                   cout <<'*';
        }
    }

    cout << endl;
    return PASSWORD;
}
