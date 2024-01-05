/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myousef <myousef@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 18:34:25 by myousef           #+#    #+#             */
/*   Updated: 2024/01/05 20:20:50 by myousef          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	unsigned char	ch;

	ch = c;
	while (*str && (unsigned char)*str != ch)
		str++;
	if (ch == (unsigned char)*str)
		return ((char *)str);
	return (NULL);
}

// int main()
// {
//     const char string[] = "The string is wow";
//     int x = 's';
//     const char *p;

//     p = ft_strchr(string, x);
//     printf("String starting from %c is: %s\n", x, p);
//     return (0);

// }