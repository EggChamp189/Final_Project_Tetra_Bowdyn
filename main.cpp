#include "TetraFunctions.h"
#include "BowdynFunctions.h"
#include <cstdlib>
#include <fstream>
/* use this to test my code, while also changing the alphabet in my header file
string text = "I'm literally going to go joe biden mode deluxe edition!!!!1901910"; wooooooooo tetra
string encodedText = EncodeVigenere("KEY", text);
string decodedText = DecodeVigenere("KEY", encodedText);
cout << "The original text was: " << text << endl;
cout << "The decoded version of " << encodedText << " is:\n" << decodedText << endl;*/

void menu();

int main()
{
	cout << "Welcome to Tetra and Bowdyns' Cipher Program!" << endl;
	//lol do thingz hereeeee VVVVVVVV
	menu();
	//RetrieveEncryption();
}

void menu() {
	int intInput;
	string stringInput;
	string tempString;
	string result = "";
	ifstream ifile;

	while (true)
	{
<<<<<<< HEAD
		cout << "\n\n\n";
		cout << "(1). Encrypt/Decrypt in the Caesar Cipher\n" <<
			"(2). Encrypt in the Vigenere Cipher\n" <<
			"(3). Decrypt in the Vigenere Cipher\n" <<
			"(4). Read out results.txt\n" <<
			"(5). Clear results.txt\n" <<
			"(6). Exits the program\n";
=======
		cout << "(1). Encrypt in the Caesar Cipher\n" <<
			"(2). Decrypt in the Caesar Cipher\n" <<
			"(3). Encrypt in the Vigenere Cipher\n" <<
			"(4). Decrypt in the Vigenere Cipher\n" <<
			"(5). Read out results.txt\n" <<
			"(6). Clear results.txt\n" <<
			"(7). Exits the program\n";
>>>>>>> origin/master
		cout << "Please enter the function you would like to use: ";
		cin >> intInput;
		switch (intInput) {
		case 1:
			result = retrieveCaesarEncryption();
			break;
		case 2:
<<<<<<< HEAD
=======
			result = retrieveCaesarDecryption();
			break;
		case 3:
>>>>>>> origin/master
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
		case 3:
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
		case 4:
			ifile.open("results.txt");
			while (!ifile.eof()) {
				string thing;
				ifile >> thing;
				cout << thing << endl;
			}
			ifile.close();
			cout << "\nCompleted.";
			continue;
		case 5:
<<<<<<< HEAD
=======
			ifile.open("results.txt");
			while (!ifile.eof()) {
				string thing;
				ifile >> thing;
				cout << thing;
			}
			ifile.close();
			cout << "\nCompleted.";
			continue;
		case 6:
>>>>>>> origin/master
			intInput = remove("results.txt");
			if (intInput != 0) {
				cout << "File already cleared.";
			}
			else {
				cout << "File successfully cleared.";
			}
			continue;
<<<<<<< HEAD
		case 6:
=======
		case 7:
>>>>>>> origin/master
			cout << "Thank you for using our Cipher program! Goodbye!" << endl;
			return;

		default:
			continue;
		}
		cout << "Saving Result to results.txt...\n";
		ofstream file;
		// append to the end of the file 
		file.open("results.txt", ios_base::app);
		file << result << endl;
		file.close();
		cout << "Saved.";
<<<<<<< HEAD
=======
		cout << "\n\n\n";
>>>>>>> origin/master
	}
}
