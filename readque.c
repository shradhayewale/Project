#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
#include<errno.h>
#include"list.h"
int main(int argc,char *argv[]) {
	
	bank b1;
	int fd = open(argv[1], O_RDONLY);
	double index=atoi(argv[2]);
	if(fd == -1) {
		perror("open failed:");
		return errno;
	}

	while(read(fd, &b1, sizeof(bank))) {
		if(index == b1.index) {
		printf("%lf \n", b1.index);
		printf("%s\n",b1.que);
		printf("%d\n",b1.ans);
		return 0;
                }
        }
	close(fd);
	return 0;
}		
