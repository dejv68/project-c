#include <stdio.h>

int main() {
	int sum = 0,num;
	
	for (10); {	
		printf("enter number");
		scanf("%d", &num);

		sum = sum + num;

		if (num < 0) 
			continue;	
		
		printf("all %d", sum);
	}
}	
