#include <stdio.h>

int main(){
	FILE *text;
	text = fopen("text.txt", "r");
	char c;

	if(text == NULL){
		printf("File cannot be  opened.");
	}
	
	printf("\nPrinting file content: \n");

	do{
		c = fgetc(text);
		printf("%c",c);	
	}while(c!=EOF);

	fclose(text);

}
