#include <stdio.h>

int main() {
    int a[100]; // Adjusted array size to handle more elements
    int i, j, k, n, c = 0, pos = 0;
    
    // Get the number of bits
    printf("\nEnter the number of bits: ");
    scanf("%d", &n);
    
    // Get the bits
    printf("\nEnter the bits: ");
    for(i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    
    // Perform bit stuffing
    for(i = 0; i < n; i++) {
        if(a[i] == 1) {
            c++;
            if(c == 5) {
                pos = i + 1;
                c = 0;
                
                // Shift bits to the right to make space for the stuffed bit
                for(j = n; j >= pos; j--) {
                    a[j + 1] = a[j];
                }
                
                // Stuff a 0 at the position
                a[pos] = 0;
                n++; // Increase the number of bits after stuffing
            }
        } else {
            c = 0;
        }
    }
    
    // Print the data after stuffing
    printf("\nDATA AFTER STUFFING\n");
    printf("01111110 ");  // Starting delimiter for bit stuffing
    for(i = 0; i < n; i++) {
        printf("%d", a[i]);
    }
    printf(" 01111110\n");  // Ending delimiter for bit stuffing
    
    return 0;
}
