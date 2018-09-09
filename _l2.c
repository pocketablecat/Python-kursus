#include <stdio.h>
 
int main(void)
{
        int arv[4], abi, i, j;
        printf("Palun sisesta neli arvu!\n");
        for(i=0;i<4;i++)
        {
        scanf("%d",&arv[i]);
        }
        for(i=0;i<4;i++)
        {
                for(j=0;j<4;j++)
                {
                        if(arv[j]>arv[j+1])
                        {
                                abi=arv[j];
                                arv[j]=arv[j+1];
                                arv[j+1]=abi;
                        }
                }
        }
        printf("Arvud kasvavas j2rjekorras: \n");
        for(i=0;i<4;i++)
        {
                printf("\n %d", arv[i]);
        }

        return 0;
        
}
