#include <stdlib.h>

int *ft_range(int start, int end)
{
	int size = end - start;
	if (size < 0)
		size = -size;
	size = size + 1;

	int *arr = (int *)malloc(size * sizeof(int));
	if (arr == NULL)
		return (NULL);

	int i = 0;
	if (start <= end)
	{
		while (start <= end)
		{
			arr[i] = start;
			start++;
			i++;
		}
	}
	else if (start > end)
	{
		while (start >= end)
		{
			arr[i] = start;
			start--;
			i++;
		}
	}
	return (arr);
}
