# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abaiao-r <abaiao-r@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/21 15:08:37 by abaiao-r          #+#    #+#              #
#    Updated: 2023/09/21 22:42:35 by abaiao-r         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Compiler settings
CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98 -g #-fsanitize=address

# Directories
SRCDIR = src
OBJDIR = objs

# Source Files

SRCS =  $(SRCDIR)/main.cpp \
        $(SRCDIR)/Animal.cpp \
        $(SRCDIR)/Dog.cpp \
        $(SRCDIR)/Cat.cpp \
        $(SRCDIR)/WrongAnimal.cpp \
        $(SRCDIR)/WrongCat.cpp \
		$(SRCDIR)/Brain.cpp
		
OBJS = 	$(SRCS:$(SRCDIR)/%.cpp=$(OBJDIR)/%.o)

# Targets
NAME = I_do_not_want_to_set_the_world_on_fire

all: 	$(NAME)


clean:
		rm -rf $(OBJDIR)

fclean:	clean
		rm -f $(NAME)

run:	fclean all
		./$(NAME)

re:		fclean all

test: 	all
		./$(NAME)

valgrind: all
		valgrind --leak-check=full --show-leak-kinds=all ./$(NAME)

$(NAME): 	$(OBJS)
			$(CXX) $(OBJS) $(CXXFLAGS) -o  $(NAME) 

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

$(OBJDIR):
	mkdir -p $(OBJDIR)

$(OBJDIR)/%.o: $(SRCDIR)/%.cpp | $(OBJDIR)
	$(CXX) $(CXXFLAGS) -c $< -o $@

.PHONY: all clean fclean re run test
