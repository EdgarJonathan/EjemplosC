#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void asignacionMemoria();
void challenge();
int* createArray(int size);

int main()
{
    //asignacionMemoria();
    challenge();
    return 0;
}

void challenge()
{
    int s =8;
    int i;
    int*arr = createArray(s);

    for( i=0;i<s;i++)
    {
        *(arr+i)=i+2;
    }

    for(i=0;i<s;i++)
    {
       printf("arr[%d]: %d\n",i,*(arr+i));
    }

}

int* createArray(int size)
{

    int arr[size];
    int* p =&arr;

    return p;

}


void asignacionMemoria()
{

    char name[100];
    char *description;

    strcpy(name, "Zara Ali");

    /* allocate memory dynamically */
    description = malloc(  sizeof(char) );

    if( description == NULL ) {
       fprintf(stderr, "Error - unable to allocate required memory\n");
    }
    else {
       strcpy( description, "Zara ali a DPS student in class 10th");
    }

    printf("Name = %s\n", name );
    printf("Description: %s\n", description );


}

