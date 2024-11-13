/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strpbrk.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfabbian <lfabbian@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/18 10:24:44 by lfabbian          #+#    #+#             */
/*   Updated: 2024/11/13 07:15:52 by fnicolau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strpbrk(const char *s1, const char *s2)
{
	int i;
	int	j;

	if (!s1 || !s2)
		return (NULL);

	i = 0;
	while (s1[i])
	{
		j = 0;
		while (s2[j])
		{
			if (s2[j] == s1[i])
				return ((char *)&s1[i]);
			j++;
		}
		i++;
	}
	return (NULL);
}

int main(void)
{
    const char *str1 = "Hello, World!";
    const char *str2 = ",";

    char *result = ft_strpbrk(str1, str2);

    if (result)
        printf("First matching character: '%c' at position %li\n", *result, result - str1);
    else
        printf("No matching characters found.\n");

    return 0;
}

