#include <stdio.h>

int main(){
        FILE *fileA, *fileB;
        char nameA[10], nameB[10];

        printf("File to be copied from (filename.txt): ");
        scanf("%s", nameA);

        fileA = fopen(nameA, "r");
        if(fileA == NULL){
                printf("\nThe file cannot be opened. Exiting program.\n");
                return 1;
        }else
                printf("\nFile opened successfully.\n");

        printf("\nNew file name (filename.txt): ");
        scanf("%s",nameB);

        fileB = fopen(nameB,"w");
        if(fileB == NULL){
                printf("\nThe file cannot be created. Exiting program.\n");
		return 1;
        }else
                printf("\nFile created successfully.\n");

        char c;

        c = fgetc(fileA);
        while(c!=EOF){
                fputc(c, fileB);
                c = fgetc(fileA);
        }

        fclose(fileA);
        fclose(fileB);

        return 0;
}
