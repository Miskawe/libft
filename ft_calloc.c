/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myousef <myousef@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 18:29:13 by myousef           #+#    #+#             */
/*   Updated: 2024/01/06 12:59:45 by myousef          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	size_t	tlen;
	void	*ptr;

	tlen = count * size;
	ptr = malloc(tlen);
	if (ptr == NULL)
		return (NULL);
	ft_bzero(ptr, tlen);
	return (ptr);
}
	// if (size && (count > UINT32_MAX / size))
	// 	return (NULL);
/* int main(int ac, char *av[]) 
{
    if (ac < 3) 
	{
        printf("Usage: %s <num_elements> <element_size>\n", av[0]);
        return 1;
    }

    size_t num_elements = (size_t)ft_atoi(av[1]);
    size_t element_size = (size_t)ft_atoi(av[2]); 

    if (element_size != sizeof(int))
	 {
        printf("Element size must be sizeof(int)\n");
        return 1;
    }
    int *myArray = ft_calloc(num_elements,element_size);
    if (myArray == NULL) 
	{
        return 1;
    }
	int i = 0;
    while(i < num_elements)
	{
        myArray[i] = i;
		i++;
    }
	i = 0;
    while( i < num_elements)
	{
        printf("%d ", myArray[i]);
		i++;	
    }
    printf("\n");
    free(myArray);

    return 0;
} */