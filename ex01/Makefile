NAME= phonebook
SRCS= $(wildcard *.cpp)

OBJS= ${SRCS:.cpp=.o}

GPP= g++
FLAGS= -Wall -Wextra -Werror -std=c++98

RM=rm -rf

all: $(NAME)

${NAME}: $(OBJS)
	$(GPP) $(FLAGS) $(OBJS) -o $@
	
%.o: %.cpp
	$(GPP) $(FLAGS) -c $< -o $@

clean:
	${RM} ${OBJS}

fclean: clean
	${RM} ${NAME}

re: fclean all

.PHONY: all clean fclean re #bonus
