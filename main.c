#include <stdio.h>
#include <stdlib.h>
struct student
{
    char std_name[100];
    int std_ID,score;
    int std_date[3];
};
int main()
{
    int num ;
    printf("welcome \n Enter 1 if you need to use open hashing \n Enter 2 if you need colsed hashing\n  ");
    scanf("d%" ,num );
    return 0;
}
