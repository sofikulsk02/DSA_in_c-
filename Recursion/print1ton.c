#include <stdio.h>

void printNumbers(int n) {
    
    if (n == 0)
        return ;
    else {
        printNumbers(n - 1);
        printf("%d ", n);
    }
}

int main() {
    int n;
    printf("Enter a number (N): ");
    scanf("%d", &n);
    
    if (n < 1) {
        printf("Invalid input. Please enter a positive integer.\n");
    } else {
        printf("Numbers from 1 to %d are: ", n);
        printNumbers(n);
        printf("\n");
    }
    
    return 0;
}
