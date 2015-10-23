typedef struct bank {
	int index;
	char que[1024];
   	char ans;
}bank;
typedef struct account {
	char name[20];
	int score;
}account;		
void help();
void write_score(int a , char name[20]);
void display_score();

