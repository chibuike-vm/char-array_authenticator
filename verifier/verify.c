#include <stdio.h>
#include <string.h>

int main(void) {
	char twit[30] = "Elon"; 
	strcat(twit, " Musk");

	printf("What is the first name of the current owner of twitter: ");
	char answer[30];
		
	scanf("%29s", answer);

	strcat(answer, " Musk");
	
	(strcmp(twit, answer) == 0) ? printf("You are correct!\nIts %s\n", answer) : printf("You are wrong!\n");

	return 0;
}
