#include "philo.h"

int main(int argc, char **argv)
{
    (void) argv;

    if (argc != 5 && argc != 6)
    {
        // beleza numero errado de inputs ja mata o programa
        printf("Error: Wrong number of arguments\n");
        return (1);
    }
    // aqui posso criar a estrutura e virificar se os valores sao validos
    
    printf("Eu estou aqui\n");
}


// number_of_philosophers 
// time_to_die 
// time_to_eat 
// time_to_sleep
// [number_of_times_each_philosopher_must_eat]
