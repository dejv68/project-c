#include <stdio.h>

int main() {
        double num, sum = 0;

        while (1) {
                printf("Enter a numebr: ");
                scanf("%lf", &num);

                printf("%.2lf\n", num);
                sum = sum + num;

                if (num < 0.0)
                        break;
                }

        printf("\nsum = %.2lf\n", sum);
}
