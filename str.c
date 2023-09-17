//
// Created by himan on 17-09-2023.
//
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    char ch, s[100], sen[100];

    // Read a character, and then consume the newline character
    scanf(" %c", &ch);
    scanf("\n");

    // Read a string (including spaces) until a newline character is encountered
    scanf("%[^\n]%*c", s);

    // Read another string (including spaces) until a newline character is encountered
    scanf("%[^\n]%*c", sen);

    // Your code continues here...

    return 0;
}
