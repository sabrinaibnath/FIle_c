#include<stdio.h>
#include<string.h>
int main()
{
	FILE *file;
	char c;

	file=fopen("first.txt","r");

	if(file==NULL){
		printf("file is not opend\n");
	}
	else{
		printf("file is opend\n");
		while(!feof(file)){
			c=getc(file);
			printf("%c",c);
		}
		fclose(file);
	}
	return 0;
}
