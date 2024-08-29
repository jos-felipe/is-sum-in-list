/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   new_function.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josfelip <josfelip@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/25 16:11:26 by josfelip          #+#    #+#             */
/*   Updated: 2024/08/29 11:14:49 by josfelip         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/newproject.h"
#include <stdio.h>

#define LEN 5

void	new_function(void)
{
	int	L[LEN] = {1, 2, 3, 4, 5};
	int x = 10;
	int i;
	int j;
	int found;

	found = 0;
	i = 0;
	while (i < LEN - 1)
	{
		j = 1;
		while (j < LEN - 1)
		{
			if (L[i] + L[j] == x)
			{
				printf("Found: L[%d] = %d and L[%d] = %d\n", i, L[i], j, L[j]);
				found = 1;
			}
			j++;
		}
		i++;
	}
	if (found == 0)
		printf("There is no two numbers in the list that add up %d\n", x);
}