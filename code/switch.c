#include <stdio.h>

int main() {
    char operators;
    double num1, num2;

    printf("Choose operator: +, - ,/ ,*\n");
    scanf("%c", &operators);

    printf("Enter two numbers: ");
    scanf("%lf%lf", &num1, &num2);

    switch (operators) {
	case '+':
	    printf("anwer: %2.lf\n", num1 + num2);
	    break;	
	case '-':
	    printf("anwer: %2.lf\n", num1 - num2);
	    break;	
	case '/':
	    printf("anwer: %2.lf\n", num1 / num2);
	    break;	
	case '*':
	    printf("anwer: %2.lf\n", num1 * num2);
	    break;	
    }

    return 0;
}

