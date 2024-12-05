#include "TetraFunctions.h"

using namespace std;

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
