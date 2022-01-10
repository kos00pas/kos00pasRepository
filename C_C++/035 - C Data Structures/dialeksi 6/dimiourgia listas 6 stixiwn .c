 #include <stdio.h>
 
 struct empl{
 	
 	int data; 
 	struct empl * next ;
 };
 
 void main (void){
 	
 	int i ; 
 	struct empl *head , *temp; 
 	
 	head=(struct empl*)malloc(sizeof(struct empl));//desmeuw mnimi g tin kefali 
 	
 	temp=head; //dino sto temp tin timi tis kefalis ???????
 	
 	
 	for(i=1 ;i<6;i++){
 		temp->data=i ; // dino sto temp tin timi t i 
 		if(i==5){break;
		 }
 		temp->next=(struct empl*)malloc(sizeof(struct empl)); //desmeuw xoro gia ton epomeno 
		 temp=temp->next; // vazw to temp na metakinithi ston epomeno 
		 }
	 temp->next=NULL; //telos
	 
	 //gia na mporo na ta tiposw epistrefw stin arxi (SOS apothikeusa tin arxi )
	 temp=head;

	 for(i=0;i<5;i++){
	 	printf("temp data :%d    temp next:%d\n",temp->data,temp->next);
	 	temp=temp->next;
	 	
	 }
 	free(temp);
 
 }
