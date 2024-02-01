/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpm.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ameronen <ameronen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 17:47:15 by ameronen          #+#    #+#             */
/*   Updated: 2024/01/25 11:56:12 by ameronen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (n == 0)
		return (0);
	while (s1[i] == s2[i] && (i < n - 1) && s1[i])
		i++;
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

/*
 #include <stdio.h>
 #include <string.h>
 
 int main()
 {
    char str1[] = "HellO";
    char str2[] = "Hello";

    printf("Comparison result for \"%s\" and \"%s\" %d\n"
	 , str1, str2, ft_strncmp (str1, str2, 5));
 
    printf("%d\n", strcmp(str1, str2));
 
    return(0);
}
 */
