#NAME------------------------------------------------------
NAME	=	ex05
#CMDS------------------------------------------------------
CXX		=	c++ -std=c++98
RM		=	rm -rf
LIBC	=	ar rcs
#FLAGS-----------------------------------------------------
CFLAGS	=	-Wall -Wextra -Werror
#DIRS------------------------------------------------------
D_LIBS	=	libs
D_INCS	=	incs
#FILES-----------------------------------------------------
SRCS	=	main.cpp\
			Fixed.cpp
OBJS	=	$(SRCS:.cpp=.o)
#COLOR-----------------------------------------------------
C_OFF	=	"\033[0m"
C_RED	=	"\033[1;31m"
C_GRN	=	"\033[1;32m"
C_BLE	=	"\033[1;34m"
C_PLE	=	"\033[1;35m"
C_CYN	=	"\033[1;36m"
INFO	=
#PRINTER---------------------------------------------------
define P_STAT
	$(eval INFO = $(shell echo $(1)$(C_OFF)))
	$(info $(INFO))
endef
#KEY-------------------------------------------------------
all : $(NAME)
#NAME------------------------------------------------------
$(NAME) : $(OBJS)
	$(call P_STAT,$(C_BLE)Compiling)

	@$(CXX) $(CFLAGS) -o $@ $^
	$(call P_STAT,$(C_PLE)$(NAME)"         "✅)

	$(call P_STAT,$(C_GRN)Done!)
#OBJS------------------------------------------------------
%.o : %.cpp
	@$(CXX) $(CFLAGS) -c $< -o $@ 
#CLEAN-----------------------------------------------------
clean :
	$(call P_STAT,$(C_RED)Cleaning)

	@$(RM) $(OBJS)
	$(call P_STAT,$(C_CYN)Obj"          "✅)

	$(call P_STAT,$(C_GRN)Done!)
	$(info )
#FCLEAN----------------------------------------------------
fclean : clean
	$(call P_STAT,$(C_RED)Removing)

	@$(RM) $(NAME)
	$(call P_STAT,$(C_PLE)$(NAME)"         "✅)

	$(call P_STAT,$(C_GRN)Done!)
	$(info )
#RE--------------------------------------------------------
re :
	@$(MAKE) fclean
	@$(MAKE) all

.PHONY : all clean fclean re