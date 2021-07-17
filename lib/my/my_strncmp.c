/*
** EPITECH PROJECT, 2020
** my_strncmp.c
** File description:
** strncmp function
*/

int my_is_pos(int value);

int my_strncmp(char const *s1, char const *s2, int n)
{
    int i;

    for (i = 0; s1[i] != '\0' && i < n; i += 1) {
        if (s1[i] != s2[i]) {
            return (my_is_pos(s1[i] - s2[i]));
        }
    }
    return (0);
}
