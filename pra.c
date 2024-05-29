#include<stdio.h>
#include<string.h>
int main()
{
	FILE *fp;
	int n,f=0;
	char name[10],key[10],find[10];

	fp=fopen("first.txt","w");
	if(fp==NULL){
		printf("file is not opend");
	}
	else{
		printf("file is opend\n");
		printf("enter the number of input");
		scanf("%d",&n);
		for(int i=1;i<=n;i++){
			scanf("%s",name);

			fprintf(fp,"%s\n",name);
		}
		fclose(fp);
	}

	fp=fopen("first.txt","r");
	printf("enter the key:");
	scanf("%s",key);
	
	while(!feof(fp)){
		fscanf(fp,"%s",find);
		if(strcmp(find,key)==0){
			f=1;
			break;
		}
	}

	if(f==1){
		printf("found");
	}
	else{
		printf("not found");
	}
	fclose(fp);
	return 0;
}



