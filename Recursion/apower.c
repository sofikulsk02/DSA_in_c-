#include <stdio.h>

int powerMod(int a, int b, int m) {
    if (b == 0)
        return 1;
    
    long long int temp = powerMod(a, b / 2, m);
    
    if (b % 2 == 0)
        return (temp * temp) % m;
    // If b is odd
    else
        return (((a % m) * temp) % m * temp) % m;
}

int main() {
    int a, b, m;
    printf("Enter three numbers a, b, and m: ");
    scanf("%d %d %d", &a, &b, &m);
    
    if (m <= 0) {
        printf("Invalid input. m should be a positive integer.\n");
    } else {
        
        int result = powerMod(a, b, m);
        printf("%d^%d %% %d = %d\n", a, b, m, result);
    }
    
    return 0;
}
