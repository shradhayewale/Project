#include<stdio.h>
#include<ctype.h>
#include<stdlib.h>
#include<time.h>
#include<fcntl.h>
#include<errno.h>
#include<string.h>
#include<stdlib.h>
#include"quiz.h"

void help() {
	system("clear");
	printf("\n\n\t\t\t********** HELP WIZARD ********** \t\n");
	printf("\n >This is quiz game.");
	printf("\n >You will be given options and you have to press 1, 2 ,3 or 4 for the right option.");
    	printf("\n >Your score will be displayed at the end of each question.");
	printf("\n >You can choose any one of the following sections for quiz:\n");
	printf("\t\t\t1. C programming\n");
	printf("\t\t\t2. C++ Programming\n");
	printf("\t\t\t3. java Programming\n");
	printf("\t\t\t4. data structure\n");
	printf("\n >Your score will be calculated and displayed at the end.");
	printf("\n\n\t\t\t ALL THE BEST...!!!!!!");
	printf("\n\t\t -------------------------------");

}
void write_score(int score,char name[20],char fname[10]) {
	
	account a;
	FILE *fp = fopen(fname,"a");
	strcpy(a.name,name);
	a.score = score;
	fwrite(&a,sizeof(account),1,fp);
	fclose(fp);
}
void display_score() {

	account a;
	int ch;
	system("clear");
	printf("\n\n\t\t\t********** SCORES ********** \t\n");
	printf("\n> Select the Sections below to view the scores achieved in that sections.\n");
	printf("\n\t\t\tPRESS:\n");
	printf("\t\t\t1. C programming\n");
	printf("\t\t\t2. C++ Programming\n");
	printf("\t\t\t3. java Programming\n");
	printf("\t\t\t4. data structure\n");
	scanf("%d",&ch);
	if(ch == 1) {
		system("clear");	
		printf("\t\t\t********** C PROGRAMMING SCORES ********** \t\n");
		FILE *fp = fopen("cscore.txt", "r");
		if(fp == NULL) {
			perror("error in opening file");
		}
	
		printf("\n\t\t\t\tNAME\t\t| SCORE\n");
		printf("\t\t\t\t----\t\t  -----\n");
	
		while(fread(&a, sizeof(account), 1, fp)) {
			printf("\t\t\t\t%s\t\t| ",a.name);
			printf("%d\n",a.score);
		}
		fclose(fp);
	}
	else if(ch == 2) {
		system("clear");	
		printf("\t\t\t********** C++ PROGRAMMING SCORES ********** \t\n");	
		FILE *fp = fopen("cppscore.txt", "r");
		if(fp == NULL) {
			perror("error in opening file");
		}
	
		printf("\n\t\t\t\tNAME\t\t| SCORE\n");
		printf("\t\t\t\t----\t\t  -----\n");
	
		while(fread(&a, sizeof(account), 1, fp)) {
			printf("\t\t\t\t%s\t\t| ",a.name);
			printf("%d\n",a.score);
		}
		fclose(fp);
	}
	else if(ch == 3) {
		system("clear");	
		printf("\t\t\t********** JAVA PROGRAMMING SCORES ********** \t\n");	
		FILE *fp = fopen("javascore.txt", "r");
		if(fp == NULL) {
			perror("error in opening file");
		}
	
		printf("\n\t\t\t\tNAME\t\t| SCORE\n");
		printf("\t\t\t\t----\t\t  -----\n");
	
		while(fread(&a, sizeof(account), 1, fp)) {
			printf("\t\t\t\t%s\t\t| ",a.name);
			printf("%d\n",a.score);
		}
		fclose(fp);
	}
	else if(ch == 4) {
		system("clear");	
		printf("\t\t\t********** DATA STRUCTURE PROGRAMMING SCORES ********** \t\n");	
		FILE *fp = fopen("dsascore.txt", "r");
		if(fp == NULL) {
			perror("error in opening file");
		}
	
		printf("\n\t\t\t\tNAME\t\t| SCORE\n");
		printf("\t\t\t\t----\t\t  -----\n");
	
		while(fread(&a, sizeof(account), 1, fp)) {
			printf("\t\t\t\t%s\t\t| ",a.name);
			printf("%d\n",a.score);
		}
		fclose(fp);
	}
	else {
		printf("Invalid Choise.\n");
	}
}

int checking(int ans,int mainans) {
	
	int counter = 0;
	if(ans == mainans) {
		printf("CORRECT..!!!\n");
		counter = counter + 1;
					
	}
	else {
 		printf("WRONG.\n");
		printf("The correct answeer is: %d\n",mainans);
					
	}
return counter;
}

void addque(char fname[20]) {
	bank b;
	char val;
	int i=0;
	FILE *fp = fopen(fname,"a");
	if(fp == NULL) {
		perror("error in opening file");
	}
	
	printf("Enter index:\n");
	scanf("%d",&b.index);

	printf("enter question and options:\n");
	val=getchar();
	while(((val=getchar()) != '\n') && (val != EOF)) {
		b.que[i]=val;
		i++;
		
	}
	b.que[i]='\0';	 
	
	printf("Enter ans:\n");
	scanf("%d",&b.ans);

	fwrite(&b,sizeof(bank),1,fp);
	fclose(fp);
}

void add_new_passwd(char newpasswd[20]) {
	
	FILE *fp = fopen("passwd.txt","w");
	if(fp == NULL) {
		perror("error in opening file");
	}
	fwrite(newpasswd,1,strlen(newpasswd),fp);
	printf("\n\n\t\t Password Successfully Changes.\n");
	fclose(fp);
}
int readindex(char fname[20]) {
	int cnt;
	FILE *fp = fopen(fname,"r");
	if(fp == NULL) {
		perror("error in opening file");
	}
	fscanf(fp,"%d",&cnt);
	fclose(fp);
	return cnt;
}
void writeindex(char fname[20],int cnt) {

	FILE *fp = fopen(fname,"w");
	if(fp == NULL) {
		perror("error in opening file");
	}
	fprintf(fp,"%d",cnt);
	fclose(fp);
}	

	
