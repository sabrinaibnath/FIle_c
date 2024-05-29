#include<stdio.h>
#include<string.h>
int main()
{
	FILE *g;
	char name[40]="sabrina ibnath";
	char c;
	int length=strlen(name);

	g=fopen("first2.txt","w");

	if(g==NULL){
		printf("file is not opend");
	}
	else{
		printf("file is opend");
		fputs(name,g);
		fclose(g);
	}
	return 0;
}
