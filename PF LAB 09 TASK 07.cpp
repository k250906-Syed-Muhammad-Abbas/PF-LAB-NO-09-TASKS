#include <stdio.h>
int main() 
{
    int *ptr = NULL;

    if(ptr == NULL)
	 {
        printf("THE POINTER DOES NOT REFERENCE ANY VALID MEMORY\n");
    } 
	else 
	{
        printf("THE POINTER POINTS TO A VALID MEMORY LOCATION\n");
    }

    return 0;
}

