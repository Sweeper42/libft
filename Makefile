
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
	ft_strlen.c		ft_strcpy.c		ft_strchr.c

OBJ_DIRS += $(addprefix $(OBJ_DIR)/, $(FT_CSTRING_DIR))
SRCS += $(addprefix $(FT_CSTRING_DIR)/, $(FT_CSTRING_SRCS))
# END FT_CSTRING

# BEGIN FT_MEM
FT_MEM_DIR = ft_mem
FT_MEM_SRCS = \
	ft_memchr.c		ft_memcpy.c		ft_memdup.c

OBJ_DIRS += $(addprefix $(OBJ_DIR)/, $(FT_MEM_DIR))
SRCS += $(addprefix $(FT_MEM_DIR)/, $(FT_MEM_SRCS))
# END FT_MEM

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