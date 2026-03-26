#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include <stdint.h>
#include <limits.h>
#include <unistd.h>
#include  "./libft/libft.h"


typedef struct s_stack
{
	int				*value;	
	struct t_list	*next;
} t_stack;

// char	**ft_split(char const *s, char c);
char *finished_array(int argc, char **argv);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strdup(const char *s1);
int abo(const char *str, long *res);
void error_checker(char *ptr);
void free_all(char **ptr);
int check_one_arg (char *ptr);
int	*arr_int(char *p);
int *parse_args(char **arr, int *size);

#endif
