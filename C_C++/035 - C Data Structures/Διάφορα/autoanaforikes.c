
void main(){


struct node {			//ti theloume na epitixoume se auto to programma
	int data; 
	struct node *next ; 
	
}; 

struct node *head , *temp 
int i; 

head=(struct node*)malloc(sizeof(struct node));
temp=head;		//giati thelame alli metabliti tipou pointer kai den arkestikame me to head

for(i=0 , i<10 , i++){
	temp->data=i;
	if(i==9){
		break;
	}
	temp->next=(struct node*)malloc(sizeof(struct node));
	temp= temp->next;
}
temp->next=NULL;
temp= head ; 

for(i=0;i<10;i++){
	printf("%d %d\n", temp->data)
}


}
