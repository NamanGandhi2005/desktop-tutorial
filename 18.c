#include <stdio.h>
#include <ctype.h>

int main() {
    char line[100];
    int vowels = 0, consonants = 0, digits = 0;

    printf("Enter a line of text: ");
    fgets(line, sizeof(line), stdin);

    for (int i = 0; line[i] != '\0'; i++) {
        if (isalpha(line[i])) {
            if (line[i] == 'a' || line[i] == 'e' || line[i] == 'i' || line[i] == 'o' || line[i] == 'u' ||
                line[i] == 'A' || line[i] == 'E' || line[i] == 'I' || line[i] == 'O' || line[i] == 'U')
                vowels++;
            else
                consonants++;
        } else if (isdigit(line[i]))
            digits++;
    }

    printf("Vowels: %d\n", vowels);
    printf("Consonants: %d\n", consonants);
    printf("Digits: %d\n", digits);

    return 0;
}
