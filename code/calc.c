#include <stdio.h>

int main() {

    char op;
    float num, num2;
    
<<<<<<< HEAD

=======
>>>>>>> 96020e2d87b0e2a05fdc2d51ba23b084a03c8204
    printf("Enter operator: +, -, *, /\n");
    scanf("%c", &op);
    printf("Enter two numbers: \n");
    scanf("%f %f", &num, &num2);
    
    switch (op) {
	case '+':
	    printf("%.2f + %.2f = %.2f\n", num, num2, num + num2);
	    break;
	case '-':
	    printf("%.2f - %.2f = %.2f\n", num, num2, num - num2);
	    break;
	case '*':
	    printf("%.2f * %.2f = %.2f\n", num, num2, num * num2);
	    break;
	case '/':
	    printf("%.2f / %.2f = %.2f\n", num, num2, num / num2);
	    break;
	default:
	    printf("error");
    };
}
