#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	FILE *fp;

	fp=fopen("input.txt","w");

	if(fp==NULL){
		printf("file is not opend");
	}
	else{
		printf("file is opend");
		char name[10];
		printf("\n enter your names");
		for(int i=1;i<=5;i++){
			scanf("%s",name);
			fprintf(fp,"%s\n",name);
		}
		fclose(fp);
	}

	char key[10];
	printf("enter the name you want to find");

	scanf("%s",key);

	char find[10];
	int cout;

	fp=fopen("input.txt","r");
	while(!feof(fp)){
		fscanf(fp,"%s",find);
		if(strcmp(find,key)==0)
		{
			cout=1;
			break;
		}
		
	}

	if(cout==1){
		printf("found");
	}
	else{
		printf("not found");
	}
	fclose(fp);
	return 0;
}
	

		

