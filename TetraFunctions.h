#pragma once

#include <iostream>
#include <string>
#include <fstream>

using namespace std;

string RegularEncodeVigenere(string key, string wordToEncode);
string RegularDecodeVigenere(string key, string wordToDecode);
