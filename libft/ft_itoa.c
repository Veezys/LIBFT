/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: breadyma <breadyma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/08 15:00:28 by breadyma          #+#    #+#             */
/*   Updated: 2021/10/16 17:54:25 by breadyma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_size(int nb, int i)
{
	while (nb > 9 || nb < -9)
	{
		nb = nb / 10;
		i++;
	}
	return (i);
}

char	*ft_putnum(int i, int f, int n, char *str)
{
	while (i >= f)
	{
		str[i] = (n % 10) + '0';
		n = n / 10;
		i--;
	}
	return (str);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		i;
	int		f;

	f = 0;
	i = 0;
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	if (n < 0)
	{
		n = -n;
		f = 1;
		i++;
	}
	i = ft_size(n, i);
	str = malloc(i + 2);
	if (str == 0)
		return (0);
	str[i + 1] = '\0';
	str = ft_putnum(i, f, n, str);
	if (f == 1)
		str[0] = '-';
	return (str);
}
