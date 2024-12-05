#pragma once
#include <iostream>
#include <string>

using namespace std;

/////// FUNCTION PROTOTYPES /////////////////

string decryptCaesar(string encryption, int shift);
int retrieveCaesarDecryption();

string encryptCaesar(string decryption, int shift);
int retrieveCaesarEncryption();