#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
#include<errno.h>
#include"list.h"
int main(int argc,char *argv[]) {
	
	
	bank b1;
	int fd = open(argv[1], O_WRONLY | O_CREAT, S_IRUSR | S_IWUSR);
	if(fd == -1) {
		perror("open failed:");
		return errno;
	}
	/* scanf returns -1 when user presses ctrl-d. EOF is #defined to be -1 in stdio.h */
	while(scanf("%lf %s %d", &b1.index,b1.que,&b1.ans) != EOF)
		write(fd, &b1, sizeof(bank));
	close(fd);
	return 0;
}
	
