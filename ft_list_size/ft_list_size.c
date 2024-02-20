
typedef struct s_list
{
	struct s_list *next;
	void *data;
} t_list;

int ft_list_size(t_list *begin_list)
{
	if (begin_list == 0)
		return (0);

	int size = 0;
	while ((*begin_list).next != 0)
	{
		begin_list = (*begin_list).next;
		size++;
	}

	return (size + 1);
}
