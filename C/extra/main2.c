#include<stdio.h>
#include<conio.h>

int size;
int key;
int key_index;

void sort_bubble(int s,int a[]);
void search_binary(int ar[]);

void main()
{
	printf("enter size of array:");
    scanf("%d",&size);

    int array[size];

    for(int i=0;i<size;i++)
    {
        printf("enter %d element:",i+1);
        scanf("%d",&array[i]);
    }

    sort_bubble(size,array);

    printf("\n\nhere is the sorted array:-");
    for(int i=0;i<size;i++)
    {
        printf("\n%d element = %d",i+1,array[i]);
    }
    
    printf("\n\nenter the integer number you want to search in array:");
    scanf("%d",&key);
    search_binary(array);
	
	getch();
}