/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myousef <myousef@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 18:36:32 by myousef           #+#    #+#             */
/*   Updated: 2024/01/05 20:36:56 by myousef          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
 The strrchr() function is identical to strchr(),
	except it locates the last occurrence of c.
*/

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	while (i >= 0)
	{
		if (s[i] == (char)c)
			return ((char *)&s[i]);
		i--;
	}
	return (0);
}

// int main()
// {
//     const char string[] = "The string is wow";
//     int x = 'i';
//     const char *p;

//     p = ft_strrchr(string, x);
//     printf("String starting from %c is: %s\n", x, p);
//     return (0);

// }