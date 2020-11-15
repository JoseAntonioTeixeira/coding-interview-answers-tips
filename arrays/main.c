#include <stdio.h>

/*
***Arrays***
*/
void print_vector(int v[], int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("%d ",v[i]);
    }
    printf("\n");
}

int main()
{
    int v[10];                          //10 element array not initialized
    int v1[3]={1,2,3};                  //3 element array initialized
    int v2[10]={1,2,3};                 //3 element array with first 3 elements initialized and the following will be 0
    int v3[]={1,2,3};                   //3 element array initialized
    //int v[]                           //compilation error, size of array not specified

    print_vector(v,10);
    print_vector(v1,3);
    print_vector(v2,10);
    print_vector(v3,3);
    return 0;
}