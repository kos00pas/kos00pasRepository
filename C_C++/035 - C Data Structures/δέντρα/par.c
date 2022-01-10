#include "par.h"

struct node *create(){ 		//dimiourgia paidion tou komvou 
	
  struct node *komv ; 
  
    komv = (struct node *)malloc(sizeof(struct node));  // dinamiki desmeusi mnimis gia ta paidia 

  int i ; 
  	
    for (i = 0; i < 26; i++) {		// dimiourgia 26 paidiwn 
            komv->pinakas[i] = NULL; 
    } 
    	return komv; 
} 

void InsertNode(struct node *root , char* s){
	int i  ; 
	int arth ; 
	struct node* komv = root;// ksekinontas pao tin kefali c xwris na piraksoume tin diadromi 
	
	for(i=0;i<10;i++){
	
		arth=s[i] - 'A' ; //arithos gramatos kouponiou 
		
			if (komv->pinakas[arth] == NULL)  // an den iparxei o komovs  dimiourga to 
				komv->pinakas[arth] = create();	
			komv = komv->pinakas[arth]; 		// kai pigene  ston epomeno kokmvo 
 	}
 	
	komv->used = false ;	//afpu tora dimiourgithike ara den exei ksanaxrisimopoiithi 
	komv->is_end = true; 	//telos simvolosiras
}

bool search(struct node *root, char kouponi[10] ){
	
  	struct node* komvos = root;// ksekinontas pao tin kefali g na min pirakso to root
  	
	int p ; 
	int i=0 ; 
	int arth ; 
	
	for(p=0 ; p<10 ; p++){	 
		 	        arth = kouponi[p] - 'A';	//arithos gramatos kouponiou 
		 	        	    
		  
		         if (komvos->pinakas[arth]==NULL) {//an den exi mesa o komvos 
			        printf("is not valid k ");
			        	break;
				}
				
		komvos = komvos->pinakas[arth];	//metakinisi ston epomeno komvo t epipedou 	
	 
    }

		
		if(komvos->is_end== false){		// an den ftasame sto telos tis leksis 
	 	 		 	printf("\nis nott valid ");
					return false ; 
		  }		
				
		else if(komvos->is_end == true && komvos->used== false ){		// telos leksis kai DEN einai xrisimopoiimeno 
				 	printf("\nis valid");
				 	komvos->used=true ; 
				 	return true; 	 	
		 }
		 
	 	else if (komvos->is_end==true && komvos->used == true ){	// telos leksis kai EINAI  xrisimopoiimeno 
				 	printf("\nis not valid ");
				 	return false ; 
	 	 }
			return false; 
}




