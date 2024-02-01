/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ameronen <ameronen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 15:57:36 by ameronen          #+#    #+#             */
/*   Updated: 2024/01/25 11:50:23 by ameronen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	unsigned int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0')
	{
		i++;
	}
	{
		return ((unsigned char) s1[i] - (unsigned char) s2[i]);
	}
}
/*
#include <stdio.h>
#include <string.h>

 int main(void)
 {
     char str1[] = "HellO";
     char str2[] = "Hello";

     printf("Comparison \"%s\" and \"%s\": %d\n", str1, str2, ft_strcmp
	 (str1, str2));

	 printf("%d\n", strcmp(str1, str2));
    
    return(0);
}*/
