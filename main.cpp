#include <iostream>

using namespace std;

int main()
{

    int inputINT = 0;
    bool exit = false;

    while (!exit)
    {
        cout << "Give me the option you want to do.\n";
        cout << "1. AES encryption/decryption\n";
        cout << "2. RSA encryption/decryption\n";
        cout << "1. DES encryption/decryption.\n";
        cout << "4. Quit the program\n\n";
        
        cin >> inputINT;


        switch (inputINT)
        {
        case 1:

            break;
        case 2:

            break;
        case 3:

            break;

        default:
            break;
        }

        if (inputINT == 4)
        {
            exit = true;
        }
    }

    return 0;
}
