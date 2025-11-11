/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nateremi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 13:41:29 by nateremi          #+#    #+#             */
/*   Updated: 2025/11/11 13:41:31 by nateremi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	len;
	char			*new_s;

	if (!s || !f)
		return (NULL);
	len = strlen(s);
	new_s = malloc(len + 1);
	if (!new_s)
		return (NULL);
	new_s[len--] = '\0';
	while (len >= 0)
	{
		new_s[len] = f(len, s[len]);
		len--;
	}
	return (new_s);
}
