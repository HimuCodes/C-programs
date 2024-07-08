#include <stdio.h>
#include <string.h>
#include <ctype.h>

void removeChar(char *str, char c) {
    int i, j;
    int len = strlen(str);
    for (i = j = 0; i < len; i++) {
        if (str[i] != c) {
            str[j++] = str[i];
        }
    }
    str[j] = '\0';
}

void toLowerCase(char *str) {
    for (int i = 0; str[i]; i++) {
        str[i] = tolower(str[i]);
    }
}

int main() {
    char name1[50], name2[50];
    char flames[] = "FLAMES";
    int count, flame_index = 0;

    printf("Enter the first name: ");
    scanf("%s", name1);
    printf("Enter the second name: ");
    scanf("%s", name2);

    toLowerCase(name1);
    toLowerCase(name2);

    for (int i = 0; i < strlen(name1); i++) {
        for (int j = 0; j < strlen(name2); j++) {
            if (name1[i] == name2[j]) {
                removeChar(name1, name1[i]);
                removeChar(name2, name2[j]);
                i--;
                break;
            }
        }
    }

    count = strlen(name1) + strlen(name2);

    while (strlen(flames) > 1) {
        flame_index = (flame_index + count - 1) % strlen(flames);
        removeChar(flames, flames[flame_index]);
    }

    printf("Relationship: ");
    switch (flames[0]) {
        case 'F':
            printf("Friends\n");
            break;
        case 'L':
            printf("Love\n");
            break;
        case 'A':
            printf("Affection\n");
            break;
        case 'M':
            printf("Marriage\n");
            break;
        case 'E':
            printf("Enemy\n");
            break;
        case 'S':
            printf("Sibling\n");
            break;
    }

    return 0;
}