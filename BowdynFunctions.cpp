#include "BowdynFunctions.h"

using namespace std;

/////////////////////// FUNCTION DEFINITIONS /////////////////////////////

////// DECRYPT CAESAR //////////

string decryptCaesar(string encryption, int shift)
{
    string decryptedText = "";

    for (char& c : encryption)
    {
        if (isalpha(c))
        {
            // Determine if the character is upper or lower case
            char base = islower(c) ? 'a' : 'A';
            // Decrypt the character by shifting in the opposite direction
            c = (c - (shift * -1) - base + 26) % 26 + base;
        }

        decryptedText += c;
    }

    return decryptedText; //did I ever tell you how much I want to sleep in the middle of a very public place???????????
}

///////// RETRIEVE DECRYPTION //////////

/*string retrieveCaesarDecryption()
=======
string retrieveCaesarDecryption()
>>>>>>> origin/master
{
    string encryption;
    int shift;
    cin.ignore();

    cout << "Enter the encryption: ";
    getline(cin, encryption);
    cin.ignore();
    cout << "Enter the shift value: ";
    cin >> shift;

    string decryptedText = decryptCaesar(encryption, shift);

    cout << "Decrypted text: " << decryptedText << endl;

    return decryptedText;
}

////// ENCRYPT CAESAR //////////

string encryptCaesar(string decryption, int shift)
{
    string encryptedText = "";

    for (char& c : decryption)
    {
        if (isalpha(c))
        {
            // Determine if the character is upper or lower case
            char base = islower(c) ? 'a' : 'A';
            // Decrypt the character by shifting in the opposite direction
            c = (c - shift - base + 26) % 26 + base;
        }

        encryptedText += c;
    }

    return encryptedText; //did I ever tell you how much I want to sleep in the middle of a very public place???????????
}*/

///////// RETRIEVE ENCRYPTION //////////

string retrieveCaesarEncryption()
{
    string decryption;
    int shift;
    cin.ignore();
    cout << "Enter the word to en or decrypt: ";
    getline(cin, decryption);
    cin.ignore();
    cout << "Enter the shift value: ";
    cin >> shift;

    string encryptedText = decryptCaesar(decryption, shift);

    cout << "encrypted text: " << encryptedText << endl;

    return encryptedText;
}
