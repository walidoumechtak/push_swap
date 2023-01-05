CC=cc
CFLAGS=-Wall -Wextra -Werror
NAME=push_swap
NAMEB=checkers

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
	helpedFunction/ft_indexof.o \
	helpedFunction/ft_role.o \
	helpedFunction/desc_array.o \
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
	checker/operations/pa.o \
	checker/operations/pb.o \
	checker/operations/ra.o \
	checker/operations/rb.o \
	checker/operations/rr.o \
	checker/operations/rra.o \
	checker/operations/rrb.o \
	checker/operations/rrr.o \
	checker/operations/sa.o \
	checker/operations/sb.o \
	checker/operations/ss.o \
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

all : $(NAME)

$(NAME):$(OBJ)
	$(CC) $(CFLAGS) -o $@ $^

bonus : $(NAMEB)

$(NAMEB):$(OBS)
	$(CC) $(CFLAGS) -o $@ $^

clean:
	rm -f $(OBJ) $(OBS)

fclean:
	rm -f $(NAME) $(OBJ) $(OBS)

re:fclean all

ww:all clean

git:
	git add . && git commit -m "push swap" && git push
