# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kmumm <kmumm@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/04 16:16:20 by kmumm             #+#    #+#              #
#    Updated: 2021/10/05 21:11:35 by kmumm            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

LIST =	ft_isalpha\
		ft_isdigit\
		ft_isalnum\
		ft_isascii\
		ft_isprint\
		ft_strlen\
		ft_memset\
		ft_bzero\
		ft_memcpy\
		ft_memmove\
		ft_strlcpy\
		ft_strlcat\
		ft_toupper\
		ft_tolower\
		ft_strchr\
		ft_strrchr\
		ft_strncmp\
		ft_memchr\
		ft_memcmp\

SRCS = $(addsuffix .c, $(LIST))
OBJS = $(addsuffix .o, $(LIST))

FLAGS = -Wall -Werror -Wextra

all : $(NAME)

$(NAME) : $(OBJS) libft.h
	ar rcs $(NAME) $?

.c.o: $(SRCS)
	gcc $(FLAGS) -c -o $@ $<

clean: 
	@rm -f $(OBJS)

fclean: 
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re