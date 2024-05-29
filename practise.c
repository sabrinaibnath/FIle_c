#include<stdio.h>
#include<string.h>
int main()
{
	int n;
	printf("enter the number:");
	scanf("%d",&n);

	char input[10];
	char key[10];
	char find[10];
	printf("enter the key:");
	scanf("%s",key);

	FILE *fp;
	fp=fopen("input.txt","w");

	if(fp==NULL){
		printf("file is not opend");
	}
	else{
		printf("enter the string:");
		for(int i=1;i<=n;i++){
			scanf("%s",input);
			fprintf(fp,"%s\n",input);
		}
	}
	fclose(fp);

	fp=fopen("input.txt","r");
	int count=0;

	while(!feof(fp)){
		fscanf(fp,"%s",find);
		if(strcmp(find,key)==0){
			count++;
			break;
		}
	}
	if(count==1){
		printf("found");
	}
	else{
		printf("no");
	}
	fclose(fp);
	return 0;
}


