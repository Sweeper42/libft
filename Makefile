
NAME = libft.a

CC = clang

SRC_DIR = sources
INC_DIR = includes
OBJ_DIR = objs
OBJ_DIRS = $(OBJ_DIR)

CFLAGS = -Wall -Werror -Wextra -Weverything -MMD -O2

# BEGIN FT_ERROR
FT_ERROR_DIR = ft_error
FT_ERROR_DIRS = $(FT_ERROR_DIR)
FT_ERROR_SRCS = \
	ft_error_get_err_num.c		ft_error_get_why.c

#  BEGIN FT_ERROR_ERROR_DEF
FT_ERROR_ERROR_DEF_DIR = error_def
FT_ERROR_ERROR_DEF_SRCS = \
	ft_error_bad_alloc.c

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
	ft_strequal.c

OBJ_DIRS += $(addprefix $(OBJ_DIR)/, $(FT_CSTRING_DIR))
SRCS += $(addprefix $(FT_CSTRING_DIR)/, $(FT_CSTRING_SRCS))
# END FT_CSTRING

# BEGIN FT_MEM
FT_MEM_DIR = ft_mem
FT_MEM_SRCS = \
	ft_memchr.c		ft_memcpy.c		ft_memdup.c \
	ft_memset.c		ft_bzero.c		ft_memdel.c \
	ft_realloc.c	ft_reallocf.c

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
	ft_string_cmp.c

#  BEGIN FT_ERROR_ERROR_DEF
FT_STRING_ERROR_DEF_DIR = error_def
FT_STRING_ERROR_DEF_SRCS = \
	ft_string_error_out_of_range.c

FT_STRING_DIRS += $(addprefix $(FT_STRING_DIR)/, $(FT_STRING_ERROR_DEF_DIR))
FT_STRING_SRCS += $(addprefix $(FT_STRING_ERROR_DEF_DIR)/, $(FT_STRING_ERROR_DEF_SRCS))
#  END FT_ERROR_ERROR_DEF

OBJ_DIRS += $(addprefix $(OBJ_DIR)/, $(FT_STRING_DIRS))
SRCS += $(addprefix $(FT_STRING_DIR)/, $(FT_STRING_SRCS))
# END FT_STRING

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