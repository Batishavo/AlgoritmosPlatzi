#include "stdlib.h"
#include "stdio.h"
#include "string.h"

struct client
{
    char Name[50];
    char Id[10];
    float Credit;
    char Addres[100];
};

int main(int argc, char const *argv[])
{

    struct client cliente1 = {0};
    strcpy(cliente1.Name, "Camilo Valencia");
    strcpy(cliente1.Id, "000000001");
    cliente1.Credit = 1000000;
    strcpy(cliente1.Addres, "Calle siempre viva, ciudad gotica");

    printf("The client name is : %s \n", cliente1.Name);
    printf("The client Id is : %s \n", cliente1.Id);
    printf("The client credit is : %f \n", cliente1.Credit);
    printf("The client Addres is : %s \n", cliente1.Addres);

    return 0;
}