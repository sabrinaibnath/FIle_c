#include<stdio.h>
int main()
{
	FILE *f;
	char name[30];
	int marks,number,i;

	printf("enter how many students:");
	scanf("%d",&number);

	f=fopen("info.txt","w");

	if(f==NULL){
		printf("file is not opend");
	}
	else{
		printf("file is opend\n");

		for(i=1;i<=number;i++){
			printf("enter the name of %d\n",i);
			scanf("%s",name);

			printf("enter the marks of %d'th student:\n",i);
			scanf("%d",&marks);

			fprintf(f,"\n%s \n%d \n",name,marks);
		}
		fclose(f);
	}
	return 0;
}

		

