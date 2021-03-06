/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaroste <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 13:16:37 by anaroste          #+#    #+#             */
/*   Updated: 2018/03/12 13:52:31 by anaroste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t		i;
	size_t		count;

	if (s == NULL)
		return (0);
	i = 0;
	count = 0;
	while (s[i++] != '\0')
		count++;
	return (count);
}
