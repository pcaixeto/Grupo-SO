#include <stdio.h>

int main(){
	FILE *text;
	char name[10];

	printf("\nFile to be read: ");
	scanf("%s", name);

	text = fopen(name, "r");
	char c;

	if(text == NULL){
		printf("\nFile cannot be  opened. Exiting program.\n ");
		return 1;
	}
	
	printf("\nPrinting file content: \n");

	do{
		c = fgetc(text);
		printf("%c",c);	
	}while(c!=EOF);

	fclose(text);

}
