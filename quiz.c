#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
#include<stdlib.h>
#include<string.h>
#include"quiz.h"

void help() {
	
  printf("\n\n\n\t >This game is very easy to play.");
	printf("\n\n\t  >You will be given 4 options and you have to press A, B ,C or D for the right option");
  printf("\n");
	printf("\n\n\t >Your score will be calculated at the end");
	printf("\n\n\t >Remember that the more quicker you give answer the more");
	printf("\n\n\tscore you will secure. Your score will be calculated and displayed");
	printf("\n\n\tat the end. If you secure highest score, your score");
	printf("\n\n\twill be recorded. So BEST OF LUCK.");

}
void write_score(int score,char name[20]) {
	
	account a;
	FILE *fp = fopen("score.txt","a");
	a.score = score;
	strcpy(a.name,name);
	fwrite(&a,sizeof(account),1,fp);
	fclose(fp);
}
void display_score() {

	account a;
	FILE *fp = fopen("score.txt", "r");
	while(fread(&a, sizeof(account), 1, fp)) {
		printf("%s\t",a.name);
		printf("%d\n",a.score);
	}
	fclose(fp);
}


