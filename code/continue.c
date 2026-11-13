#include <stdio.h>

int main() {
    int sum = 0, num;

    for (int i = 0; i < 5; i++)	{
        printf("Enter a number ");
	scanf("%d", &num);
	sum = sum + num;

	if (num < 0) {
	    continue;
	}
	
	printf("%d\n", num);
    }
    printf("\ntotal sum: %d\n", sum);
    return 0;
}

