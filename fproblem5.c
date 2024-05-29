#include<stdio.h>
int main()
{
	char name[20];
	int number;
	printf("enter the number of input");
	scanf("%d",&number);
	FILE *fp;
	fp=fopen("first.txt","w");
	if(fp==NULL){
		printf("file is not opend");
	}
	else{
		printf("file is opend\n");
		for(int i=1;i<=number;i++){
			scanf("%s",name);
			fprintf(fp,"%s",name);
		}
		fclose(fp);
	}
	return 0;
}
		

