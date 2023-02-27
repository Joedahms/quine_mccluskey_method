CC = gcc
CFLAGS = -g -Wall

qmm: main.o file_in.o
	$(CC) $(CFLAGS) main.o file_in.o -o qmm

main.o: main.c file_in.h
	$(CC) $(CFLAGS) -c main.c

file_in.o: file_in.c file_in.h
	$(CC) $(CFLAGS) -c file_in.c

#menu_machine.o: menu_machine.cpp menu_machine.h menu_state.h
#	$(CC) $(CFLAGS) -c menu_machine.cpp

clean: 
	rm *.o
	rm qmm
