CC=gcc
STD=--std=gnu11
CFLAGS= -g -W $(STD)
DIR=headers
INC=-I./$(DIR)

list.o: $(DIR)/list.h list.c 
	$(CC) $(CFLAGS) $(INC) -c list.c

employee.o: $(DIR)/employee.h employee.c 
	$(CC) $(CFLAGS) $(INC) -c employee.c

clean:
	rm -r *.o