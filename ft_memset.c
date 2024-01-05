/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myousef <myousef@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 18:33:05 by myousef           #+#    #+#             */
/*   Updated: 2024/01/05 20:22:16 by myousef          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t			i;
	unsigned char	*altb;

	i = 0;
	altb = (unsigned char *)b;
	while (len > i)
	{
		altb[i] = c;
		i++;
	}
	return (b);
}
//  pointer  dont change
// int main()
// {
//     char *str;
//     str = strdup("hello");
//     if (memset((void *)str, 'A', 5))
//     {
//         printf("%s\n", str);
//     }
// }