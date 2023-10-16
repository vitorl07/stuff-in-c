#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#define Size 50

int main(int argc, char const *argv[])
{
    time_t t;

    struct tm *tmp ;
    char my_time[Size];
    time ( &t );

    tmp = localtime( &t );

    strftime (my_time, sizeof(my_time), "%x - %I:%M%p", tmp);

    printf("Meu tempo e data é: %s\n", my_time);
    return 0;
}
