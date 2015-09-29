#include<stdio.h>
#include<ctype.h>
#include<stdlib.h>
#include<time.h>
#include"quiz.h"
int main() {
	int counter,cnt,r,i,nq[10];
	char name[30];
	char choise,tpch;
	float score;
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

    
     scanf("%c",&choise);
     switch(choise) {
		case 'H':
                	help();
			goto mainpage;
			break;
		case 'V':
			display_score();
			goto mainpage;
			break;
		
		case 'Q':		
			exit(0);
			break;
		case 'S':
		       
			printf("\nEnter Y to continue.otherwise enter any other key to return to homepage\n");
			
			char ch;
			scanf("%c",&ch);
			 if (ch=='Y' || ch=='y') {
		         	goto homepage;
        		}
			else {
        			goto mainpage;
       				
       			}
			
			homepage:
				
				printf("\n\n\tEnter Your Name\n");
				printf("\t\tOnly one word name\t\n");
				gets(name);
			break;
				 
       }
        
 
return 1;
}




