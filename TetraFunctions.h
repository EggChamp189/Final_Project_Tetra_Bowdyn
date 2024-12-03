#pragma once

#include <iostream>
#include <string>
#include <fstream>

using namespace std;

const int MAX_SIZE = 1024;
const string alphabet = "ABCDEFGHIJKLMNOPQRSTUVWXYZ1234567890";

string EncodeVigenere(string key, string wordToEncode);
string DecodeVigenere(string key, string wordToDecode);
string RegularEncodeVigenere(string key, string wordToEncode);
string RegularDecodeVigenere(string key, string wordToDecode);
bool CheckAlphabet(char letter);
int ReturnAlphabetNumber(char letter);