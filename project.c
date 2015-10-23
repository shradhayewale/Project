#include<stdio.h>
#include<ctype.h>
#include<stdlib.h>
#include<time.h>
#include<fcntl.h>
#include<errno.h>
#include<stdlib.h>
#include"quiz.h"
int main(int argc,char *argv[]) {
	int counter,cnt,r=1,i,n[10],a,index;
	char name[30];
	char choise,tpch,ch,ch1;
	float score;
	bank b;
	


	mainpage:
	
     	printf("\t\t\t    *****QUIZ GAME*****\n");
     	printf("\n\t\t");

    	printf("\n\t\t\t       WELCOME ");
     	printf("\n\t\t\t         TO");
    	printf("\n\t\t\t    THE QUIZ GAME ");
     	printf("\n\t\t----------------------------------------");
     	printf("\n\t\t----------------------------------------");
        printf("\n\t\t      ") ;
     	printf("\n\t\t________________________________________");
     	printf("\n\t\t________________________________________");
     	printf("\n\t\t ~ Press S to start the game");
     	printf("\n\t\t ~ Press V to view the highest score  ");
     	printf("\n\t\t ~ press H for help            ");
     	printf("\n\t\t ~ press Q to quit             ");
     	printf("\n\t\t________________________________________\n\n");

        choise = toupper(getchar());	
        if(choise == 'H') {
		system("clear");
                help();
		goto mainpage;
		system("clear");
	}
	else if(choise == 'V'){
		display_score();
		goto mainpage;
	}		
	else if(choise == 'Q') {		
		exit(0);
	}
	else if(choise == 'S') {
		system("clear");
		
  		printf("\n\n\tEnter Your Name\t");
		printf("\t(Only one word name)\t\n");
		scanf("%s",name);
		printf("\n\n\t HELLO %s\n",name);

		system("clear");
		printf("\nEnter Y to continue.otherwise enter any other key to return to homepage\n");
		
		
		if (getchar()== 'y' || getchar() == 'Y') {
			goto start;
			
		}
		else {
			goto mainpage;
			system("clear");
		}
        		
			
		
		start:system("clear");
		
		
		srand( time(NULL) );
		r = rand() % 2 +1;
		n[i] = r;
		for(a = 0; a < i; a++) {
			if(n[a] == r)
				goto start;
		}		
		
		FILE *fp = fopen("file1.txt", "r");
		
		while(fread(&b, sizeof(bank), 1, fp)) {
			if(r == b.index) {
				printf("%d\n",b.index);
				printf("%s\n",b.que);
				printf("%c\n",b.ans);
			
        	        
				printf("\nEnter your answer:\t");
				
				if(toupper(getchar()) == toupper(b.ans)) {
					printf("CORRECT..!!!");
					counter = counter + 1;
				}
				else {
 					printf("WRONG.");
					printf("The correct answeer is: %c",b.ans);
				}
			}
			 
			

		/* 1. read ans from the user. 
		   2. chek the ans.(if ans matches incre counter)
		   3. calculate the total (score = counter) 
		   4. call fun write_score(int score,char name[30])*/
			write_score(score,name);
		
		
		}
		fclose(fp);
	}
        
return 1;
}




