try: project.o quiz.o 
	cc project.o quiz.o -o try
project.o: project.c quiz.h
	cc -Wall -c project.c
quiz.o: quiz.c quiz.h
	cc -Wall -c quiz.c


