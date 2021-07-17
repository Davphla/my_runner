/*
** EPITECH PROJECT, 2020
** my_strcmp.c
** File description:
** strcmp function
*/

int my_is_pos(int value);

int my_strcmp(char const *s1, char const *s2)
{
    int i;

    for (i = 0; s1[i] != '\0' || s2[i] != '\0'; i += 1) {
        if (s1[i] != s2[i]) {
            return (my_is_pos(s1[i] - s2[i]));
        }
    }
    return (0);
}
