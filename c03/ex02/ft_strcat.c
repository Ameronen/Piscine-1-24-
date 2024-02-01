/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ameronen <ameronen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 14:22:35 by ameronen          #+#    #+#             */
/*   Updated: 2024/01/24 17:39:58 by ameronen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strcat(char *dest, char *src)
{
	int	d;
	int	s;

	d = 0;
	s = 0;
	while (dest[d] != '\0')
	{
		d++;
	}
	while (src[s] != '\0')
	{
		dest[d] = src[s];
		d++;
		s++;
	}
	dest[d] = '\0';
	return (dest);
}
/*
 #include <stdio.h>

 int main() {
     char dest[50] = "Hello, ";
     char src[] = "World!";

     printf("Before:\n");
     printf("dest: %s\n", dest);
     printf("src: %s\n", src);

     ft_strcat(dest, src);

     printf("\nAfter:\n");
     printf("dest: %s\n", dest);

     return 0;
 } */
