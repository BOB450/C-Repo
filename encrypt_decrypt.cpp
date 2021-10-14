#include <iostream>

using namespace std;

string encryptDecrypt(string toEncrypt) {
    char key[3] = {'K', 'C', 'Q'}; //Any chars will work
    
    string output = toEncrypt;
    
    for (int i = 0; i < toEncrypt.size(); i++)
        output[i] = toEncrypt[i] ^ key[i % (sizeof(key) / sizeof(char))];
    
    return output;
}


int main(int argc, const char * argv[])
{
    string encrypted;
    int f;
    cin.sync();
    cout << "\nDo you want to encrypt(1) or decrypt(2):  ";
    cin >> f;
    if(f == 1)
    {
     string a;
    cout << "\nEnter Text to encrypt";
    std::getline(std::cin, a);
    string encrypted = encryptDecrypt(a);
    cout << "Encrypted:" << encrypted << "\n";
    }

else{
    
    string decrypted = encryptDecrypt(encrypted);
    cout << "Decrypted:" << decrypted << "\n";
}
    
    return 0;
}