try: project.o quiz.o writque.o 
	cc project.o quiz.o writque.o -o try
project.o: project.c quiz.h
	cc -Wall -c project.c
quiz.o: quiz.c quiz.h
	cc -Wall -c quiz.c
writque.o: writque.c quiz.h 
	cc -Wall -c writque.c

