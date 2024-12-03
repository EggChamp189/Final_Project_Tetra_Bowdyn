#include "TetraFunctions.h"
/* use this to test my code, while also changing the alphabet in my header file
string text = "I'm literally going to go joe biden mode deluxe edition!!!!1901910";
string encodedText = EncodeVigenere("KEY", text);
string decodedText = DecodeVigenere("KEY", encodedText);
cout << "The original text was: " << text << endl;
cout << "The decoded version of " << encodedText << " is:\n" << decodedText << endl;*/

int main() {
	string text = "https://www.youtube.com/watch?v=tQF1w3bHu2s";
	string encodedText = RegularEncodeVigenere("KEY", text);
	string decodedText = RegularDecodeVigenere("KEY", encodedText);
	cout << "The original text was: " << text << endl;
	cout << "The decoded version of " << encodedText << " is:\n" << decodedText << endl;
}
