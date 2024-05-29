#include<stdio.h>
int main()
{
	FILE *f;
	//opening the file
	f=fopen("first.txt","w");
	//checking if the file is opend
	if(f==NULL){
		printf("file is opend");
	}
	else{
		printf("file is not opend\n");
		char c=getchar();
		while(c!='\n'){
			fputc(c,f);
			c=getchar();
		}
		fclose(f);
	}
	return 0;
}

