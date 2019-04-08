NAME = libft.a

SRCC = ft_memset.c ft_bzero.c ft_memcpy.c ft_memccpy.c ft_memmove.c \
		ft_memchr.c ft_memcmp.c ft_strlen.c ft_strdup.c ft_strcpy.c ft_strncpy.c \
		ft_strcat.c ft_strncat.c ft_strchr.c ft_strrchr.c ft_strstr.c

SRCO = ft_memset.o ft_bzero.o ft_memcpy.o ft_memccpy.o ft_memmove.o \
		ft_memchr.o ft_memcmp.o ft_strlen.o ft_strdup.o ft_strcpy.o ft_strncpy.o \
		ft_strcat.o ft_strncat.o ft_strchr.o ft_strrchr.o ft_strstr.o

INC = ./

all: $(NAME)

$(NAME):
	gcc -Wall -Wextra -Werror -c -I $(INC) $(SRCC) 
	ar rc $(NAME) $(SRCO)   

clean:
	rm -f $(SRCO)

fclean: clean
	rm -f $(NAME)

re: fclean all
