NAME = Karen

SRCS = main.cpp Karen.cpp

OBJS = ${SRCS:.cpp=.o}

INC = Karen.hpp

CC  = g++

RM  = rm -f

INC_CMP = $(addprefix -I, $(INC))

CFLAGS = -Wall -Wextra -Werror

all:			$(NAME)

$(NAME):		$(OBJS)
				$(CC) $(CFLAGS) $(INC_CMP) $(OBJS) -o $(NAME)

$(OBJS):		$(INC)

clean:
				$(RM) $(OBJS)

fclean:			clean
				$(RM) $(NAME)

re:			 fclean all

.PHONY: all clean fclean re