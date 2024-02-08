#include <stdio.h>
#include <conio.h>

extern int size;
extern int key;
extern int key_index;

void search_binary(int array[])
{
    int min=0,max=size-1,mid;


    while(max-min>=0)
    {
		if((max-min)%2!=0)
		{
			if(array[max]==key)
			{
				key_index=max;
				printf("\nthe entered number is at index number %d",key_index);
				break;
			}
			else
			{
				max=max-1;
				continue;
			}
		}
		else
		{
			mid=(min+max)/2;
			if(array[mid]==key)
			{
				key_index=mid;
				printf("\nthe entered number is at index number %d",key_index);
				break;
			}
			else if(max-min==0)
			{
				printf("\nentered number is not in array.");
				break;
			}
			else if(array[mid]>key)
			{
				max=mid;
			}
			else
			{
				min=mid;
			}
		}
    }
}