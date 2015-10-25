typedef struct bank {
	int index;
	char que[1024];
   	int ans;
}bank;
typedef struct account {
	char name[20];
	int score;
}account;		
void help();
void write_score(int a , char name[20],char fname[10]);
void display_score();
int checking(int ans,int mainans);
void addque(char fname[20]);
void add_new_passwd(char newpasswd[20]);
int readindex(char fname[20]);
void writeindex(char fname[20],int cnt);
