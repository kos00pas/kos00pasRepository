#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#define P 1

//i dimiourgia tou structure mas stin opoia tha xrisimopoio gia na dilono tis listas
struct node {
    char data;
    struct node * next;
} *head,*head1;

void  displayNode(struct node *r); //to tipoma tis listas

void addNode(char newdata); //na vazo charaktires mesa

void pop(); //eksagwgi enos stixiou apo tin lista 

void destroy();  //apodesmevsi mnimis

int count=0;        //global metavliti pou tin xrisimopoio gia eksagwgi komvou sti sinartisi pop

int main(){


int N,k;

struct node *n; //dimiourgia tis listas mou
head=NULL;
bool flag_out=true;     //einai true gia na kano to loop me to menu.. otan omws einai false logo tis '.' tote termatizi t programma


do{

printf("\n\nEnter the size of the queue\n");
scanf("%d",&N);

char array[N][P];

printf("\nSelect the type of the LIFO queue\n");
printf("1 for Array or 2 for Queue\n");
scanf("%d",&k);

char charak[N];
int i;


printf("\nGive characters\n");
scanf("%s",charak);



if (k==1){

    for (i=0; i<N; i++)
        array[i][P]=charak[i];

}

//pame gia queue

else if (k==2){   

    for (i=0; i<N; i++)
        addNode(charak[i]);
}


char choice;       //epilogi tou xristi
int rem,L=N;    //rem=remove diladi posous xaraktires thelei na afairesi
bool flag=true;     //einai true gia to loop otan einai false logo tou ';' tote vgainei apo to loop gia na epistrepsi sto arxiko menu kai na ksanakanei loop

while(flag==true){

    printf("\nCHOICES OF MENU\n");
    printf("Enter an asterisk '*' to remove elements from the queue?\n");
    printf("Enter a semicolon ';' if you want to print all the queue elements!\n");
    printf("Enter a dot '.' if you want to exit!\n");

    scanf(" %c",&choice);


    if (choice=='*'){

        printf("\nHow many elements do you want to remove?\n");
        scanf("%d",&rem);
        printf("\n");

        if (k==2){        //edw gia queue
            for(i=0; i<rem; i++)
            pop();
            printf("\n");
              
        } 

        else if(k==1){      //edw gia pinaka
            int j=0; 
            while (j<rem){
                printf("%c, ",array[L-1][P]);
                array[L-1][P]=NULL;
                L--;
                j++;
            }
        }    
    }

    else if (choice==';'){      //edw gia queue

        if (k==2){
            printf("All the queue elements are:  ");
            displayNode(n);     //tiponi tin lista
            printf("\nThe memory is cleaned\n");
            destroy();      //apodesmevsi tis listas
        }
        
        else if (k==1){     //edw gia pinaka
            for (i=0; i<L; i++){
            printf("%c ",array[i][P]);
            array[i][P]=NULL;       //adeiazei thn lista apodesmevsi
            }
            printf("\nThe memory is cleaned\n");
        }

        flag=false;
    }

    else if(choice=='.'){
    printf("\nEXIT\nTHANK YOU");
    flag=false;
    flag_out=false;
    break;
    }

 }

}while(flag_out==true);


return 0;

}


void addNode(char newdata)      //gia na prostheso komvo sti lista
{
struct node *temp;
temp=(struct node *)malloc(sizeof(struct node));
temp->data=newdata;

if (head== NULL)
{
 head=temp;
 head->next=NULL;
}
else
{
 temp->next=head;
 head=temp;
}

}


void  displayNode(struct node *r)   //gia na tiposo tin lista, vasika tiponi to komvo
{
r=head;
if(r==NULL)
{
 return;
}

while(r!=NULL)
{
printf("%c ",r->data);
r=r->next;
}

printf("\n");
}


void pop()      //gia na kano eksagwgi tou komvou
{
    head1 = head;
    if (head1 == NULL)
    {
        printf("\n Error : Trying to pop from empty stack");
        return;
    }
    else
        head1 = head1->next;
    printf("%c", head->data);
    printf(", ");
    free(head);
    head = head1;
    count--;
}

void destroy()      //sinartisi gia na apodesmevso tin lista apo tin mnimi
{
    head1 = head;
    while (head1 != NULL)
    {
        head1 = head->next;
        free(head);
        head = head1;
        head1 = head1->next;
    }
    free(head1);
    head = NULL;
    count = 0;
}
