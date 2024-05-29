#include<stdio.h>
#include<string.h>
int main()
{
	FILE *h;
	char name1[10]="sabrina";
	char name2[10]="ibnath";
	
	h=fopen("first2.txt","w");

	if(h==NULL){
		printf("file is not opend");
	}
	else{
		printf("file is opend");
		fprintf(h,"%s %s",name1,name2);
		fclose(h);
	}
	return 0;
}
