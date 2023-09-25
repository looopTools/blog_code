CC = clang
CXX_FLAGS = -std=c17 -Wall -Werror -c

all: node list fio without_tail with_tail

node:
	$(CC) $(CXX_FLAGS)  node.c

list:
	$(CC) $(CXX_FLAGS)  list.c

fio:
	$(CC) $(CXX_FLAGS)  file_io.c

without_tail:
	$(CC) $(CXX_FLAGS) without_tail.c
	$(CC) -o without_tail node.o list.o file_io.o without_tail.o

with_tail:
	$(CC) $(CXX_FLAGS) with_tail.c
	$(CC) -o with_tail node.o list.o file_io.o with_tail.o

clean:
	rm *.o
	rm without_tail
	rm with_tail



