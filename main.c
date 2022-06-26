
#include <stdio.h>

#define BUFSIZE 1024
#define READ_ONLY "r"
#define WRITE_ONLY "w"
#define WRITE_IN_END "a"


int main(int argc, char *argv[]) {	

	if (argc < 2) {
		printf("Enter name read file\n\nExample: %s", argv[0]);
		printf(" text.txt");
		getchar();
		return 1;
	}
	
	FILE *file;
	char buffer[BUFSIZE];	
	char c;	
	//char name[] = "тест.та";
	char name[] = "test.txt";
		
	//file = fopen(name, WRITE_IN_END);
    //fprintf(file, "\nHello, World!");	
    //fclose(file);
	
	file = fopen(name, READ_ONLY);
	
	if (file == NULL) {
		printf("Not open file...");
		getchar();
		return 0;
	}
	
	while (!feof(file)) {
		fgets(buffer, 127, file);		
        //c = fgetc(file);		
        //printf("%c\n", c);
        printf("%s\n", buffer);
        //getchar();    
	}
    fclose(file);
	
    //printf("%s", buffer);	
	printf("\nRead file: %s", argv[1]);
	getchar();
	return 0;
}