#include<stdio.h>
 int main(){
   int n, count=0, databits[50] , stuffData[50], i, j = 0;

   printf("Enter number of frames: ");
   scanf("%d", &n);
   printf("Enter DataBits:\n");

   for(i = 0;i < n; i++){
     scanf("%d", &databits[i]);
    }

   for(i = 0; i < n; i++){
     if(databits[i] == 1){
         count++;
       } else{
          count = 0;
       }

     stuffData[j] = databits[i];
     j++;

     if(count == 5 && i != n - 1){
           count = 0;
           stuffData[j] = 0;
            j++;
        }
    }

    printf("\nAT SENDER\n");
    printf("After  Bit stuffing : 01111110 ");
    for(i = 0; i < j; i++){
        printf("%d", stuffData[i]);
    }

    printf(" 01111110");
    printf("\nAT RECEIVER");
    printf("\nData received is: 01111110 ");

    for(i = 0; i < j; i++){
        printf("%d",stuffData[i]);
    }

    printf(" 01111110");
    printf("\nAfter De-Stuffing : ");
    count = 0;

    for(i = 0; i < j; i++){
        if(stuffData[i] == 1){
        count++;
        } else{
            count = 0;
        }
        printf("%d", stuffData[i]);

        if(count == 5){
            i++;
        }
    }

    return 0;
}
