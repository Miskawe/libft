/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myousef <myousef@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 18:36:03 by myousef           #+#    #+#             */
/*   Updated: 2024/01/05 20:35:10 by myousef          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include "libft.h"
/*
DESCRIPTION
     The strcmp() and strncmp() functions lexicographically 
	 compare the nullerminated strings s1 and s2.
     The strncmp() function compares not more than n characters.
	  Because strncmp() is designed for comparing strings rather than 
	  binary data,characters that appear after a `\0' 
	  character are not compared.
RETURN VALUES
     The strcmp() and strncmp() functions return an 
	 integer greater than, equal to, or less than 0, according as 
	 the string s1 is greater than,
     equal to, or less than the string s2.
	 The comparison is done using unsigned characters,
	 so that `\200' is greater than `\0'.
*/

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			i;
	unsigned char	*ps1;
	unsigned char	*ps2;

	ps1 = (unsigned char *)s1;
	ps2 = (unsigned char *)s2;
	i = 0;
	if (n == 0)
		return (0);
	while (ps1[i] && ps1[i] == ps2[i] && (i < n - 1))
		i++;
	return (ps1[i] - ps2[i]);
}

// int main()
//  {	
// 	char str_cmp1[12] = "ABCDEFAQrSt";
// 	char str_cmp2[12] = "ABBCDEQrSt";
// 	unsigned int ret;
//     ret=ft_strncmp(str_cmp1,str_cmp2,2);
// 		printf("%d\n",ret);
//     ret= strncmp(str_cmp1,str_cmp2,2);
// 		printf("%d",ret);
// 	return (0);
//  }