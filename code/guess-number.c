#include <stdio.h>

int main() {
    int gss = 56; //number to be guessed
    int answ; //answer form the user

    while (answ != gss) { //loop until answer = guess
	printf("Enter your guess: ");
        scanf("%d", &answ); //scans for input
	
	if (answ > gss) { //if guess is to high
	    printf("Your guess it to high\n");
	    
	    if (answ - gss <= 10) {  //if answ is closer then 10 to gss
		printf("Getting close\n");
	    }
	}
	
	else if (answ < gss) { //if guess is to low
	    printf("Your guess it to low\n");

	    if (gss - answ <= 10) {  //if answ is closer then 10 to gss
		printf("Getting close\n");
	    }
	}

    }
    printf("Good job you guessed right\n");
    return 0;

}
