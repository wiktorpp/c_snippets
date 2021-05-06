#include <stdio.h>
#include <string.h>

int main() {
	char string[50];
	scanf("%s", string);
	for(int i = 0; i < strlen(string); i++) {
		printf("%X ", string[i]);
	}
	printf("\n");
}