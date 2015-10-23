#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
#include<stdio.h>
#include<errno.h>
#include"quiz.h"

int main(int argc,char *argv[]) {
	
	
	bank b;
	char val;
	int i=0;
	FILE *fp = fopen("file1.txt","a");

	printf("Enter index\n");
	scanf("%d",&b.index);

	printf("enter que n option\n");
	val=getchar();
	while(((val=getchar()) != '\n') && (val != EOF)) {
		b.que[i]=val;
		i++;
		
	}
	b.que[i]='\0';	 
	
	printf("Enter ans:\n");
	scanf("%c",&b.ans);

	fwrite(&b,sizeof(bank),1,fp);
	fclose(fp);
	return 0;
}
	
