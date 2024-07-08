#include <stdio.h>
#include <string.h>

#define SHIFT 3

// Function to encrypt the string
void encrypt(char* str) {
    for (int i = 0; str[i] != '\0'; i++) {
        char ch = str[i];

        // Encrypt uppercase letters
        if (ch >= 'A' && ch <= 'Z') {
            str[i] = ((ch - 'A' + SHIFT) % 26) + 'A';
        }
            // Encrypt lowercase letters
        else if (ch >= 'a' && ch <= 'z') {
            str[i] = ((ch - 'a' + SHIFT) % 26) + 'a';
        }
    }
}

// Function to decrypt the string
void decrypt(char* str) {
    for (int i = 0; str[i] != '\0'; i++) {
        char ch = str[i];

        // Decrypt uppercase letters
        if (ch >= 'A' && ch <= 'Z') {
            str[i] = ((ch - 'A' - SHIFT + 26) % 26) + 'A';
        }
            // Decrypt lowercase letters
        else if (ch >= 'a' && ch <= 'z') {
            str[i] = ((ch - 'a' - SHIFT + 26) % 26) + 'a';
        }
    }
}

int main() {
    char str[] = "attack is tomorrow";

    printf("Original string: %s\n", str);

    encrypt(str);
    printf("Encrypted string: %s\n", str);

    decrypt(str);
    printf("Decrypted string: %s\n", str);

    return 0;
}
