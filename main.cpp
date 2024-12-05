#include "TetraFunctions.h"
#include "BowdynFunctions.h"
/* use this to test my code, while also changing the alphabet in my header file
string text = "I'm literally going to go joe biden mode deluxe edition!!!!1901910"; wooooooooo tetra
string encodedText = EncodeVigenere("KEY", text);
string decodedText = DecodeVigenere("KEY", encodedText);
cout << "The original text was: " << text << endl;
cout << "The decoded version of " << encodedText << " is:\n" << decodedText << endl;*/

int main()
{
	//lol do thingz hereeeee VVVVVVVV
	RetrieveEncryption();
}

void menu() {
	int choice;

	while (true) {
		cout << "(1). Encrypt in the Caesar Cipher\n" <<
			"(2). Decrypt in the Caesar Cipher\n" <<
			"(3). Encrypt in the Vigenere Cipher\n" <<
			"(4). Decrypt in the Vigenere Cipher\n" <<
			"(5). Exits the program\n";
		cout << "Please enter the function you would like to use: ";
		cin >> choice;
		switch (choice) {
		case 1:

			break;
		case 2:

			break;
		case 3:

			break;
		case 4:

			break;
		case 5:

			break;
		default:
			continue;
		}
		cout << "\n\n\n";
	}
}