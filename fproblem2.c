#include<stdio.h>
int main()
{
	FILE *fp;

	fp=fopen("input.txt","w");

	if(fp==NULL){
		printf("file is not opend");
	}
	else{
		printf("file is opend");
		char c=getchar();
		while(c!='\n'){
			fputc(c,fp);
			c=getchar();
		}
		fclose(fp);
	}


	fp=fopen("input.txt","r");
	char name[30];
	while(!feof(fp)){
		fscanf(fp,"%s",name);
		printf("%s",name);
	}
	fclose(fp);
	return 0;
}
