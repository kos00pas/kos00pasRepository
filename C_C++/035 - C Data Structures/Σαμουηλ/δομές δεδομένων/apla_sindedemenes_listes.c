#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef int elem ; 

struct node{
    elem data; 
    struct node *next ; 
};

typedef struct node list_note ; //sinonimo tou komvou listas 
typedef struct node *list_ptr ; //sinwnimo tou deikti komvou 

elem periexomeno(list_ptr p );
int is_it_empty(list_ptr head);
void init(list_ptr *head);
int delete_after(list_ptr prev , elem *x);
int delete_head(list_ptr *head , elem *x);
int instert_after_other(list_ptr p , elem x );
int instert_start(list_ptr *head , elem x );
void destroy(list_ptr *head);
void print(list_ptr head);

void main (void){
    int elem ; 
    list_ptr head; 
    init(&head);
    instert_start(&head, 1);
    print(head);
}



void init(list_ptr *head){  //arxikopoiei tin lista //*epenerga 
    *head =NULL; 
}

int is_it_empty(list_ptr head){ // epistrefei an einai kenos o komvos 
    return head == NULL;
}

elem periexomeno(list_ptr p ){ // epistrefei to periexomeno tou komvou 
    return p->data;
}

int instert_start(list_ptr *head , elem x ){
    list_ptr newnode;  //~~

    newnode = (list_note * )malloc(sizeof(list_note));
        if(!newnode){
            printf("adynamia desmeusis mnimis");
            return 0     ; 
                    }

        newnode->data=x;    //fortono dedomena gia to nea head 
        newnode->next=*head ;// o epomenos tou kenourgeiou komvou, einai to palio head  
        *head = newnode ;  // o kenourgios komvos ginete i kefali 
        return 1 ; 
}

int instert_after_other(list_ptr p , elem x ){  //eisagei neo komvo meta ton komvo p 

    list_ptr newnode ; //~~

    newnode = (list_note * )malloc(sizeof(list_note));
        if(!newnode){
            printf("adynamia desmeusis mnimis");
            return 0 ; 
        }
        newnode->data=x;  //fortono dedomena gia to neo komvo 
        newnode->next=p->next ; //o epomenes tou neou kombou , einai o komvos meta ton p 
        p->next=newnode ; //o epomenos komvos tou p einai o neos komvos pou dimiourgisame 
        return 1; 
}

int delete_head(list_ptr *head , elem *x){

    if (*head==NULL){
            return 0;
        }

    list_ptr current ; //~~

    current=*head;   //fortonw dieuthinsi kefalis 

    *x=current->data ; //fortono ta deomena tis kefalis pou tha apodesmeusw 
    
    (*head) = (*head)->next;  //o epomenos tis arxikis kefalis, ginetai i nea kefali 
    free(current);
    return 1; 
}
int delete_after(list_ptr prev , elem *x){
    
    if(prev->next==NULL){
        return 0;
    }
    list_ptr current ; //~~

    current=prev->next; //fortono ton diagrafenta (mesw toy proigoumeno pou efera stin sinartisi )
    *x=current->data;  //fortono ta dedomena tou diagrafonta gia na epistrafi 

    prev->next=current->next;  //dixno tou proigoumeno ton neo epomeno tou (current->next)
    free(current);
    return 1;
    }

void destroy(list_ptr *head){
     list_ptr ptr ; //~~

    while(*head !=NULL){        
        ptr=*head; // fortono kefali // gia na  
        *head=(*head)->next; //vlepo ston epomeno komvo 
        free(ptr); // apodesmeuo proigoumeni kefali 
    }
}

void print(list_ptr head){

    list_ptr current ; //~~
    current = head ; // fortono ton komvo mou se alli metabliti gia na ton diatrekso xwris na xathi 

    while(current !=NULL){
        printf("%d" , current->data);  //typono stixia komvou 
        current = current->next;        //pigeno ston epomeno 
    }
}
