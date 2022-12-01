#include <stdio.h>
#include <string.h>

int main(void) {
	char twit[30] = "Elon"; 
	strcat(twit, " Musk");

	printf("Who is the current owner of twitter: ");
	char answer[30];
		
	scanf("%29s", answer);

	strcat(answer, " Musk");
	
	if (strcmp(twit, answer) == 0) {
		printf("You are correct!\n Its %s", answer);
	} else {
		printf("You are wrong!\n %s", answer);
	}
	return 0;
}
