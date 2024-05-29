#include<stdio.h>
int main()
{
	FILE *fo;
	fo=fopen("first.txt","r");

	if(fo==NULL){
		printf("file is not opend");
	}
	else{
		while(!feof(fo)){
			char c = fgetc(fo);
			printf("%c",c);
		}
		fclose(fo);
	}
	return 0;
}
