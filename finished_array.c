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
	int j = 0;
	int i = 0;

	arr = ft_split(p, ' ');
	while(arr[j])
		j++;
	arr_int = parse_args(arr, &j);
	while(i < j)
	{
		printf("%d ", arr_int[i]);
		i++;
	}
	//*a = array_to_list(arr_int, j);
	return (arr_int);
}
