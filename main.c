/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alelomba <alelomba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/19 17:22:29 by alelomba          #+#    #+#             */
/*   Updated: 2023/04/12 17:36:25 by alelomba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
char *strnstr(const char *haystack, const char *needle, size_t len)
{
    size_t needle_len = strlen(needle);
    if (needle_len == 0)
        return (char *)haystack;

    while (*haystack != '\0' && len-- >= needle_len)
    {
        if (strncmp(haystack, needle, needle_len) == 0)
            return (char *)haystack;

        haystack++;
    }

    return NULL;
}
bool test_random(const char *haystack, const char *needle, size_t len)
{
    char *result_ft = ft_strnstr(haystack, needle, len);
    char *result_str = strnstr(haystack, needle, len);

    if ((result_ft == NULL && result_str == NULL) || (result_ft != NULL && result_str != NULL && strcmp(result_ft, result_str) == 0))
    {
        printf("PASSED: ft_strnstr(\"%s\", \"%s\", %ld) returned \"%s\"\n", haystack, needle, len, result_ft);
        return true;
    }
    else
    {
        printf("FAILED: ft_strnstr(\"%s\", \"%s\", %ld) returned \"%s\", expected \"%s\"\n", haystack, needle, len, result_ft, result_str);
        return false;
    }
}

char my_function(unsigned int index, char charac) {
    (void)index;
    if (charac >= 'a' && charac <= 'z')
		return (charac -= 32);
    return (charac);
}
void del_function(void *content)
{
	free(content); // Par exemple, on suppose que le contenu est alloué dynamiquement
}
#include "limits.h"
int	main(int ac, char **av)
{
	//char	**tab;
	//int		i;
	//char *memchr;
	//memchr = ft_memchr("Je suis chez moi test", 't', 20);
	//const char *haystacks[] = {"Hello world", "abcdefg", "abcabcabc", "", "Hello", "world"};
    //const char *needles[] = {"world", "def", "abc", "", "llo", "world"};

    //// Nombre total de tests
    //int num_tests = 10;

    //// Initialiser le générateur de nombres aléatoires
    //srand(42);

    //printf("Running %d random tests...\n", num_tests);

    //for (int i = 0; i < num_tests; i++)
    //{
    //    // Choix aléatoire d'un haystack et d'un needle
    //    const char *haystack = haystacks[rand() % (sizeof(haystacks) / sizeof(haystacks[0]))];
    //    const char *needle = needles[rand() % (sizeof(needles) / sizeof(needles[0]))];

    //    // Choix aléatoire d'une longueur pour le haystack
    //    size_t len = rand() % (strlen(haystack) + 1);

    //    // Exécution du test unitaire aléatoire
    //    test_random(haystack, needle, len);
    //}
    
	//printf("ToUpper: %c\n\n", ft_toupper('A'));
    //char *strjoin =  ft_strjoin("papa ", "maman");
	//printf("Strjoin: %s\n\n", strjoin);
    //free(strjoin);
	//printf("ft_memchr : %s\n\n", memchr);
    //char* modified_str = ft_strmapi("coucou les amis", &my_function);
    //printf("ft_strmapi: %s\n\n", modified_str);
    //free(modified_str);
    //ft_putstr_fd("Ceci est un test\n", 0);
    //ft_putnbr_fd(INT_MIN, 0);
    //printf("\n");
    //char *strtrim = ft_strtrim("      je suis un renard      ", " ");
    //printf("ft_strtrim : %s\n\n", strtrim);
    //free(strtrim);
	//if (ac == 3)
	//{
	//	i = 0;
	//	tab = ft_split(av[1], (char)av[2][0]);
	//	printf("ft_split output:\n");
	//	while (tab[i])
	//	{
	//		printf("word[%i]: %s\n", i, tab[i]);
    //        free(tab[i]);
	//		i++;
	//	}
    //    free(tab);
	//}
    // Création d'un élément de la liste
    //t_list *node1 = (t_list *)malloc(sizeof(t_list));
    //t_list *node2 = (t_list *)malloc(sizeof(t_list));
    //t_list *node3 = (t_list *)malloc(sizeof(t_list));

    //// Affectation des valeurs aux éléments de liste
    //node1->content = malloc(sizeof(int));
    //int v = 12;
    //*((int *)(node1->content)) = 12;
    //node1->next = node2;

    //node2->content = malloc(sizeof(int));
    //*((int *)(node2->content)) = 12;
    //node2->next = node3;

    //node3->content = malloc(sizeof(int));
    //*((int *)(node3->content)) = 12;
    //node3->next = NULL; // Le dernier élément de liste pointe vers NULL pour indiquer la fin de la liste

    //t_list *tmp;
    //int value;
    //tmp = node1;
    //value = 0;
    //while(tmp)
    //{
    //    value += *((int *)(tmp->content));
    //    tmp = tmp->next;
    //}
    //printf("Ma value: %d\n", value);
	return (0);
}
