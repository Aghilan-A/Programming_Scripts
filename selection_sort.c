#include <stdio.h>

int main()
{   int n =5;
    char a[] = "hello";
 
    int index,small; 
     for(int i =0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    
    for(int i =0;i < n;i++)
    {
        small = a[i];
        
        for(int j =i+1;j <n;j++)
        {
            if (small > a[j])
            {
                small = a[j];
                index = j;
            }
        }
        if (a[i] > small)
        {
            a[index] = a[i];
            a[i] = small;
        }
        
     }
    
    for(int i =0;i<n;i++)
    {
        printf("%c ",a[i]);
    }
    return 0;
}
