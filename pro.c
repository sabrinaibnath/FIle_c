#include<stdio.h>
#include<string.h>
int main()
{
	char name[10],find[10];
	int count=0;
	FILE *f;
	f=fopen("input.txt","w");

	if(f==NULL){
		printf("file is not opend");
	}
	else{
		printf("file is opend");

		for(int i=1;i<=5;i++){
			scanf("%s",name);
			fprintf(f,"%s\n",name);
		}
	}
	fclose(f);

	printf("enter the name you are searching:");
	scanf("%s",find);

	f=fopen("input.txt","r");

	while(!feof(f)){
		fscanf(f,"%s",name);
		if(strcmp(name,find)==0){
			count++;
			break;
		}
	}
	if(count==1){
		printf("found");
	}
	else{
		printf("not found");
	}
	return 0;
}
	

