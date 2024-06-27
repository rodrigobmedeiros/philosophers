#include "philo.h"

void    verify_input_numbers_type(int num, char *argv, int *arr)
{
    char *input;

    if (!(*argv))
    {
        ft_putstr_fd("Error\n", 2);
        exit(1);
    }
    input = ft_itoa(num);
    if (ft_strncmp(argv, input, ft_strlen(argv)))
    {
        free(input);
        if (arr)
            free(arr);
        ft_putstr_fd("Error\n", 2);
        exit(1);
    }
    free(input);
}