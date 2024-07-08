#include <stdio.h>
#include <string.h>
#include <stdbool.h>

#define MAX_LEN 100

void generateStrings(char* input, char* current, int index, bool used[], int len) {
    if (index == len) {
        if (strstr(current, "CAT") != NULL) {
            printf("%s\n", current);
        }
        return;
    }

    for (int i = 0; i < len; i++) {
        if (!used[i]) {
            used[i] = true;
            current[index] = input[i];
            current[index + 1] = '\0';
            generateStrings(input, current, index + 1, used, len);
            used[i] = false;
        }
    }
}

int main() {
    char input[] = "CHARIOT";
    int len = strlen(input);
    char current[MAX_LEN] = "";
    bool used[MAX_LEN] = {false};

    printf("Strings containing 'CAT' from '%s':\n", input);
    generateStrings(input, current, 0, used, len);

    return 0;
}