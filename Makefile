CC=cc
CFLAGS=-Wall -Wextra -Werror
NAME=push_swap
NAMEB=checker

OBJ=push_swap.o \
	is_inputs_sorted.o \
	fill_stack.o \
	helpedFunction/add_back.o \
	helpedFunction/add_front.o \
	helpedFunction/delOne.o \
	helpedFunction/ft_atoi.o \
	helpedFunction/list_size.o \
	helpedFunction/lst_new.o \
	helpedFunction/lst_clear.o \
	helpedFunction/get_last_lst.o \
	helpedFunction/bigNum.o \
	helpedFunction/smallNum.o \
	helpedFunction/get_sorted_array.o \
	helpedFunction/index_from_stack.o \
	helpedFunction/index_the_stack.o \
	helpedFunction/ft_putstr.o \
	helpedFunction/check_list_sort.o \
	helpedFunction/ft_strcmp.o \
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
	error_check/is_all_digit.o \
	error_check/is_not_repeated.o \
	error_check/isnot_big_int.o \
	cases/five.o \
	cases/three.o \
	cases/big_stack.o \
	
OBS=checker/checker.o \

all : $(NAME)

$(NAME):$(OBJ)
	$(CC) $(CFLAGS) -o $@ $^

bonus : $(NAMEB)

$(NAMEB):$(OBJ) $(OBS)
	$(CC) $(CFLAGS) -o $@ $^

clean:
	rm -f $(OBJ)

fclean:
	rm -f $(NAME) $(OBJ)

re:fclean all

ww:all clean

git:
	git add . && git commit -m "push swap" && git push
