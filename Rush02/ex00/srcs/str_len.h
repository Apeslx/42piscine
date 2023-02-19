/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_len.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpostica <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 21:12:19 by tpostica          #+#    #+#             */
/*   Updated: 2023/02/18 22:08:14 by tpostica         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int str_len(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] < '0') || (str[i] > '9'))
			return (0);
		i++;
	}
	return (i);
}