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
t_list	*arr_int_to_lst(char *p);
int *parse_args(char **arr, int *size);
t_list *arr_to_list(int *arr, int size);
void    sa(t_stack **a);
void    sb(t_stack **b);
void    ss(t_stack **a, t_stack **b);
void    pa(t_stack **a, t_stack **b);
void    pb(t_stack **a, t_stack **b);
void    ra(t_stack **a);
void    rb(t_stack **b);
void    rr(t_stack **a, t_stack **b);
void    rra(t_stack **a);
void    rrb(t_stack **b);
void    rrr(t_stack **a, t_stack **b);

#endif
