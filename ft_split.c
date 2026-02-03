/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gblas-he <gblas-he@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/25 18:33:33 by gblas-he          #+#    #+#             */
/*   Updated: 2026/02/03 13:32:29 by gblas-he         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Devuelve la cantidad de palabras en una cadena
static int	word_count(const char *s, char c)
{
	int	i;
	int	trg;
	int	word;

	i = 0;
	trg = 0;
	word = 0;
	while (s[i])
	{
		if (s[i] != c && trg == 0)
		{
			trg = 1;
			word++;
		}
		else if (s[i] == c)
			trg = 0;
		i++;
	}
	return (word);
}

// Libera memoria asignada y evita fugas
static void	*ft_free(char **str, int j)
{
	while (j >= 0)
	{
		free(str[j]);
		j--;
	}
	free(str);
	return (NULL);
}

// Divide una cadena en subcadenas usando un delimitador
char	**ft_split(char const *s, char c)
{
	char	**str;
	int		i;
	int		j;
	int		start;

	if (!s)
		return (NULL);
	str = ft_calloc(word_count(s, c) + 1, sizeof(char *));
	if (!str)
		return (NULL);
	i = -1;
	j = 0;
	while (++i < word_count(s, c))
	{
		while (s[j] && s[j] == c)
			j++;
		start = j;
		while (s[j] && s[j] != c)
			j++;
		str[i] = ft_calloc(j - start + 1, sizeof(char));
		if (!str[i])
			return (ft_free(str, i));
		ft_strlcpy(str[i], s + start, j - start + 1);
	}
	return (str);
}
