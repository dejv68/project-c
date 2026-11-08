#include <stdio.h>

int main() {
    int n1, n2;
    printf("Type 2 numbers\n");
    scanf("%d%d", &n1, &n2);

    printf("num1 and num2: %d, %d\n", n1, n1);
    
    if (n1 > n2) {
	printf("the first number is bigger\n");
    }
    else if ( n1 < n2) {
	printf("the first number is smaller\n");
    }
    else {
	printf("they are equal\n");
    }
}
