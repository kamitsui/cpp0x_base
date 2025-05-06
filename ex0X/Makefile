# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kamitsui <kamitsui@student.42tokyo.jp>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/03/15 19:38:29 by kamitsui          #+#    #+#              #
#    Updated: 2025/05/06 23:13:52 by kamitsui         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# @file ex0X/Makefile
# @brief This File is a Makefile for building example in ex0X directory.

# Directories
OBJ_DIR = objs
DEP_DIR = .deps

# Source files
SRCS = main.cpp Example.cpp useExampleClass.cpp

# Object files and dependency files
OBJS = $(addprefix $(OBJ_DIR)/, $(SRCS:.cpp=.o))
DEPS = $(addprefix $(DEP_DIR)/, $(SRCS:.cpp=.d))

# Build target
NAME = example

# Compiler
CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98
CF_DEP = -MMD -MP -MF $(@:$(OBJ_DIR)/%.o=$(DEP_DIR)/%.d)

# Rules for building object files
$(OBJ_DIR)/%.o: %.cpp
	@mkdir -p $(OBJ_DIR)
	@mkdir -p $(DEP_DIR)
	$(CXX) $(CXXFLAGS) $(CF_DEP) -c $< -o $@

# Rules for building dependency files
$(DEP_DIR)/%.d: %.c
	@mkdir -p $(DEP_DIR)

# Default target
all: $(NAME)
.PHONY: all

# Build Target
$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)
	$(call ASCII_ART,${NAME})

# Rule for removing object & dependency files
clean:
	rm -rf $(OBJ_DIR) $(DEP_DIR)
.PHONY: clean

# Rule for removing Target & others
fclean: clean
	rm -f $(NAME)
.PHONY: fclean

# Rule for Clean & Build Target
re: fclean all
.PHONY: re

# ASCII Art : Display Tips the way to use.
define ASCII_ART
	@echo " _____________________________________________"
	@echo "< Usage :                                     >"
	@echo "<  $$ ./example                                >"
	@echo "----------------------------------------------"
	@echo "       \   ^__^"
	@echo "        \  (oo)\_______"
	@echo "           (__)\       )\\/\\"
	@echo "               ||----w |"
	@echo "               ||     ||\n"
endef
