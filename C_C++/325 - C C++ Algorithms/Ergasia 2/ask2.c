#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#define sentencelenght 50
typedef struct hashnode {
    char word [25];
    struct  hashnode *next;
}hashnode;

typedef struct hashtable{
    hashnode *head;
    int length;

}hashtable;

void insert_hash(hashtable *hash, char word [25]){
    hashnode *temp;
    hashnode *insert_hash=(hashnode*)malloc(sizeof(hashnode));
    if (hash->length>0){

        temp=hash->head;
    while (temp->next != NULL)
        temp=temp->next;

    temp->next=insert_hash;
    insert_hash->next=NULL;
    strcpy(insert_hash->word,word);

}
    else

    if (hash->length==0){
        strcpy(insert_hash->word,word);
        insert_hash->next=NULL;
        hash->head=insert_hash;
        hash->length++;


}}
int search_hash (hashtable *hash, char word[25]){
    hashnode *temp;
    int i;
    if (hash->length>0){
        temp=hash->head;

    for (i=0; i<hash->length; i++){

        if (strcmp (word,temp->word)==0)
            return 1;

    temp=temp->next;

}}
return 0;
}
int main() {
    int choosemod=0,i;
    hashtable hash[100];
    for (i=0;i<100;i++){
        hash[i].length=0;
        hash[i].head=NULL;
    }


    printf("enter the hashing function to use: \n [1] for sum of letters in ASCII code, mod 10\n [2] for sum of letters in ASCII code, mod 100");
    printf("\nYour choose is:");
    scanf ("%d",&choosemod);

    while(!(choosemod>0 && choosemod<3)){
        printf("\nWrong choose!!\n\n [1] for sum of letters in ASCII code, mod 10\n [2] for sum of letters in ASCII code, mod 100\n Your choose is:");
        scanf ("%d",&choosemod);
    }
    char *filename = "test.txt";
    FILE *fp = fopen(filename,"r");;
     if (fp == NULL)
    {
        printf("Error: could not open file %s", filename);
        return 1;
    }
const unsigned MAX_LENGTH = 25;
    char buffer[MAX_LENGTH],temp;
int size,sum,key;

    while (fgets(buffer, MAX_LENGTH, fp)){
        printf("%s ",buffer);




        if(choosemod==1){
           sum=0;
           size=strlen(buffer);
           for(i=0; i<size; i++){
            temp=buffer[i];
            sum=sum+temp;
            }
           key=sum%10;

           insert_hash(&hash[key],buffer);
}

       if(choosemod==2){
            sum=0;
            size=strlen(buffer);
           for(i=0; i<size; i++){
            temp=buffer[i];
            sum=sum+temp;
            }
           key=sum%100;
           insert_hash(&hash[key],buffer);
}
}

fclose(fp);
char str [sentencelenght],strtemp[10][50];
printf("\nGive your sentence:");
gets(str);
gets(str);
int flag=1,x=0;
const char s[2] = "-";
   char *token;

   /* get the first token */
   token = strtok(str, s);

   /* walk through other tokens */
   while( token != NULL ) {
        if(choosemod==1){
           sum=0;
           size=strlen(token);
           for(i=0; i<size; i++){
            temp=token[i];
            sum=sum+temp;
            }
           key=sum%10;

           if(search_hash(&hash[key],token)==0){
            flag=0;
            strcpy(strtemp[x],token);
            x++;
}}

       if(choosemod==2){
            sum=0;
            size=strlen(token);
           for(i=0; i<size; i++){
            temp=token[i];
            sum=sum+temp;
            }
           key=sum%100;
           if(search_hash(&hash[key],token)==0){
            flag=0;

           strcpy(strtemp[x],token);
            x++;
}

        token = strtok(NULL, s);
   }
}
  // if (flag==0)
    printf("true:");


    return 0;
}

