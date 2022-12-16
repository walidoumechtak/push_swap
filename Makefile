CC=cc
CFLAGS=-Wall -Wextra -Werror
NAME=push_swap

OBJ=push_swap.o \
	is_inputs_sorted.o \
	helpedFunction/add_back.o \
	helpedFunction/delOne.o \
	helpedFunction/ft_atoi.o \
	helpedFunction/list_size.o \
	helpedFunction/lst_new.o \
	helpedFunction/lst_clear.o \
	helpedFunction/the_big_num3.c \
	operations/pushA.o \
	operations/pushB.o \
	operations/reverseRA.o \
	operations/reverseRB.o \
	operations/rotateA.o \
	operations/rotateB.o \
	operations/rotateAll.o \
	operations/rrAll.o \
	operations/swapA.o \
	operations/swapB.o \
	operations/swapAB.o \
	
all : $(NAME)

$(NAME):$(OBJ)
	$(CC) $(CFLAGS) -o $@ $^

clean:
	rm -f $(OBJ)

fclean:
	rm -f $(NAME) $(OBJ)

re:fclean all

git:
	git add . && git commit -m "push swap" && git push