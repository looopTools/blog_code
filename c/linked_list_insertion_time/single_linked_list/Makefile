CC = clang
CXX_FLAGS = -std=c17 -Wall -Werror -c

all: node list fio without_tail with_tail node_opt list_opt fio_opt without_tail_opt with_tail_opt

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


node_opt:
	$(CC) $(CXX_FLAGS)  -O3 node.c -o node_opt.o

list_opt:
	$(CC) $(CXX_FLAGS)  -O3 list.c -o list_opt.o

fio_opt:
	$(CC) $(CXX_FLAGS)  -O3 file_io.c -o file_io_opt.o

without_tail_opt:
	$(CC) $(CXX_FLAGS) -O3 without_tail.c -o without_tail_opt.o
	$(CC) -o without_tail_opt node_opt.o list_opt.o file_io_opt.o without_tail_opt.o

with_tail_opt:
	$(CC) $(CXX_FLAGS) -O3 with_tail.c -o with_tail_opt.o
	$(CC) -o with_tail_opt node_opt.o list_opt.o file_io_opt.o with_tail_opt.o



clean:
	rm *.o
	rm without_tail
	rm with_tail
	rm without_tail_opt
	rm with_tail_opt



