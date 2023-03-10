/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raalonso <raalonso@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 14:17:45 by raalonso          #+#    #+#             */
/*   Updated: 2023/02/13 20:31:36 by raalonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	c;
	int	c2;

	c = 0;
	c2 = 0;
	if (to_find[c] == '\0')
		return (str);
	while (str[c] != '\0')
	{
		while ((to_find[c2] == str[c]) && (str[c] != '\0'))
		{
			c2++;
			c++;
			if (to_find[c2] == '\0')
				return (&str[c - c2]);
		}
		c++;
	}
	return (0);
}

/*int main(void)
{
	char *str = "hola me llamo raul";
	char *to_find = "me";
	ft_strstr(str, to_find);
	return (0);
}*/
