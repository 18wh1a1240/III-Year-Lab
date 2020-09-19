#include <stdio.h>
#include <string.h>

int main() {
    char str[50], poly[50], str1[50], poly1[50], temp[50], quot[50], rem[50];
    int n, p;

    printf("enter message: ");
    scanf("%s", str);

    printf("enter polynomial: ");
    scanf("%s", poly);

    n = strlen(str);
    p = strlen(poly);

    strcpy(str1, str);
    strcpy(poly1, poly);

    for(int i = 0; i < p - 1; i++) {
        str[n + i] = '0';
    }

    printf("String after zeroes:\n%s\n", str);

    for(int i = 0; i < p; i++) {
        temp[i] = str[i];
    }

    for(int i = 0; i < n; i++) {
        quot[i] = temp[0];

        if(quot[i] == '0') {
            for(int j = 0; j < p; j++) {
                poly[j] = '0';
            }
        } else {
            for(int j = 0; j < p; j++) {
                poly[j] = poly1[j];
            }
        }

        for(int j = p - 1; j > 0; j--) {
            if(temp[j] == poly[j]) {
                rem[j - 1] = '0';
            } else {
                rem[j - 1] = '1';
            }
        }
        rem[p - 1] = str[i + p];
        strcpy(temp, rem);
    }

    strcpy(rem, temp);
    printf("AT SENDER\nMessage is: ");
    for(int i = 0; i < n; i++) {
        printf("%c", quot[i]);
    }

    printf("\nCRC is: ");
    for(int i = 0; i < p - 1; i++) {
        printf("%c", rem[i]);
    }

    printf("\nData send by sender Code word is: ");
    for(int i = 0; i < n; i++) {
        printf("%c", str[i]);
    }
    for(int i = 0; i < p - 1; i++) {
        printf("%c", rem[i]);
    }
    printf("\n");

    strcat(str1, rem);
    printf("AT RECEIVER\n");

    for(int i = 0; i < p; i++) {
        temp[i] = str1[i];
    }

    int a[50], b[50];
    for(int i = 0; i < n; i++) {
        a[i] = temp[0];
        if(a[i] == '0') {
            for(int j = 0; j < p; j++) {
                poly[j] = '0';
            }
        } else {
            for(int j = 0; j < p; j++) {
                poly[j] = poly1[j];
            }
        }

        for(int j = p - 1; j > 0; j--) {
            if(temp[j] == poly[j]) {
                b[j - 1] = '0';
            } else {
                b[j - 1] = '1';
            }
        }
        b[strlen(poly) - 1] = str1[i + strlen(poly)];
        strcpy(temp, b);
    }

    strcpy(b, temp);
    int f = 0;

    for(int i = 0; i < strlen(b); i++) {
        if(b[i] != '0') {
            f = 1;
        } else {
            continue;
        }
    }

    if(f == 0) {
        printf("DATA Received Correctly\n");
    } else {
        printf("Error in Receiving Data\n");
    }
    return 0;
}
