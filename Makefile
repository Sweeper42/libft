
NAME = libft.a

CC = clang

SRC_DIR = sources
INC_DIR = includes
OBJ_DIR = objs
OBJ_DIRS = $(OBJ_DIR)

CFLAGS = -Wall -Werror -Wextra -MMD -O2

# BEGIN FT_ERROR
FT_ERROR_DIR = ft_error
FT_ERROR_DIRS = $(FT_ERROR_DIR)
FT_ERROR_SRCS = \
	ft_error_get_err_num.c		ft_error_get_why.c

#  BEGIN FT_ERROR_ERROR_DEF
FT_ERROR_ERROR_DEF_DIR = error_def
FT_ERROR_ERROR_DEF_SRCS = \
	ft_error_bad_alloc.c		ft_error_bad_fd.c		ft_error_no_dup.c

FT_ERROR_DIRS += $(addprefix $(FT_ERROR_DIR)/, $(FT_ERROR_ERROR_DEF_DIR))
FT_ERROR_SRCS += $(addprefix $(FT_ERROR_ERROR_DEF_DIR)/, $(FT_ERROR_ERROR_DEF_SRCS))
#  END FT_ERROR_ERROR_DEF

OBJ_DIRS += $(addprefix $(OBJ_DIR)/, $(FT_ERROR_DIRS))
SRCS += $(addprefix $(FT_ERROR_DIR)/, $(FT_ERROR_SRCS))
# END FT_ERROR

# BEGIN FT_CSTRING
FT_CSTRING_DIR = ft_cstring
FT_CSTRING_SRCS = \
	ft_strlen.c		ft_strcpy.c		ft_strchr.c \
	ft_strdup.c		ft_strndup.c	ft_strcmp.c \
	ft_strequal.c	ft_isdigit.c

OBJ_DIRS += $(addprefix $(OBJ_DIR)/, $(FT_CSTRING_DIR))
SRCS += $(addprefix $(FT_CSTRING_DIR)/, $(FT_CSTRING_SRCS))
# END FT_CSTRING

# BEGIN FT_MEM
FT_MEM_DIR = ft_mem
FT_MEM_SRCS = \
	ft_memchr.c		ft_memcpy.c		ft_memdup.c \
	ft_memset.c		ft_bzero.c		ft_memdel.c \
	ft_realloc.c	ft_reallocf.c	ft_memalloc.c \
	ft_memcalloc.c

OBJ_DIRS += $(addprefix $(OBJ_DIR)/, $(FT_MEM_DIR))
SRCS += $(addprefix $(FT_MEM_DIR)/, $(FT_MEM_SRCS))
# END FT_MEM

# BEGIN FT_STRING
FT_STRING_DIR = ft_string
FT_STRING_DIRS = $(FT_STRING_DIR)
FT_STRING_SRCS = \
	ft_string_size.c	ft_string_empty.c	ft_string_c_str.c \
	ft_string_init.c	ft_string_init2.c	ft_string_init3.c \
	ft_string_new.c		ft_string_new2.c	ft_string_new3.c \
	ft_string_clean.c	ft_string_delete.c	ft_string_reserve.c \
	ft_string_check_sub_string.c		ft_string_cat.c \
	ft_string_dup.c		ft_string_equal.c	ft_string_cpy.c \
	ft_string_cmp.c		ft_string_get_handler.c \
	ft_string_put_fd.c	ft_string_catu.c	ft_string_cati.c \
	ft_string_from_cstring.c

#  BEGIN FT_STRING_ERROR_DEF
FT_STRING_ERROR_DEF_DIR = error_def
FT_STRING_ERROR_DEF_SRCS = \
	ft_string_error_out_of_range.c		ft_string_error_value_to_big.c \
	ft_string_error_no_value_found.c

FT_STRING_DIRS += $(addprefix $(FT_STRING_DIR)/, $(FT_STRING_ERROR_DEF_DIR))
FT_STRING_SRCS += $(addprefix $(FT_STRING_ERROR_DEF_DIR)/, $(FT_STRING_ERROR_DEF_SRCS))
#  END FT_STRING_ERROR_DEF

OBJ_DIRS += $(addprefix $(OBJ_DIR)/, $(FT_STRING_DIRS))
SRCS += $(addprefix $(FT_STRING_DIR)/, $(FT_STRING_SRCS))
# END FT_STRING

# BEGIN FT_STACK
FT_STACK_DIR = ft_stack
FT_STACK_DIRS = $(FT_STACK_DIR)
FT_STACK_SRCS = \
	ft_stack_init.c		ft_stack_clean.c	ft_stack_new.c \
	ft_stack_delete.c	ft_stack_empty.c	ft_stack_size.c \
	ft_stack_push.c		ft_stack_pop.c		ft_stack_emplace.c \
	ft_stack_get_handler.c					ft_stack_top.c

#  BEGIN FT_STACK_ERROR_DEF
FT_STACK_ERROR_DEF_DIR = error_def
FT_STACK_ERROR_DEF_SRCS = \
	ft_stack_error_no_delete.c		ft_stack_error_stack_empty.c

FT_STACK_DIRS += $(addprefix $(FT_STACK_DIR)/, $(FT_STACK_ERROR_DEF_DIR))
FT_STACK_SRCS += $(addprefix $(FT_STACK_ERROR_DEF_DIR)/, $(FT_STACK_ERROR_DEF_SRCS))
#  END FT_STACK_ERROR_DEF

OBJ_DIRS += $(addprefix $(OBJ_DIR)/, $(FT_STACK_DIRS))
SRCS += $(addprefix $(FT_STACK_DIR)/, $(FT_STACK_SRCS))
# END FT_STACK

# BEGIN FT_LIST
FT_LIST_DIR = ft_list
FT_LIST_DIRS = $(FT_LIST_DIR)
FT_LIST_SRCS = \
	ft_list_init.c			ft_list_clean.c		ft_list_new.c \
	ft_list_delete.c		ft_list_size.c		ft_list_empty.c \
	ft_list_front.c			ft_list_back.c		ft_list_push_back.c \
	ft_list_push_front.c	ft_list_pop_back.c	ft_list_pop_front.c \
	ft_list_begin.c			ft_list_end.c		ft_list_rbegin.c \
	ft_list_rend.c			ft_list_remove.c \
	ft_list_create_elem.c	ft_list_dup.c

#  BEGIN FT_LIST_ERROR_DEF
FT_LIST_ERROR_DEF_DIR = error_def
FT_LIST_ERROR_DEF_SRCS = \
	ft_list_error_no_delete.c		ft_list_error_list_empty.c \
	ft_list_error_invalid_ref.c		ft_list_error_bad_iterator.c

FT_LIST_DIRS += $(addprefix $(FT_LIST_DIR)/, $(FT_LIST_ERROR_DEF_DIR))
FT_LIST_SRCS += $(addprefix $(FT_LIST_ERROR_DEF_DIR)/, $(FT_LIST_ERROR_DEF_SRCS))
#  END FT_LIST_ERROR_DEF

#  BEGIN FT_LIST_ITERATOR_HANDLER
FT_LIST_ITERATOR_HANDLER_DIR = iterator_handling
FT_LIST_ITERATOR_HANDLER_SRCS = \
	ft_list_it_next.c		ft_list_it_prev.c		ft_list_it_move.c \
	ft_list_it_rmove.c		ft_list_it_equal.c		ft_list_it_value.c \
	ft_list_get_iterator_handler.c	ft_list_get_riterator_handler.c \
	ft_list_it_value_p.c

FT_LIST_DIRS += $(addprefix $(FT_LIST_DIR)/, $(FT_LIST_ITERATOR_HANDLER_DIR))
FT_LIST_SRCS += $(addprefix $(FT_LIST_ITERATOR_HANDLER_DIR)/, $(FT_LIST_ITERATOR_HANDLER_SRCS))
#  END FT_LIST_ITERATOR_HANDLER

OBJ_DIRS += $(addprefix $(OBJ_DIR)/, $(FT_LIST_DIRS))
SRCS += $(addprefix $(FT_LIST_DIR)/, $(FT_LIST_SRCS))
# END FT_LIST

# BEGIN FT_ITERATOR
FT_ITERATOR_DIR = ft_iterator
FT_ITERATOR_DIRS = $(FT_ITERATOR_DIR)
FT_ITERATOR_SRCS = \
	ft_it_next.c	ft_it_prev.c	ft_it_value.c \
	ft_it_move.c	ft_it_rmove.c	ft_it_value_p.c \
	ft_it_equal.c

#  BEGIN FT_ITERATOR_ERROR_DEF
FT_ITERATOR_ERROR_DEF_DIR = error_def
FT_ITERATOR_ERROR_DEF_SRCS = \
	ft_iterator_error_bad_operation.c	ft_iterator_error_no_value.c \
	ft_iterator_error_out_of_bound.c

FT_ITERATOR_DIRS += $(addprefix $(FT_ITERATOR_DIR)/, $(FT_ITERATOR_ERROR_DEF_DIR))
FT_ITERATOR_SRCS += $(addprefix $(FT_ITERATOR_ERROR_DEF_DIR)/, $(FT_ITERATOR_ERROR_DEF_SRCS))
#  END FT_ITERATOR_ERROR_DEF

OBJ_DIRS += $(addprefix $(OBJ_DIR)/, $(FT_ITERATOR_DIRS))
SRCS += $(addprefix $(FT_ITERATOR_DIR)/, $(FT_ITERATOR_SRCS))
# END FT_ITERATOR

# BEGIN FT_SWAP
FT_SWAP_DIR = ft_swap
FT_SWAP_SRCS = \
	ft_swap_int.c	ft_swap_ptr.c	ft_swap_int64.c

OBJ_DIRS += $(addprefix $(OBJ_DIR)/, $(FT_SWAP_DIR))
SRCS += $(addprefix $(FT_SWAP_DIR)/, $(FT_SWAP_SRCS))
# END FT_SWAP

# BEGIN FT_ARRAY
FT_ARRAY_DIR = ft_array
FT_ARRAY_DIRS = $(FT_ARRAY_DIR)
FT_ARRAY_SRCS = \
	ft_int_array_bubble_sort.c	ft_int_array_heap_sort.c	ft_int_array_heap_sort_stat.c \
	ft_int_array_fill_rand.c	ft_int_array_insertion_sort.c \
	ft_array_int_dup.c			ft_array_int64_dup.c		ft_array_int64_heap_sort.c

OBJ_DIRS += $(addprefix $(OBJ_DIR)/, $(FT_ARRAY_DIRS))
SRCS += $(addprefix $(FT_ARRAY_DIR)/, $(FT_ARRAY_SRCS))
# END FT_ARRAY

# BEGIN FT_LEX
FT_LEX_DIR = ft_lex
FT_LEX_DIRS = $(FT_LEX_DIR)
FT_LEX_SRCS = \
	ft_lex_action_table__.c		ft_lex_action_table_to_dfa__.c

OBJ_DIRS += $(addprefix $(OBJ_DIR)/, $(FT_LEX_DIRS))
SRCS += $(addprefix $(FT_LEX_DIR)/, $(FT_LEX_SRCS))
# END FT_LEX

OBJS = $(addprefix $(OBJ_DIR)/, $(addsuffix .o, $(basename $(SRCS))))
all: $(NAME)

$(NAME): $(LIB) $(OBJ_DIRS) $(OBJS)
	ar rc $(NAME) $(OBJS)
	ranlib $(NAME)

$(OBJ_DIRS):
	mkdir -p $@

%.d: ;

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c $(OBJ_DIR)/%.d
	$(CC) $(CFLAGS) -c $< -o $@ -I $(INC_DIR)

clean:
	rm -dfr $(OBJ_DIRS)

fclean: clean
	rm -f $(NAME)

re: fclean $(NAME)

.PHONY: clean fclean re all

.PRECIOUS: %.d

-include $(addsuffix .d, $(basename $(OBJS)))