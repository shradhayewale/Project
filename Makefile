try: project.o quiz.o readque.o writque.o list.o
	cc project.o quiz.o readque.o writque.o list.o -o try
project.o: project.c quiz.h
	cc -Wall -c project.c
quiz.o: quiz.c quiz.h
	cc -Wall -c quiz.c
readque.o: readque.c list.h
	cc -Wall -c readque.c
writque.o: writque.c list.h 
	cc -Wall -c writque.c
list.o: list.c list.h
	cc -Wall -c list.c  
