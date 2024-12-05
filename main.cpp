#include "TetraFunctions.h"
#include "BowdynFunctions.h"
#include <cstdlib>

/* use this to test my code, while also changing the alphabet in my header file
string text = "I'm literally going to go joe biden mode deluxe edition!!!!1901910"; wooooooooo tetra
string encodedText = EncodeVigenere("KEY", text);
string decodedText = DecodeVigenere("KEY", encodedText);
cout << "The original text was: " << text << endl;
cout << "The decoded version of " << encodedText << " is:\n" << decodedText << endl;*/


//////////// MENU SYSTEM /////////////////////////

void menu()
{
	int choice;
	cout << "Welcome to Tetra and Bowdyns' Cipher Program!" << endl;

	while (true)
	{
		
		cout << "(1). Encrypt in the Caesar Cipher\n" <<
			"(2). Decrypt in the Caesar Cipher\n" <<
			"(3). Encrypt in the Vigenere Cipher\n" <<
			"(4). Decrypt in the Vigenere Cipher\n" <<
			"(5). Exits the program\n";
		cout << "Please enter the function you would like to use: ";
		cin >> choice;

		switch (choice)
		{
		case 1:
			retrieveCaesarEncryption();
			break;
		case 2:
			retrieveCaesarDecryption();
			break;
		case 3:

			break;
		case 4:

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
