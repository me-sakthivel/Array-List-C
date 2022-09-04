#include<stdio.h>
#include<stdlib.h>

void main()
{
    int *ptr,n,i;
    //condition
    char ch;

    //extend array

    int n1;
    // index

    int n0;


    printf("Enter the numbers in array:");
    scanf("%d",&n);
    ptr = calloc(n,sizeof(int));
    for(i=0;i<n;i++)
    {
        scanf("%d",ptr+i);
    }

    printf("\nEnter 'I' for insertion\n Enter 'D' deletion");
    scanf("\n%c",&ch);


    if(ch == 'I' || ch == 'i')
    {
        printf("\n Enter element:");
        scanf("%d",&n1);
        ptr = realloc(ptr,1);
        printf("\nEnter the index:");
        scanf("%d",&n0);
        inserts(ptr ,n1, n0 , n);
       
        /* ptr-pointer
        n-number of elemrnts in array
        n0 - index of insertion point
        n1 -element to be inserted
        */

    }

    if(ch == 'D' ||ch == 'd')
    {
        printf("\n Enter which element you want to delete:");
        scanf("%d",&n0);
        deletes(ptr,n,n0);
        /* ptr-pointer
        n- number of elements in array
        n0 - element to be deleted */ 
    }


}


void inserts(int *ptr,int e,int index,int n)
{
    /* ptr - pointer
    e - element to be inserted
    index - index to be inserted
    n- number of elements in array
    */

    int i,swap,temp;
    for(i=index;i<=((n+1)-index);i++)
    {
        swap = *(ptr+i);
        *(ptr+i) = e;
        e = swap;     
    }

    for (i=0;i<n+1;i++)
    {
        printf("%d \n",*(ptr+i));
    }
    
}

void deletes(int *ptr, int n , int n0)
{
    /* ptr-pointer
    n -number of elements in array
    n0 - element to be deleted
    */

   int i;

   for (i=0;i<n;i++)
   {
    if(*(ptr+i) == n0)
    {
        for (int j=i;;j++)
        {
            *(ptr+j) = *(ptr+j+1);

            if(j == (n-1))
            {
                break;
            }
        }

    }

    else
    continue;
   }

   for(i=0;i<(n-1);i++)
   {
    printf("The index of %d is :%d\n",i,*(ptr+i ));
   }
}
