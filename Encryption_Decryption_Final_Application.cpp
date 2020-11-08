#include <iostream>
#include <string.h>
using namespace std;

struct encryption
{
    char enc[200];
    char plaintext[200];
    char ciphertext[200];
    int key;
};

int main()
{
    struct encryption e;
    char username[20], password[20], choice;
    string uname = "Umang", pass = "Umang";
    int ch;
    cout << "\n                             ---------------------------------------------                  \n";
    cout << "                             *--------SECURITY OF YOUR DATA MATTERS-------*                 \n";
    cout << "\n                             ----------------------------------------------                  \n";
    cout << "                             *------THANKYOU FOR USING OUR APPLICATION------*                 \n";
    cout << "\n     PLEASE LOGIN TO USE THE FEATURES : \n";
    cout << "Enter Username : ";
    cin >> username;
    cout << "Enter Password : ";
    cin >> password;
    if (username == uname && password == pass)
    {
        cout << "\n       WELCOME TO ENCRYPT- DECRYPT WORLD!           \n\n";
        do
        {
            cout << "Please Choose your option:    \n";
            cout << "1. Press 1 for Encryption \n2. Press 2 for Decryption \n3. Press 3 for exit\n";
            cin >> ch;
            switch (ch)
            {
            case 1:

                cout << "Enter the Encryption key : ";
                cin >> e.key;

                fflush(stdin); //To clean the buffer

                cout << "\n\nEnter the plaintext : ";
                cin.get(e.plaintext, 200);

                cout << "\n\nThe Ciphertext is : ";
                for (int i = 0; i < strlen(e.plaintext); i++)
                {
                    e.enc[i] = int(e.plaintext[i]) + e.key;
                    cout << e.enc[i];
                }
                break;

            case 2:
                cout << "Enter the Decryption key : ";
                cin >> e.key;

                fflush(stdin); //To clean the buffer

                cout << "\n\nEnter the Ciphertext : ";
                cin.get(e.ciphertext, 200);

                cout << "\n\nThe Plaintext is : ";
                for (int i = 0; i < strlen(e.ciphertext); i++)
                {
                    e.plaintext[i] = int(e.ciphertext[i]) - e.key;
                    cout << e.plaintext[i];
                }
                break;

            case 3:
                cout << "\n     SEE YOU SOON !!  \n\n";
                exit(0);
                break;

            default:
                cout << "  INVALID INPUT !!   ";
            }
            cout << "\n\nPress y to continue and n to exit\n";
            cin >> choice;

        } while (choice == 'y');
    }
    else
    {
        cout << "\nIncorrect username or password !! Try again...";
    }

    return 0;
}