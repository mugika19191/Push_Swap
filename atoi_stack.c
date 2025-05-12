/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atoi_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imugica- <imugica-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 18:39:09 by imugica-          #+#    #+#             */
/*   Updated: 2025/03/03 18:07:37 by imugica-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

long	st_atoi(const char *str, int *corr)
{
	long	res;
	int		i;
	int		neg;

	i = 0;
	res = 0;
	neg = 1;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			neg = -1;
		i++;
	}
	if (!(str[i] >= '0' && str[i] <= '9'))
	{
		*corr = 0;
		return (0);
	}
	while (str[i] >= '0' && str[i] <= '9')
		res = (res * 10) + (str[i++] - '0');
	if (str[i])
		*corr = 0;
	if (!(-2147483648 <= (res * neg) && (res * neg) <= 2147483647))
		*corr = 0;
	return (res * neg);
}
