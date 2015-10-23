#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
#include<errno.h>
#include"quiz.h"
int main(int argc,char *argv[]) {
	
	bank b;
	int index1, pt=0;
	printf("enter index");
	scanf("%d", &index1);
	FILE *fp = fopen("file5.txt", "r");
	
	
	while(fread(&b, sizeof(bank), 1, fp)) {
		if(index1 == b.index) {
			printf("%d\n",b.index);
			printf("%s\n",b.que);
			printf("%c\n",b.ans);
			
                }
		else{
			printf("Record not found");
		} 
			
        }
	fclose(fp);
	return 0;
}		
