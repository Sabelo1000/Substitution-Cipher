// This program demostrates a simple and very old method of sending secret messages using the substitution cipher

#include <iostream>
#include <string>
using namespace std;

int main() {

    string secretMessage;
    string encryptedMessage;

    string alphabets {"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
    string keys {};

    // Copy the string alphabets into the string keys backwards
    for (int i {alphabets.length() - 1}; i != -1; i--) {
        keys.push_back(alphabets.at(i));
    }

    cout<<"Enter your secret message : ";
    getline(cin, secretMessage);

    cout<<endl;

    cout<<"Encrypting message..."<<endl;
    cout<<endl;
    cout<<"Encrypted message : "<<encryptedMessage<<endl;

    return 0;
}
