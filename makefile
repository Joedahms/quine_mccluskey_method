CC = g++
CFLAGS = -g -Wall

qmm: main.o
	$(CC) $(CFLAGS) main.o -o qmm

main.o: main.cpp
	$(CC) $(CFLAGS) -c main.cpp

#menu_machine.o: menu_machine.cpp menu_machine.h menu_state.h
#	$(CC) $(CFLAGS) -c menu_machine.cpp

clean: 
	rm *.o
	rm qmm

run:	qmm
	./qmm
