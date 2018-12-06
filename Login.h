#ifndef LOGIN_H
#define LOGIN_H

using std::string;

class Login {
	private:
		const char BACKSPACE = 8;
		const char RETURN = 13;

		string USERNAME, PASSWORD, temp;

		int choice, ask;


	public:
		Login();

		string getpass();
};
#endif