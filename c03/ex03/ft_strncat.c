/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ameronen <ameronen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 15:09:03 by ameronen          #+#    #+#             */
/*   Updated: 2024/01/24 17:41:40 by ameronen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	i2;

	i = 0;
	i2 = 0;
	while (dest[i] != '\0')
		i++;
	while (src[i2] != '\0' && i2 < nb)
	{
		dest[i] = src [i2];
		i++;
		i2++;
	}
	dest[i] = '\0';
	return (dest);
}
/*

#include <stdio.h>

int main(void) {
    char dest[50] = "Hello, ";
    char src[] = "World!";
    unsigned int nb = 3;

    printf("Before:\ndest: %s\nsrc: %s\n", dest, src);
    
    ft_strncat(dest, src, nb);

    printf("\nAfter:\ndest: %s\n", dest);
    return 0;
} */
