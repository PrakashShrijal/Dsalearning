#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Function to calculate even parity
int calculate_parity(char *data) {
    int count = 0;
    for (int i = 0; data[i]; i++) {
        if (data[i] == '1') count++;
    }
    return count % 2 == 0 ? 0 : 1;
}

// Function to calculate checksum
unsigned int calculate_checksum(char *data) {
    unsigned int sum = 0;
    for (int i = 0; i < strlen(data); i++) {
        sum += data[i];
    }
    return ~sum;  // One's complement
}

// Function to encode Hamming (7,4)
void hamming_encode(char d[5], char encoded[8]) {
    encoded[0] = d[0];
    encoded[1] = d[1];
    encoded[2] = d[2];
    encoded[4] = d[3];

    // Calculate parity bits
    encoded[6] = ((d[0] - '0') ^ (d[1] - '0') ^ (d[3] - '0')) + '0'; // p1
    encoded[5] = ((d[0] - '0') ^ (d[2] - '0') ^ (d[3] - '0')) + '0'; // p2
    encoded[3] = ((d[1] - '0') ^ (d[2] - '0') ^ (d[3] - '0')) + '0'; // p3

    encoded[7] = '\0';
}

// Function to decode Hamming (7,4) and correct 1-bit error
void hamming_decode(char encoded[8]) {
    int p1 = (encoded[6] - '0') ^ (encoded[0] - '0') ^ (encoded[1] - '0') ^ (encoded[3] - '0');
    int p2 = (encoded[5] - '0') ^ (encoded[0] - '0') ^ (encoded[2] - '0') ^ (encoded[3] - '0');
    int p3 = (encoded[3] - '0') ^ (encoded[1] - '0') ^ (encoded[2] - '0') ^ (encoded[4] - '0');

    int error_pos = p1 * 1 + p2 * 2 + p3 * 4;

    if (error_pos) {
        printf("Hamming Code: Error at bit position %d. Correcting...\n", error_pos);
        encoded[error_pos - 1] ^= 1;
    } else {
        printf("Hamming Code: No error detected.\n");
    }

    printf("Corrected Data Bits: %c%c%c%c\n", encoded[0], encoded[1], encoded[2], encoded[4]);
}

int main() {
    char data[100];
    printf("Enter 4-bit data for Hamming, or any text for Parity/Checksum: ");
    scanf("%s", data);

    // 1. Parity Bit
    int parity = calculate_parity(data);
    printf("\nEven Parity Bit: %d\n", parity);

    // 2. Checksum
    unsigned int checksum = calculate_checksum(data);
    printf("Checksum (1's complement of sum): %u\n", checksum);

    // 3. Hamming Code (7,4)
    if (strlen(data) == 4) {
        char encoded[8];
        hamming_encode(data, encoded);
        printf("\nHamming Encoded (7 bits): %s\n", encoded);

        // Simulate error
        printf("Enter a 7-bit code to decode (with or without error): ");
        scanf("%s", encoded);

        hamming_decode(encoded);
    } else {
        printf("\nHamming Code requires 4-bit binary input.\n");
    }

    return 0;
}
