#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE *fp;

	fp=fopen("out.txt","w");

	if(fp==NULL){
		printf("file is not opend");
	}
	else{
		printf("file is opend");
		for(int i=1;i<=100;i++){
			fprintf(fp,"%d\n",rand());
		}
		fclose(fp);


		fp=fopen("out.txt","r");
		char c;
		while(!feof(fp)){
			fscanf(fp,"%c",&c);
			printf("%c\n",c);
		}
		fclose(fp);
		}
	return 0;
}
