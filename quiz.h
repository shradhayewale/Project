/*****************************************************************************
 *  This file is part of Quiz project.
 *
 *  This is free software: you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation, either version 3 of the License, or
 *  (at your option) any later version.
 *
 *  newmath is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with Quiz.  If not, see <http://www.gnu.org/licenses/>.
************************************************/
/*structure defination*/
typedef struct bank {
	int index;
	char que[1024];
   	int ans;
}bank;
typedef struct account {
	char name[20];
	int score;
}account;
/*function declarations*/		
void help();
void write_score(int a , char name[20],char fname[10]);
void display_score();
int checking(int ans,int mainans);
void addque(char fname[20]);
void add_new_passwd(char newpasswd[20]);
int readindex(char fname[20]);
void writeindex(char fname[20],int cnt);
