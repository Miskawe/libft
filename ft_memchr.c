/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myousef <myousef@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 18:30:56 by myousef           #+#    #+#             */
/*   Updated: 2024/01/05 20:22:44 by myousef          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *b, int c, size_t n)
{
	size_t			i;
	unsigned char	*s;
	unsigned char	ch;

	ch = c;
	s = (unsigned char *)b;
	i = 0;
	while (i < n)
	{
		if (*s == ch)
		{
			return ((char *)s);
		}
		else
			s++;
		i++;
	}
	return (NULL);
}

// int main()
// {
// const char str[] = "hehehehe.zehehehe";
//    const char ch = '.';
//    char *ret;
//    ret = memchr(str, ch, strlen(str));
//    printf("String after |%c| is - |%s|\n", ch, ret);
//  ret = ft_memchr(str, ch, ft_strlen(str));
//    printf("String after ftmem |%c| is - |%s|\n", ch, ret);
//    return(0);
// }