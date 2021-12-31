#include<stdio.h>
#include<stdlib.h>
int main ()
{
    int a,length,arr[]={12,74,8262,763,325,2,4,3,2,2,2,34,5,45,45,54,6,5,456,6,56,7,7,987,565,7,5,67,767,7,55,657,65,6546,6,5546,55,6,6,65};
    length=(sizeof arr)/(sizeof arr[0]);
    a=qsort(length);
    printf ("%d",length);
}