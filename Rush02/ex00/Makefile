CC=gcc
CFLAGS=-Wall -Wextra -Werror
SRCDIR=./srcs
SRC=$(wildcard $(SRCDIR)/*.c)
OBJS=$(SRC:.c=.o)
INC=-I./includes
TARGET=rush-02

all : $(TARGET)

%.o : %.c
	$(CC) $(CFLAGS) -c $< -o $@ $(INC)

$(TARGET) : $(OBJS)
	$(CC) $(CFLAGS) $^ -o $@

clean :
	rm -f $(OBJS)

fclean:clean
	rm -rf $(TARGET)

re : fclean all
