#include<stdio.h>
int main()
{
	FILE *f;
	char name1[10];
	char name2[10];

	f=fopen("first.txt","r");

	if(f==NULL){
		printf("file is not opend");
	}
	else{
		printf("file is opend\n");
		while(!feof(f)){
		fscanf(f,"%s %s",name1,name2);
		printf("%s %s",name1,name2);
		}
		fclose(f);
	}
	return 0;
}
