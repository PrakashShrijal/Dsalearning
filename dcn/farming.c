#include <stdio.h>
#include <conio.h>
#include <string.h>

#define MAX 100

// 1. Character Count Framing
void character_count_framing(char *input) {
    int len = strlen(input);
    printf("\nCharacter Count Framing:\n");
    printf("Framed Data: ");
    printf("%d%s\n", len, input);  // First byte is the length
}

// 2. Character Stuffing (using 'D' for DLE, assume STX/ETX implied)
void character_stuffing(char *input) {
    int i;
    printf("\nCharacter Stuffing:\n");
    printf("Framed Data: D STX ");
    for(i = 0; input[i] != '\0'; i++) {
        if(input[i] == 'D') {
            printf("D ");  // Stuff extra 'D' for each 'D'
        }
        printf("%c ", input[i]);
    }
    printf("D ETX\n");
}

// 3. Bit Stuffing (Insert 0 after 5 consecutive 1's)
void bit_stuffing(char *input) {
    char stuffed[MAX];
    int i = 0, j = 0, count = 0;

    while (input[i] != '\0') {
        stuffed[j++] = input[i];

        if(input[i] == '1') {
            count++;
            if(count == 5) {
                stuffed[j++] = '0';  // Stuff a 0
                count = 0;
            }
        } else {
            count = 0;
        }
        i++;
    }

    stuffed[j] = '\0';

    printf("\nBit Stuffing:\n");
    printf("Framed Data with Flags: 01111110 %s 01111110\n", stuffed);  // HDLC-like framing
}

void main() {
    char input[MAX];


    printf("Enter Data (characters or bits): ");
    gets(input);  // Turbo C compatible

    character_count_framing(input);
    character_stuffing(input);
    bit_stuffing(input);

    getch();
}