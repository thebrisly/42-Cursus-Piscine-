/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   errors.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfabbian <lfabbian@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/03 16:03:25 by lfabbian          #+#    #+#             */
/*   Updated: 2023/01/07 19:15:49 by lfabbian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

void ft_read_fd(fd)
{
	int	fd;

	fd = open(fd, O_RDONLY)
	if (fd == -1)
        printf("Error with file descriptor n");
    return 0;
}

/*int	init_errors(void *mlx, void *window)
{
	if (mlx == NULL)
	{
		free(mlx);
		return (MLX_ERROR);
	}
	else if (window == NULL)
		return (MLX_ERROR);
	return(0);
}*/
