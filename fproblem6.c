#include<stdio.h>
int main()
{
	FILE *fp;

	fp=fopen("out.txt","w");
	if(fp==NULL){
		printf("file is not opend");
	}
	else{
		printf("file is opend\n");
		fputs("computer science engineering",fp);
	}
	fclose(fp);

	fseek(fp,4L,0);
	printf("%c\n",getc(fp));
	return 0;
}

