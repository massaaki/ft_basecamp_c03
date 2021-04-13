/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmassaak <mmassaak@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/09 03:11:18 by mmassaak          #+#    #+#             */
/*   Updated: 2021/04/13 14:35:58 by mmassaak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int			ft_strlen(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char		*ft_strstr(char *str, char *to_find)
{
	int		i;
	int		j;
	int		len_find;
	char	*pointer;

	i = 0;
	j = 0;
	len_find = ft_strlen(to_find);
	if (len_find == 0)
		return (str);
	while (str[i] != '\0')
	{
		if (str[i] == to_find[j])
		{
			if (j == 0)
				pointer = &str[i];
			j++;
		}
		else
			j = 0;
		if (j == len_find)
			return (pointer);
		i++;
	}
	return (0);
}
