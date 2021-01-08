#include<stdio.h>

int main(){
    int frames, i, d = 0;
    char data[30];

    printf("enter number of characters : ");
    scanf("%d",&frames);

    printf("enter characters: ");
    scanf("%s",data);

    printf("\noriginal data : ");
    printf("%s",data);

    printf("\nafter character stuffing : dlestx");
    for(i=0;i<frames;i++){
        printf("%c",data[i]);
        if(data[i] == 'd'){
            d++;
        } else if(data[i] == 'l' && d == 1){
            d++;
        } else if(data[i] == 'e' && d == 2){
            printf("dle");
            d = 0;
        } else{
            d = 0;
        }
    }

    printf("dleetx\n");
    printf("Recived data after destuffing : ");
    printf("%s\n",data);

return 0;
}
