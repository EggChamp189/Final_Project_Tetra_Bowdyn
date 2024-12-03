#include "TetraFunctions.h"

using namespace std;

// use the better version of these two functions if you don't want to encode numbers too lfmao
string EncodeVigenere(string key, string wordToEncode) {
	string encodedMessage = "";
	int keyIndex = 0;
	for (int i = 0; i < wordToEncode.length(); i++) {
		char cipherChar = wordToEncode[i];

		// check if the character is not in the given alphabet, and if so just add the character as is then skip to the next loop.
		if (!CheckAlphabet(cipherChar)) {
			encodedMessage += cipherChar;
			continue;
		}
		bool isLower = false;
		// check if the character is a lowercase form before calculations are done
		// shouldn't matter if a non caseable thing goes into this, the toupper shouldn't brake the code
		if (cipherChar == toupper(cipherChar)) {
			isLower = true;
		}
		// set up variables so the given characters are only being dealt with in the same case
		// also, make CERTAIN that only UPPERCASE character are fed to the return alphabet number function
		int keyCharacter = ReturnAlphabetNumber(key[keyIndex % key.length()]);
		int cipherSpecialAlphabet = ReturnAlphabetNumber(cipherChar);
		// character is decoded RIGHT HERE! 
		int encryptedIndex =
			(cipherSpecialAlphabet + keyCharacter) % alphabet.length();
		//cout << encryptedIndex << endl;
		// character then gets converted back into the full ascii index via the alphabet string
		char encryptedCharacter = alphabet[encryptedIndex];
		// return the character in the correct case (Doesn't work just return upper)
		//encodedMessage += encryptedCharacter;
		if (isLower) {
			encodedMessage += encryptedCharacter;
		}
		// it is minus if it is lowercase
		else {
			encodedMessage += '-';
			encodedMessage += tolower(encryptedCharacter);
		}
		keyIndex++;
	}

	return encodedMessage;
}

// FORMULA FOR THIS STUPID THING (assuming regular 26 letter english alphabet):
// finalChar = (cipherChar - keyChar + 26) % 26 + (value of base character, so it would be either 'A' or 'a' depending on the case)
// however, there shouldn't be a base character other than 0 so the last part is pointless for alphabets containing non alphanumeric characters

string DecodeVigenere(string key, string wordToDecode) {
	string decodedMessage = "";
	int keyIndex = 0;
	bool nextCharLower = false;

	for (int i = 0; i < wordToDecode.length(); i++) {
		char cipherChar = wordToDecode[i];

		if (cipherChar == '-' && !nextCharLower) {
			nextCharLower = true;
			continue;
		}
		// check if the character is not in the given alphabet, and if so just add the character as is then skip to the next loop.
		if (!CheckAlphabet(cipherChar)) {
			decodedMessage += cipherChar;
			continue;
		}


		// set up variables so the given characters are only being dealt with in the same case
		// also, make CERTAIN that only UPPERCASE character are fed to the return alphabet number function
		int keyCharacter = ReturnAlphabetNumber(key[keyIndex % key.length()]);
		int cipherSpecialAlphabet = ReturnAlphabetNumber(cipherChar);
		// character is decoded RIGHT HERE! 
		int decryptedIndex =
			(cipherSpecialAlphabet - keyCharacter + alphabet.length()) % alphabet.length();
		//cout << decryptedIndex << endl;
		// character then gets converted back into the full ascii index via the alphabet string
		char decryptedCharacter = alphabet[decryptedIndex];
		// return the character in the correct case (DOESN'T WORK, JUST RETURN UPPERCASE INSTEAD)
		//decodedMessage += decryptedCharacter;
		if (!nextCharLower) {
			decodedMessage += decryptedCharacter;
		}
		else {
			decodedMessage += tolower(decryptedCharacter);
		}
		keyIndex++;
		nextCharLower = false;
	}

	return decodedMessage;
}

string RegularEncodeVigenere(string key, string wordToEncode) {
	string encodedMessage = "";
	int keyIndex = 0;
	for (int i = 0; i < wordToEncode.length(); i++) {
		char cipherChar = wordToEncode[i];

		if (!isalpha(cipherChar)) {
			encodedMessage += cipherChar;
			continue;
		}
		bool isLower = false;
		if (cipherChar != toupper(cipherChar)) {
			isLower = true;
		}
		int keyCharacter = key[keyIndex % key.length()];
		int cipherSpecialAlphabet = toupper(cipherChar);
		int encryptedIndex =
			(cipherSpecialAlphabet + keyCharacter) % 26 + 'A';
		char encryptedCharacter = encryptedIndex;
		encodedMessage += (isLower) ? tolower(encryptedCharacter) : encryptedCharacter;
		keyIndex++;
	}

	return encodedMessage;
}

string RegularDecodeVigenere(string key, string wordToDecode) {
	string decodedMessage = "";
	int keyIndex = 0;

	for (int i = 0; i < wordToDecode.length(); i++) {
		char cipherChar = wordToDecode[i];

		if (!isalpha(cipherChar)) {
			decodedMessage += cipherChar;
			continue;
		}
		bool isLower = false;
		if (cipherChar != toupper(cipherChar)) {
			isLower = true;
		}
		int keyCharacter = key[keyIndex % key.length()];
		int cipherSpecialAlphabet = toupper(cipherChar);
		int decryptedIndex =
			(cipherSpecialAlphabet - keyCharacter + 26) % 26 + 'A';
		char decryptedCharacter = decryptedIndex;
		decodedMessage += (isLower) ? tolower(decryptedCharacter) : decryptedCharacter;
		keyIndex++;
	}

	return decodedMessage;
}

bool CheckAlphabet(char letter) {
	for (int i = 0; i < alphabet.length(); i++) {
		if (alphabet[i] == toupper(letter)) {
			return true;
		}
	}
	return false;
}

int ReturnAlphabetNumber(char letter) {
	// just return i for this, as it should match up to the correct alphabet index of the given letter. anything not in the given alphabet should already have been caught.
	for (int i = 0; i < alphabet.length(); i++) {
		if (alphabet[i] == toupper(letter)) {
			return i;
		}
	}

	cout << "It has broken horrendously... Character was: " << letter << "\n";
	return -1;
}