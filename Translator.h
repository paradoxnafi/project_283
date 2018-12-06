#ifndef TRANSLATOR_H
#define TRANSLATOR_H

#define all_char "ABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789.,?!:;/@'-" // 46 char in total
#define all_s_char "abcdefghijklmnopqrstuvwxyz0123456789.,?!:;/@'-" // 46 but alphabets are in small letter

class Translator {
	private:
		int choice, total_word, text_size;
		char ask;
		std::string morse_data;
		std::string text_data;
		std::string data[50];
		std::string s_file_name;
		std::string r_file_name;
		std::string store_word[2048]; 
								
		public:
			Translator();

			void interface();

			void get_morse();
			void split_morse();
			void to_text();

			void get_text();
			void to_morse();
			void want_to_write1();
			void want_to_write2();

			void list_file();
			void show_file();
			void show_about();
			void show_help();

};

#endif
