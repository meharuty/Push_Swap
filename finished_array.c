#include "push_swap.h"

char *finished_array(int argc, char **argv)
{
	char *arr;
	char *tmp;
	int i;
	int j;
	i = argc;
	j = 1;
	
	arr = ft_strdup(argv[j]);
	j++;
	while (j < i)
	{
		tmp = ft_strjoin(arr, " ");
		free(arr);
		arr = ft_strjoin(tmp, argv[j]);
		free(tmp);
		j++;
	}
	return (arr);
}

int	*arr_int(char *p)
{
	char **arr;
	int *arr_int;
	n_list *a;
	int j = 0;
	//int i = 0;

	arr = ft_split(p, ' ');
	while(arr[j])
		j++;
	arr_int = parse_args(arr, &j);
	a = array_to_list(arr_int, j);
	return (arr_int);
}

n_list	*arr_to_list(int *arr, int size)
{
	n_list *list;
	n_list *node;
	int	i;
	
	i = 0;
	while (i < size)
	{
		node = ft_lstnew(&arr[i]);
		if (!node)
			return NULL;
		ft_lstadd_back(&list, node);
		i++;
	}
	return (list);
}
