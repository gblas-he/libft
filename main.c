/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gblas-he <gblas-he@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/02 17:16:33 by gblas-he          #+#    #+#             */
/*   Updated: 2026/02/02 19:39:12 by gblas-he         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    test_isalpha(void)
{
    char c = 'A';
    if (ft_isalpha(c))
        printf("%c es una letra\n", c);
}

void	test_atoi(void)
{
    char *a = "   -12345";
    int b;

	b = ft_atoi(a);
    printf("%d\n", b);
	b = atoi(a);
    printf("%d\n", b);
}

void    test_isdigit(void)
{
    char c = '5';
    if (ft_isdigit(c))
        printf("%c es un dígito\n", c);
}

void    test_isalnum(void)
{
    char c = '5';
    if (ft_isalnum(c))
        printf("%c es alfanumérico\n", c);
}

void    test_isascii(void)
{
    char c = 127;
    if (ft_isascii(c))
        printf("%d es un carácter ASCII\n", c);
}

void	test_strlen(void)
{
	char *str = "Hola";
    printf("ft_strlen: %zu\n", ft_strlen(str));
}

void    test_calloc(void)
{
    char *a;
    char *b;
    size_t i = 0;
    size_t j = 0;

    size_t n = 2, s = 3;

    a = ft_calloc(n, s);
    while (i < n*s)
    {
        printf("%d", a[i]);
        i++;
    }
    printf("\ncalloc:");
    b = calloc(n, s);
    while (j < n*s)
    {
        printf("%d", b[j]);
        j++;
    }
    free(a);
    free(b);
}

void test_itoa(void)
{
	printf("%s", ft_itoa(0));
}

void test_lstadd_back(void) {
    t_list *list = NULL;
    t_list *temp;
    int a = 1, b = 2, c = 3;
    t_list *node1 = ft_lstnew(&a);
    t_list *node2 = ft_lstnew(&b);
    t_list *node3 = ft_lstnew(&c);


    // Añadir nodos al frente
    ft_lstadd_back(&list, node1);
    ft_lstadd_back(&list, node2);
    ft_lstadd_back(&list, node3);

    // Imprimir la lista
    temp = list;
    while (temp)
    {
        printf("%d", *((int *)temp->content));
        if (temp->next)
            printf(" -> ");
        temp = temp->next;
    }
    printf(" -> NULL\n");

    // Liberar memoria
    while (list)
    {
        temp = list->next;
        free(list);
        list = temp;
    }
}

void test_lstadd_from(void)
{
    t_list *lista = NULL;
    t_list *temp;

    // Añadir nodos al frente
    ft_lstadd_front(&lista, ft_lstnew("A"));
    ft_lstadd_front(&lista, ft_lstnew("B"));
    ft_lstadd_front(&lista, ft_lstnew("C"));

    // Imprimir la lista
    temp = lista;
    while (temp)
    {
        printf("%s", (char *)temp->content);
        if (temp->next)
            printf(" -> ");
        temp = temp->next;
    }
    printf(" -> NULL\n");

    // Liberar memoria
    while (lista)
    {
        temp = lista->next;
        free(lista);
        lista = temp;
    }
}

void test_lstclear(void)
{
    t_list *list = NULL;
    t_list *temp;

    // Añadir nodos al frente
    ft_lstadd_back(&list, ft_lstnew("A"));
    ft_lstadd_back(&list, ft_lstnew("B"));
    ft_lstadd_back(&list, ft_lstnew("C"));

    // Imprimir la lista
    temp = list;
    while (temp)
    {
        printf("%s", (char *)temp->content);
        if (temp->next)
            printf(" -> ");
        temp = temp->next;
    }
    printf(" -> NULL\n");

    // Liberar memoria
    while (list)
    {
        temp = list->next;
        free(list);
        list = temp;
    }
}

void test_lstlast(void)
{
    t_list *lista = NULL;
    t_list *last = NULL;
    
    ft_lstadd_front(&lista, ft_lstnew("A"));
    ft_lstadd_front(&lista, ft_lstnew("B"));
    ft_lstadd_front(&lista, ft_lstnew("C"));
    last = ft_lstlast(lista);
    if (last)
        printf("%s\n", (char *) last->content);
}

void lstmap(void) {
    t_list *list = NULL;
    t_list *temp;
    int a = 1, b = 2, c = 3;
    t_list *node1 = ft_lstnew(&a);
    t_list *node2 = ft_lstnew(&b);
    t_list *node3 = ft_lstnew(&c);


    // Añadir nodos al frente
    ft_lstadd_back(&list, node1);
    ft_lstadd_back(&list, node2);
    ft_lstadd_back(&list, node3);

    // Imprimir la lista
    temp = list;
    while (temp)
    {
        printf("%d", *((int *)temp->content));
        if (temp->next)
            printf(" -> ");
        temp = temp->next;
    }
    printf(" -> NULL\n");

    // Liberar memoria
    while (list)
    {
        temp = list->next;
        free(list);
        list = temp;
    }
}

void test_lstnew(void)
{
	t_list *node;
	char content[] = "hola mundo";

	node = ft_lstnew(content);
	printf("%s\n", (char *)node->content);
	free(node);
}

void test_lst_size(void)
{
	t_list *lista = NULL;
	int count = 0;

	ft_lstadd_front(&lista, ft_lstnew("A"));
	ft_lstadd_front(&lista, ft_lstnew("B"));
	ft_lstadd_front(&lista, ft_lstnew("C"));
	count = ft_lstsize(lista);
	printf("%d" , count);
}

void test_memchr(void)
{
	char *str = "apateros a tu apazto apatos";
	printf("%s", (char *)ft_memchr(str, 'z', 19));
}

void test_memcmp(void)
{
	int	b;
	const char	s1[] = "hola";
	char	s2[] = "holaa";

	b = ft_memcmp(s1, s2, 3);
	printf("%d", b);
}

void test_putnbr_fd(void)
{
	ft_putnbr_fd(2147483647, 1);
}

void test_putstr_fd(void)
{
	char	str[] = "Hello World";
	ft_putstr_fd(str, 2);
}

void test_split(void)
{
	char **array_de_string;
	array_de_string = ft_split("  Hello   World   Welcome  ", ' ');

	int i = 0;
	while(array_de_string[i])
	{
		ft_putendl_fd(array_de_string[i++], 1);
	}
	printf("prueba main: %c\n", array_de_string[2][2]);
	ft_putendl_fd(array_de_string[1], 1);

/*printf("prueba main:%s", array_de_string[1][0]);
						//  -------|------- |  |
						//      puntero    STR CHAR
0 "Hello"
1 "World"
2 "Welcome"*/
}

void test_trchr(void) {
	char *str = "apateros a tu apazto apatos" ;
	printf("%s", ft_strchr(str, 'z'));
}

void test_strdup(void)
{
	printf("%s", ft_strdup("hola"));
	printf("%s\n", strdup("holo"));
}

void to_upper_even(unsigned int i, char *c)
{
    unsigned int	i;

    (void)i; // no usamos el índice
    if (*c >= 'a' && *c <= 'z')
        *c = *c - ('a' - 'A');
}

void test_striteri(void)
{   
	char s[] = "hello";
    ft_striteri(s, to_upper_even);
	printf("%s\n", s);
}

void test_strjoin(void)
{
	printf("%s", ft_strjoin("Hellohello", "World"));
}

void test_strlcat(void)
{
	char dest [] = "hola Mundo";
	char src [] = "welcome";
	size_t size = 12;

	printf("%zu\n", ft_strlcat(dest, src, size));
	//printf("%d", strlcat(dest, src, size));
	printf("%s", dest);
}

void test_strlcpy(void)
{
	size_t n;
	char dest [5];
	char src [] = "hola mundo";


	n = 2;
	ft_strlcpy(dest, src, n);
	printf("%s\n",dest);
	strlcpy(dest, src, n);
	printf("%s",dest);
}

char to_upper_even(unsigned int i, char c)
{
    (void) i;
    if (c >= 'a' && c <= 'z')
        return c - ('a' - 'A');
    return c;
}

void test_strmapi(void)
{
    char s[] = "hello";
	char *res = ft_strmapi(s, to_upper_even);
    printf("%s\n", res);
    free(res);
}

void test_strnstr(void)
{
	char str[] = "hola que tal";
	char to_find [] = "el";
	printf("%s\n", ft_strnstr(str, to_find, 10));
	printf("%s", strnstr(str, to_find, 10));
}

void test_strtrim() {
	char *str = "ztztapateros a tu apazto apatosztztz" ;
	printf("%s", ft_strtrim(str, "t"));
}

void test_substr(void)
{
	printf("%s\n", ft_substr("Hello World", 13, 15));
	printf("%s", ft_substr("Hello World", 13, 15));
}

int	main(void)
{
    test_isalpha();
	return 0;
}