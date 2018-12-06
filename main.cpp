#include <iostream>
#include <string>
#include <fstream>
#include "Login.h"
#include "Translator.h"

using std::cin;
using std::cout;
using std::endl;
using std::ifstream;
using std::string;

void logo();

int main()
{
	logo();
    Login login;

	return 0;
}

// Implementatio of logo function
void logo() {
	char c;

	ifstream logo_file("Data/logo");

	while(logo_file.get(c)) {
		cout << c;
	}
}