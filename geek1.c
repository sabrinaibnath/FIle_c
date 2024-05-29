#include<stdio.h>
#include<string.h>
int main()
{
	FILE *f;
	char name[40]="sabrina ibnath";
	char c;
	int length=strlen(name);


	f=fopen("first.txt","w");
	if(f==NULL){
		printf("file is not opend");
	}
	else{
		printf("file is opend");
		for(int i=0;i<length;i++){
			c=name[i];
			fputc(c,f);
		}
		fclose(f);
	}
	return 0;
}
