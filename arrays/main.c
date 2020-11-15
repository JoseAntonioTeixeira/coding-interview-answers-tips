#include <stdio.h>

#define three 3                        //preprocessor directive, the value gets attributed before compilation begins

const int ten=10;                      //actual variables that are stored in the memory

/*
***Arrays***
*/
void print_array(int v[], int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("%d ",v[i]);
    }
    printf("\n");
}

void print_matrix(char v[][2])    //void print_matrix(int v[size1][size2]) 
{
    int i,j;
    for(i=0;i<3;i++)
    {
        for(j=0;j<2;j++)
            printf("%c",v[i][j]);
        printf("\n");  
    }
}

int main()
{
    int v[ten];                     //10 element array not initialized
    int v1[three]={1,2,3};          //3 element array initialized
    int v2[three]={1,2,3};          //3 element array with first 3 elements initialized and the following will be 0
    int v3[]={1,2,3};               //3 element array initialized
    //int v[]                       //compilation error, size of array not specified

    char c[3][2]={{'a','b'},{'c','d'},{'e','f'}};           //matrix 3,2 initialized

    print_array(v,ten);
    print_array(v1,three);
    print_array(v2,ten);
    print_array(v3,three);
    print_matrix(c);
    return 0;
}