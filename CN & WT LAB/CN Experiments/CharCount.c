#include <stdio.h>
#include<string.h>

int main() {
    int NoOfFrames;
    char Frames[50][50];
    int h[10];
    
    printf("Enter the number of frames : ");
    scanf("%d",&NoOfFrames);
    
    for(int i = 1; i <= NoOfFrames; i++){
        printf("Frame %d :", i);
        scanf("%s", Frames[i]);
    }

    for(int i = 1;i <= NoOfFrames; i++){
        h[i] = strlen(Frames[i]) + 1;
    }

    printf("AT THE SENDER");
    printf("\nData as frames:\n");

    for(int i = 1; i <= NoOfFrames; i++){
        h[i] = strlen(Frames[i]);
        printf("Frame %d : %d%s\n", i, h[i] + 1, Frames[i]);
    }

    printf("Data transmitted:");
    for(int i = 1; i <= NoOfFrames; i++){
        printf("%d%s", h[i] + 1, Frames[i]);
    }

    printf("\nAT THE RECEIVER\n");
    printf("The data received.\n");
    printf("The data after removing count char: ");
    for(int i = 1; i <= NoOfFrames; i++){
        printf("%s", Frames[i]);
    }
    printf("\nThe data in the frame form: \n");
    for(int i = 1; i <= NoOfFrames; i++){
        printf("Frame%d: %s\n", i, Frames[i]);
    }
   return 0;
}