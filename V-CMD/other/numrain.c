#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>
int main()
{
    int count ;
    int i , j ;
    char buffer[50][50] = {0} ;
    system("color 0A");
    srand(time(0));
    for(count = 0 ; count < 3000 ; count++)
    {
        for(i = 0 ; i < 10 ; i++)
        {
            for(j = 0 ; j < rand()%50 ; j++)
            {
                buffer[i][j] = rand() % 128 ;
                printf("%c\t",buffer[i][j]);
                buffer[i][j] = 0 ;
            }
            putchar('\n');
            Sleep(40);
        }
    }
    return 0;
}
