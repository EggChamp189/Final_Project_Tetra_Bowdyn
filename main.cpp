#include "TetraFunctions.h"
#include "BowdynFunctions.h"
#include <cstdlib>

/* use this to test my code, while also changing the alphabet in my header file
string text = "I'm literally going to go joe biden mode deluxe edition!!!!1901910"; wooooooooo tetra
string encodedText = EncodeVigenere("KEY", text);
string decodedText = DecodeVigenere("KEY", encodedText);
cout << "The original text was: " << text << endl;
cout << "The decoded version of " << encodedText << " is:\n" << decodedText << endl;*/

int main()
{
	int choice;
	cout << "Welcome to Tetra and Bowdyns' Cipher Program!" << endl;
	//lol do thingz hereeeee VVVVVVVV
	menu();
	//RetrieveEncryption();
}

void menu() {
	int intInput;
	string stringInput;
	string tempString;
	string result;

	while (true)
	{
		
		cout << "(1). Encrypt in the Caesar Cipher\n" <<
			"(2). Decrypt in the Caesar Cipher\n" <<
			"(3). Encrypt in the Vigenere Cipher\n" <<
			"(4). Decrypt in the Vigenere Cipher\n" <<
			"(5). Exits the program\n";
		cout << "Please enter the function you would like to use: ";
		cin >> intInput;
		switch (intInput) {
		case 1:
			retrieveCaesarEncryption();
			break;
		case 2:
			retrieveCaesarDecryption();
			break;
		case 3:
			cout << "Please enter the key for the Vigenere Cipher (no special characters): ";
			cin >> stringInput;
			cin.ignore();
			cout << "Please enter the word to encrypt (no spaces): ";
			getline(cin, tempString);
			cin.ignore();
			cout << "The encrypted version of \"" << tempString << "\" with the key \"" << UppercasedString(stringInput) << "\" is:\n";
			result = RegularEncodeVigenere(UppercasedString(stringInput), tempString);
			cout << result;
			break;
		case 4:
			cout << "Please enter the key for the Vigenere Cipher (no special characters): ";
			cin >> stringInput;
			cin.ignore();
			cout << "Please enter the word to decrypt (no spaces): ";
			getline(cin, tempString);
			cin.ignore();
			cout << "The decrypted version of \"" << tempString << "\" with the key \"" << UppercasedString(stringInput) << "\" is:\n";
			result = RegularDecodeVigenere(UppercasedString(stringInput), tempString);
			cout << result;
			break;
		case 5:
			cout << "Thank you for using our Cipher program! Goodbye!" << endl;
			return;
			break;

		default:
			continue;
		}
		cout << "\n\n\n";
	}
}

int main()
{
	//lol do thingz hereeeee VVVVVVVV
	menu();
}
