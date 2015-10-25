#include<stdio.h>
#include<ctype.h>
#include<stdlib.h>
#include<time.h>
#include<fcntl.h>
#include<errno.h>
#include<stdlib.h>
#include<string.h>
#include"quiz.h"
int main(int argc,char *argv[]) {
	int counter,r,i,a,score,ans,flen,opt,ch,ch1,passwdchk,p,mark;
	int cnt1,cnt2,cnt3,cnt4;
	int c1,c2,c3,c4;
	int n[10];
	char name[30],passwd[20],mainpasswd[20],oldpasswd[20],newpasswd[20];
	char choise;
	time_t t; 
	
	bank b;
	mainpage:
	
	printf("\n\t");
     	printf("\t\t\t*****QUIZ GAME*****\n");
     	printf("\n\t\t\t\t       WELCOME ");
     	printf("\n\t\t\t\t         TO");
    	printf("\n\t\t\t\t    THE QUIZ GAME ");
     	printf("\n\t\t\t----------------------------------------");
     	printf("\n\t\t\t----------------------------------------");
        printf("\n\t\t\t      ") ;
     	printf("\n\t\t\t________________________________________");
     	printf("\n\t\t\t________________________________________");
	
     	printf("\n\t\t\t ~ Press S to start the game");
     	printf("\n\t\t\t ~ Press V to view the highest score  ");
     	printf("\n\t\t\t ~ press H for help            ");
     	printf("\n\t\t\t ~ press Q to quit             ");
	printf("\n\t\t\t ~ Enter W to add questions   ");
	printf("\n\t\t\t________________________________________\n\n");
	
	page:

	choise = toupper(getchar());
        if(choise == 'H') {
		
                help();
		printf("\n\n\n\t> Press M to go to main menu or any other key to exit\n");
		if(getchar() == 'm' || getchar() == 'M'){
			goto mainpage;
		}
		else {
			exit(0);
		}
		
	}
	else if(choise == 'V'){
		display_score();
		printf("\n\n\t> Press M to go to main menu or any other key to exit\n");
		if(getchar() == 'm' || getchar() == 'M'){
			goto mainpage;
		}
		else {
			exit(0);
		}
		
		
	}		
	else if(choise == 'Q') {		
		exit(0);
	}
	else if(choise == 'S') {
		system("clear");
		
  		printf("\n\n\tEnter Your Name\t");
		printf("(Only one word name)\t\n");
		scanf("%s",name);
		printf("\n\n\t\t\t\t HELLO %s\n",name);
		
		printf("\n\n\t\t\t> Choose The Subject\n");
		printf("\t\t\tPRESS:\n");
		printf("\t\t\t1. C PROGRAMMING\n");
		printf("\t\t\t2. C++ PROGRAMMING\n");
		printf("\t\t\t3. JAVA PROGRAMMING\n");
		printf("\t\t\t4. DATA STRUCTURE\n");
		scanf("%d",&ch);
		
		if(ch == 1) {
			system("clear");
			printf("\n\t\t\t ***WELCOME TO C PROGRAMMING SECTION*** \n");
			printf("\t\t\t---------------------------------------  \n\n");
			i = 0;
			counter = 0;
			score = 0;
			mark = 5;			

			start1:

			c1 = readindex("index1.txt");
			
			srand( (unsigned) time(&t) );
			c1 = c1 + 1;
			r = rand() % c1 ;
			n[i] = r;
			for(a = 0; a < i; a++) {
				if(n[a] == r)
					goto start1;
			}		
		
		
			FILE *fp = fopen("cfile.txt", "r");
			if(fp == NULL) {
				perror("error in opening file");
			}
			while(fread(&b, sizeof(bank), 1, fp)) {
				if(b.index == r) {
				
					printf("\n%s\n",b.que);
					printf("Enter Ans:");
					scanf("%d",&ans);
					counter = checking(ans,b.ans);
					score = score + counter;
					printf("SCORE:%d\n",score);
					i = i + 1;
						if(i < mark)
							goto start1;
				}
			}
		
		
			fclose(fp);
			if(score >= 0) {
				printf("\n\t%s,Your Score is: %d\n",name,score);
			}
			else if(score == 5) {
				printf("\n\tCONGRATULATIONS %s,Your score is: %d\n",name,score);
			}
			write_score(score,name,"cscore.txt");
			
			
			printf("\n >Press m to go to mainpage.otherwise enter any other key to exit\n");
			if (getchar()== 'M' || getchar() == 'm') {
				goto mainpage;

			}
			else {
				exit(0);
			}
		}	
			


		else if(ch == 2) {
			system("clear");
			printf("\n\t\t\t ***WELCOME TO C++ PROGRAMMING SECTION*** \n");
			printf("\t\t\t---------------------------------------  \n\n");

			i = 0;
			counter = 0;
			score = 0;
			mark = 5;

			start2:

			c2 = readindex("index2.txt");
			c2 = c2 + 1;
			srand( (unsigned) time(&t) );
			r = rand() % c2 ;
			n[i] = r;
			for(a = 0; a < i; a++) {
				if(n[a] == r)
					goto start2;
			}		
		
		
			FILE *fp = fopen("cppfile.txt", "r");
			if(fp == NULL) {
				perror("error in opening file");
			}
			while(fread(&b, sizeof(bank), 1, fp)) {
				if(b.index == r) {
				
					printf("\n%s\n",b.que);
					printf("Enter Ans:");
					scanf("%d",&ans);
					counter = checking(ans,b.ans);
					score = score + counter;
					printf("SCORE:%d\n",score);
					i = i + 1;
						if(i < mark)
							goto start2;
				}
			}
		
		
			fclose(fp);
			if(score >= 0) {
				printf("\n\t%s,Your Score is: %d\n",name,score);
			}
			else if(score == 5) {
				printf("\n\tCONGRATULATIONS %s,Your score is: %d\n",name,score);
			}

			write_score(score,name,"cppscore.txt");
			
			printf("\n >Press m to go to mainpage.otherwise enter any other key to exit\n");
			if (getchar()== 'M' || getchar() == 'm') {
				goto mainpage;

			}
			else {
				exit(0);
			}
		}	


		else if(ch == 3) {
			system("clear");
			printf("\n\t\t\t ***WELCOME TO JAVA PROGRAMMING SECTION*** \n");
			printf("\t\t\t---------------------------------------  \n\n");

			i = 0;
			counter = 0;
			score = 0;
			mark = 5;

			start3:

			c3 = readindex("index3.txt");
                        c3 = c3 + 1;
			srand( (unsigned) time(&t) );
			r = rand() % c3 ;
			n[i] = r;
			for(a = 0; a < i; a++) {
				if(n[a] == r)
					goto start3;
			}		
		
		
			FILE *fp = fopen("javafile.txt", "r");
			if(fp == NULL) {
				perror("error in opening file");
			}
			while(fread(&b, sizeof(bank), 1, fp)) {
				if(b.index == r) {
				
					printf("\n%s\n",b.que);
					printf("Enter Ans:");
					scanf("%d",&ans);
					counter = checking(ans,b.ans);
					score = score + counter;
					printf("SCORE:%d\n",score);
					i = i + 1;
						if(i < mark)
							goto start3;
				
				}
			
			}
		
		
			fclose(fp);
			if(score >= 0) {
				printf("\n\t%s,Your Score is: %d\n",name,score);
			}
			else if(score == 5) {
				printf("\n\tCONGRATULATIONS %s,Your score is: %d\n",name,score);
			}

			write_score(score,name,"javascore.txt");
			
			printf("\n> Press m to go to mainpage.otherwise enter any other key to exit\n");
			if (getchar()== 'M' || getchar() == 'm') {
				goto mainpage;

			}
			else {
				exit(0);
			}
		}


		else if(ch == 4) {
			system("clear");
			printf("\n\t\t\t ***WELCOME TO DATA STRUCTURE PROGRAMMING SECTION*** \n");
			printf("\t\t\t---------------------------------------  \n\n");
			i = 0;
			counter = 0;
			score = 0;
			mark = 5;

			start4:

			c4 = readindex("index4.txt");
			c4 = c4 + 1;
			srand( (unsigned) time(&t) );
			r = rand() % c4 ;
			n[i] = r;
			for(a = 0; a < i; a++) {
				if(n[a] == r)
					goto start4;
			}		
		
		
			FILE *fp = fopen("dsafile.txt", "r");
			if(fp == NULL) {
				perror("error in opening file");
			}
			while(fread(&b, sizeof(bank), 1, fp)) {
				if(b.index == r) {
				
					printf("\n%s\n",b.que);
					printf("Enter Ans:");
					scanf("%d",&ans);
					counter = checking(ans,b.ans);
					score = score + counter;
					printf("SCORE:%d\n",score);
					i = i + 1;
						if(i < mark)
							goto start4;
				}
			}
		
		
			fclose(fp);
			if(score >= 0) {
				printf("\n\t%s,Your Score is: %d\n",name,score);
			}
			else if(score == 5) {
				printf("\n\tCONGRATULATIONS %s,Your score is: %d\n",name,score);
			}

			write_score(score,name,"dsascore.txt");
			
			printf("\n >Press m to go to mainpage.otherwise enter any other key to exit\n");
			if (getchar()== 'M' || getchar() == 'm') {
				goto mainpage;

			}
			else {
				exit(0);
			}
		}

		else if(ch != 1 && ch != 2 && ch != 3 && ch != 4){

			printf("Sorry! invalid choise\n");
			printf("\n >Press m to go to mainpage.otherwise enter any other key to exit\n");
			if (getchar()== 'M' || getchar() == 'm') {
				goto mainpage;

			}
			else {
				exit(0);
			}
			
			
		}		
	}

	else if(choise == 'W') {
		
		system("clear");
		printf("\n\t\t\t *** Welcome to Add Question Wizard *** ");
		printf("\n\t\t\t ------------------------------------- \n\n");
		printf("\n\n > To add questions you need to login with correct password\n\n");

		again:

		printf("\n\t\t\t ENTER PASSWORD:");
		scanf("%s",passwd);

		FILE *fp = fopen("passwd.txt","r");
		flen = 0;
		if(fp == NULL) {
			perror("error in opening file");
		}
		fseek(fp,0,SEEK_END);
		flen = ftell(fp);
		fseek(fp,0,SEEK_SET);
		fread(mainpasswd,1,(flen - 1),fp);
		
		if(strcmp(passwd,mainpasswd) == 0) {
			printf("\n\n\t\t\t PASSWORD MATCHES.!!\n");
			goto quepg;
		}
		else {
			printf("\n\t\tSorry! YOU Entered Incorrect Password.\n");
			printf("\t\tPlease Enter correct password.\n");
			printf("\n\t\t > Enter A to again enter the password\n");
			printf("\t\t > Enter M to go to mainpage\n");	
			if(getchar() == 'a' || getchar() == 'A') {
				goto again;
			}
			else {
				goto mainpage;
     			}
			
		}

		
		quepg:

		printf("\n\t\t\t > Enter 1 to change the password\n");
		printf("\t\t\t > Enter 2 to add question\n");
		
		scanf("%d",&opt);
		if(opt == 1) {
			goto change;
			
       		}
		else if(opt == 2) {
			goto imp;
		}

		change:
		
		passwdchk = 0;
		system("clear");
		printf("\n\t\t\t *** Welcome to Password Change Wizard *** ");
		if(passwdchk == 3) {
			printf("\n\t\t\tSorry,No more attempts.\t");
			printf("\n >Press m to go to mainpage.otherwise enter any other key to exit\n");
			if (getchar()== 'M' || getchar() == 'm') {
				goto mainpage;

			}
			else {
				exit(0);
			}
		}
			
		printf("\n\n\t\t\tEnter Old Password:");
		scanf("%s",oldpasswd);
		
		if(strcmp(passwd,mainpasswd) == 0) {

			printf("\n\t\t\tPASSWORD MATCHES\n");
			printf("\t\t\tEnter the new password:");
			scanf("%s",newpasswd);
			add_new_passwd(newpasswd);
			printf("\n >Press m to go to mainpage.otherwise enter any other key to exit\n");
			if (getchar()== 'M' || getchar() == 'm') {
				goto mainpage;

			}
			else {
				exit(0);
			}
		}
		else {
			printf("\t\t\tPlease entered correct Password\n");
			printf("\t\t\tPRESS:\n");
			printf("\t\t\t1. To again enter the password\n");
			printf("\t\t\t0. TO exit");
			scanf("%d",&p);
			if(p == 1){
				goto change;
			}
			else {
				exit(0);
			}
			
		}
		fclose(fp);
		
		imp:

		system("clear");
		printf("\n\t\t\t *** Add Question Wizard *** ");
		printf("\n\t\t\t --------------------------- \n\n");
		printf("\t\t NOTE:[current index indicates the index of question you are entering].");

		printf("\n\t\t\t Select the section to which you want to add questions:\n");
		printf("\t\t\t 1. C PROGRAMMING\n");
		printf("\t\t\t 2. C++ PROGRAMMING\n");
		printf("\t\t\t 3. JAVA PROGRAMMING\n");
		printf("\t\t\t 4. DATA STRUCTURE\n");
		scanf("%d", &ch1);
		
		if(ch1 == 1) {

			system("clear");
			printf("\n\t\t\t *** C PROGRAMMING Question Wizard *** ");
			printf("\n\t\t\t ------------------------------------- \n\n");
			cnt1 = readindex("index1.txt");
			cnt1 = cnt1 + 1;
			printf("Current Index:%d",cnt1);
			writeindex("index1.txt",cnt1);
			
			addque("cfile.txt");
			printf("\n\t\t>Press Y to add one more question or any other key to exit");
		
			if(getchar() == 'y' || getchar() == 'Y' ) {
				goto imp;
		        }
			else {
				exit(0);
			}
		}

		else if(ch1 == 2) {
			
			system("clear");
			printf("\n\t\t\t *** C++ PROGRAMMING Question Wizard *** ");
			printf("\n\t\t\t --------------------------------------- \n\n");
			cnt2 = readindex("index2.txt");
			cnt2 = cnt2 + 1;
			printf("Current Index:%d\n",cnt2);
			writeindex("index2.txt",cnt2);

			addque("cppfile.txt");
			printf("\n\t\t>Press Y to add one more question or any other key to exit");
		
			if(getchar() == 'y' || getchar() == 'Y' ) {
				goto imp;
		        }
			else {
				exit(0);
			}
		}

		else if(ch1 == 3) {

			system("clear");
			printf("\n\t\t\t *** JAVA PROGRAMMING Question Wizard *** ");
			printf("\n\t\t\t ------------------------------------- \n\n");
			cnt3 = readindex("index3.txt");
			cnt3 = cnt3 + 1;
			printf("Current Index:%d\n",cnt3);
			writeindex("index3.txt",cnt3);

			addque("javafile.txt");
			printf("\n\t\t>Press Y to add one more question or any other key to exit");
		
			if(getchar() == 'y' || getchar() == 'Y' ) {
				goto imp;
		        }
			else {
				exit(0);
			}
		}
		
		else if(ch1 == 4) {
			
			system("clear");
			printf("\n\t\t\t *** DATA STRUCTURE PROGRAMMING Question Wizard *** ");
			printf("\n\t\t\t ------------------------------------- \n\n");
			cnt4 = readindex("index4.txt");
			cnt4 = cnt4 + 1;
			printf("Current Index:%d\n",cnt4);
			writeindex("index4.txt",cnt4);

			addque("dsafile.txt");
			printf("\n\t\t >Press Y to add one more question or any other key to exit");
		
			if(getchar() == 'y' || getchar() == 'Y' ) {
				goto imp;
		        }
			else {
				exit(0);
			}
		}
		else {
 			printf("Invalid choise");
			printf("Enter Y to add question or any other key to exit");
		
			if(getchar() == 'y' || getchar() == 'Y' ) {
				goto imp;
		        }
			else {
				exit(0);
			}
		}		
	}	

	else {
 		goto page;
	}
        
return 1;
}



