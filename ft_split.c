/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gblas-he <gblas-he@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/25 18:33:33 by gblas-he          #+#    #+#             */
/*   Updated: 2026/02/01 20:12:47 by gblas-he         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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

char	**ft_split(char const *s, char c)
{
	char	**str;
	int		i;
	int		j;
	int		word;
	int		start;
	int		end;

	word = word_count(s, c);
	str = ft_calloc(word + 1, sizeof(char *));
	if (!str)
		return (NULL);
	i = 0;
	j = 0;
	start = 0;
	while (j < word)
	{
		while (s[i] && s[i] == c)
			i++;
		start = i;
		while (s[i] != c)
			i++;
		end = i;
		i = 0;
		str[j] = ft_calloc(end - start + 1, sizeof(char));
		if (!str[j])
		{
			ft_free(str, j);
		}
		i = 0;
		while (start < end)
			str[j][i++] = s[start++];
		i = end;
		j++;
	}
	return (str);
}

/*int main (void)
{
	char **array_de_string;
	array_de_string = ft_split("  Hello   World   Welcome  ", ' ');

	int i = 0;
	while(array_de_string[i])
	{
		ft_putendl_fd(array_de_string[i++], 1);
	}
	printf("prueba main: %c\n", array_de_string[1][2]);
	ft_putendl_fd(array_de_string[1], 1);
	return (0);
}*/
/*printf("prueba main:%s", array_de_string[1][0]);
						//  -------|------- |  |
						//      puntero    STR CHAR
0 "Hello"
1 "World"
2 "Welcome"*/