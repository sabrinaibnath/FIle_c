#include<stdio.h>
#include<string.h>
int main()
{
	FILE *f;
	char name[20];

	f=fopen("first.txt","r");

	if(f==NULL){
		printf("file is not opend");
	}
	else{
		printf("file is opend");
		while(!feof(f)){
			fputs(name,20,f);
		}
		fclose(f);
	}
	return 0;
}
