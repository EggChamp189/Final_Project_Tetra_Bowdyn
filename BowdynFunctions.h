#pragma once
#include <iostream>
#include <string>

using namespace std;

/////// FUNCTION PROTOTYPES /////////////////

string decryptCaesar(string encryption, int shift);
string retrieveCaesarDecryption();

string encryptCaesar(string decryption, int shift);
string retrieveCaesarEncryption();