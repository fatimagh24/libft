/* This function is a recreation of functiion main "calloc" that allocate memory
by take 2 parameters, number of the elements and the size of the element*/

#include "libft.h"

void	*ft_calloc(size_t num, size_t size)
{
	unsigned char		*ar;
	unsigned char		*arr;
	size_t				s;

	s = num * size;
	ar = malloc(s);
	if (ar == NULL)
		return (NULL);
	arr = ft_memset(ar, 0, s);
	return ((unsigned char *)arr);
}
/*
int main() {
    size_t num_elements = 5;
    size_t element_size = sizeof(int);

    // Allocate memory for an array of 5 integers, initialized to zero
    int *arr = (int *)ft_calloc(num_elements, element_size);

    // Check if memory allocation was successful
    if (arr == NULL) {
        perror("Memory allocation failed");
        return 1;
    }
    for(size_t j = 0; j < num_elements; j++)
    {
	    arr[j] = j+1;
    }

    // Print the contents of the array (should be all zeros)
    for (size_t i = 0; i < num_elements; i++) {
        printf("arr[%zu] = %d\n", i, arr[i]);
    }

    // Free the allocated memory
    free(arr);

    return 0;
}*/
