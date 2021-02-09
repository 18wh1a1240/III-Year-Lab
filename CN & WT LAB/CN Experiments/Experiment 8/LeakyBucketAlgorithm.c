#include <stdio.h>

int main()
{
    int bucketsize,outputrate,packet[25],i,j,iter,lines,total=0;
    printf("Enter the bucket size and output rate:");
    scanf("%d %d",&bucketsize,&outputrate);
    printf("Enter number of input lines:");
    scanf("%d",&lines);
    printf("Enter input rate for %d lines\n",lines);
    for(i=0;i<lines;i++) {
        scanf("%d",&packet[i]);
    }
    printf("Enter no of iterations:");
    scanf("%d",&iter);
    for(i=0;i<iter;i++) {
        printf("Iteration %d\n",i+1);
        for(j=0;j<lines;j++) {
            total = total + packet[j];
            if(total < bucketsize) {
                printf("Input from line %d with rate %d is added to the bucket\n Current bucket size is %d\n",j+1,packet[j],total);
            }
            else {
                total = total - packet[j];
                 printf("Input from line %d with rate %d is removed from the bucket\n Current bucket size is %d\n",j+1,packet[j],total);

            }
        }
        if(total <= outputrate) {
            printf("the packet sent to output line at rate %d",total);
            total = 0;
            printf("the Current bucket size is %d",total);
        }
        else {
            total = total - outputrate;
            printf("\n packets sent to the output line at rate %d\n current bucket size is %d\n",outputrate,total);
        }
    }
    return 0;
}
