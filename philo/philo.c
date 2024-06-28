#include "philo.h"

void convert_argv_to_int(int argc, char **argv, int *arr)
{
    (void) argc;
    (void) argv;
    (void) arr;
    return;
}

int main(int argc, char **argv)
{
    int size;
    int *arr;

    if (argc != 5 && argc != 6)
    {
        write(2, "Error: Wrong number of arguments\n", 33);
        return (1);
    }
    size = argc - 1;
    arr = (int *)malloc(sizeof(int) * (size));
    convert_argv_to_int(argc, argv, arr);    
    printf("Eu estou aqui\n");
}


// number_of_philosophers 
// time_to_die 
// time_to_eat 
// time_to_sleep
// [number_of_times_each_philosopher_must_eat]
