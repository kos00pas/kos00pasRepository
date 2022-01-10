#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

static const char alphabet[] =
"abcdefghijklmnopqrstuvwxyz"

"0123456789";

static const int alphabetSize = sizeof(alphabet) - 1;


void bruteImpl(char* str, int index, int maxDepth)
{
    char *filename = "codes.txt";
    FILE *fp = fopen(filename, "a+");
    bool result;
int i ;
    for ( i = 0; i < alphabetSize; ++i)
    {
        str[index] = alphabet[i];

        if ((index == maxDepth - 1)){
              fprintf(fp, "%s\n", str);
            //  printf("%s\n",str);

        }
        else bruteImpl(str, index + 1, maxDepth);
    }

    fclose(fp);
}

void bruteSequential(int maxLen)
{
    char* buf = malloc(maxLen + 1);
int i ; 
    for ( i = 1; i <= maxLen; ++i)
    {
        memset(buf, 0, maxLen + 1);
        bruteImpl(buf, 0, i);
    }

    free(buf);
}

int main(void)
{
    bruteSequential(3);
    char *filename = "codes.txt";
    FILE *fp = fopen(filename, "r");
    int i=0,j,val1,val2,val3;
    char key[3],stoxos[3],sentence[30];

    while(fgets(key, sizeof(key), fp) != NULL) {
               strcpy(stoxos,key);
               val1=(int)stoxos[0];
               val2=(int)stoxos[1];
               val3=(int)stoxos[3];
        if((val1==(35^84)) && (val2==(7^104)) && (val3==(30^105))){
              //  printf("%s%c\n",stoxos,stoxos[3]); // key
                printf("Decryption of 35,7,30,4,79,30,4,79,22,87,12,24,25,9,30,19,10,25,3,6,22,27,79,26,18,28,4,22,8,18 is:");
                printf("%c",val1^35);
                printf("%c",val2^7);
                printf("%c",val3^30);
                printf("%c",val1^4);
                printf("%c",val2^79);
                printf("%c",val3^30);
                printf("%c",val1^4);
                printf("%c",val2^79);
                printf("%c",val3^22);
                printf("%c",val1^87);
                printf("%c",val2^12);
                printf("%c",val3^24);
                printf("%c",val1^25);
                printf("%c",val2^9);
                printf("%c",val3^30);
                printf("%c",val1^19);
                printf("%c",val2^10);
                printf("%c",val3^25);
                printf("%c",val1^3);
                printf("%c",val2^6);
                printf("%c",val3^22);
                printf("%c",val1^27);
                printf("%c",val2^79);
                printf("%c",val3^26);
                printf("%c",val1^18);
                printf("%c",val2^28);
                printf("%c",val3^4);
                printf("%c",val1^22);
                printf("%c",val2^8);
                printf("%c",val3^18);
                break; }
}
fclose(fp);
return 0;
}
