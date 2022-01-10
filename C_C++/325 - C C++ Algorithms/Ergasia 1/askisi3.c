# include <stdio.h>
#define size 10 
#include <stdlib.h>
struct st{
	
	int id; 
	char *name[25];
	int mid ; 
	int final ;
	int total ;  
		
};

typedef struct st St ; 
void ektypwsi (int t, St * mathitis);

int main(void){
	int k ; 
	int plasma = -1 ; //gia na mpei o mathitis 0 
	int diagrafi ; //id atomou gia diagrafi 
	int i ; //counter  
	int update ; //id atomou gia diagrafi 
	int x ; //counter  
	int y ; 
	int av;
	int sum_av;
	int h ; 
	int max_total = 0 ;
	int f;
	int min_total = 0 ;
	int o ;
	int a ;  
	int m =0 ; 
	int den_iparxi; 

	
	int choise ; 
	St mathitis [size] ; //i domi toy mathiti [megisto megethos ] 
	
		
		for(i=0 ; i<size ; i ++){  // arxikopoio me miden ta stoixeia olwn ton mathiton 
							
			mathitis[i].id= 0;
			mathitis[i].name[0] =  "-----------------------";
			mathitis[i].mid=0;
			mathitis[i].final=0;
			mathitis[i].total=0;
							
		}
		
	
	
	
	while(1){//epiloges 

			printf(" =================Menu==============\n1. Add student records\n2. Delete student records\n3. Update student records\n4. View all student records\n5. Calculate the average score of all students\n6. Show the student with the highest total score\n7. Show the student with the lowest total score\n8. end the programm \n-------------------------------------------------------------------------\n");

			printf("Enter your choice:");	
			scanf("%d", &choise);	
		switch (choise){
			
			case 1: //add student records
 
					plasma++; // diktis arithou mathiti [0 mexri to size ]
					printf("Give me  Student <<ID>>: ");
					scanf("%d", &den_iparxi); // metavliti gia ton elegxo 
					
					//elegxos an iparxi to ID
					
						for(a=0; a<size ;a++){// na koitaksi olous tous mathites 
							if(mathitis[a].id == den_iparxi){ 
								printf("!!uparxei ksana!!\n");
								m=1 ; 
								break; //gia na vgei apo to proto for  	
							}
						}
						if(m==1){//
							m=0;
							break; //gia na vgei apo to case 
						}
							// kataxorisi stoixiwn 
					mathitis[plasma].id=den_iparxi; 
					printf("\nGive me Student <<Name>>: ");
					scanf("%s",mathitis[plasma].name);
					printf("\nGive me Student <<mid term score >> : ");
					scanf("%d", &mathitis[plasma].mid);
					printf("\nGive me Student <<final score >>: ");
					scanf("%d",&mathitis[plasma].final);
					mathitis[plasma].total= 0.4 * (mathitis[plasma].mid) + 0.6 *(mathitis[plasma].final);
					continue; 
					
					
			case 2: // delete strudent records
			
					printf("Give me the <<ID >> of the student you want to delete the records ");
					scanf("%d",&diagrafi );
					
					for(i=0 ; i<size ; i ++){// psaksimo gia pion tha diagrapso 
						if (mathitis[i].id == diagrafi ){
							
							mathitis[i].id=0;
							mathitis[i].name[0] = "-----------------------";
							mathitis[i].mid=0;
							mathitis[i].final=0;
							mathitis[i].total=0;
							plasma--; // mionoume tous kathites kata ena 

						}
					}
					continue; 
							 
							 
			case 3: //update student records 
				
					printf("Give me the <<ID >> of the student you want to update  the records ");
					scanf("%d",&update );
					
					for(x=0 ; x<size ; x ++){
						if (mathitis[x].id == update  ){
							printf("THE NEW  <<ID>>: ");
							scanf("%d", &mathitis[x].id);
							printf("\nTHE NEW  <<Name>>: ");
							scanf("%s",mathitis[x].name);
							printf("\nTHE NEW <<mid term score >> : ");
							scanf("%d",&mathitis[x].mid);
							printf("\nTHE NEW <<final score >>: ");
							scanf("%d",&mathitis[x].final);
							mathitis[x].total= 0.6 * (mathitis[x].mid) + 0.4 *(mathitis[x].final);
							printf("\n");
						}
					}
			
					continue; 
					
					
			case 4: // view all student records 
					for (y=0; y<size ; y++){
						if(mathitis[y].id!= 0){
						
						ektypwsi(y, mathitis);
						}
						}					 
						
					continue; 
					
					
					
			case 5: //calculate the averge score of all students 
					sum_av=0;
					for (k=0 ; (k<size) && (mathitis[k].id!= 0); k++){
						sum_av=sum_av + mathitis[k].total ; 
					}
					printf("\nthe sum is : %d , for  %d students\n",sum_av, k);
					av = sum_av/(k)  ; 
					printf("\nCalculate the averge score of all students : %d\n \n",av );
					continue; 
					
					
			case 6: // show the strudent with the highest total score 
				
					for (h=0 ; h<size ; h++){
						if(mathitis[h].total<mathitis[h+1].total){//diaperno tous mathites kai elegxo an einai o megaliteros me vasi ton epomeno 
							max_total=h+1;
						}					
					}
						printf("--------------------------\n"); 
						printf("The strudent with the HIGHEST total score is <<ID>> %d", mathitis[max_total].id);
							printf("\n");
						ektypwsi(max_total, mathitis);

				
					continue; 					
					 
			case 7:	//show the student with the lowest total score 
				
					for (f=0 ; f<size ; f++){
						if((mathitis[f].total>mathitis[f+1].total) && mathitis[f+1].id!= 0 ){//diaperno tous mathites kai elegxo an einai o mikroteros me vasi ton epomeno 
							min_total=f+1;														// meno mexri ekei poy exei mathites ( id != 0 )
						}
					}
						printf("--------------------------\n"); 
						printf("The strudent with the LOWEST total score is <<ID>> %d", mathitis[min_total].id);
						
						ektypwsi(min_total, mathitis);

					
					continue; 
					
					
			case 8: // end 
					printf("FINISH!!****");
					return 0 ; 
					
					 
		}
	}
	
}

void ektypwsi (int t , St *mathitis ){
						printf("\n--------------------------\n"); 
						printf("\t\tAr: %d",t);
						printf("\n");
						printf ("ID: %d\n",mathitis[t].id);
						printf ("NAME: %s\n",mathitis[t].name);
						printf ("MID: %d \n",mathitis[t].mid);
						printf ("FINAL: %d \n",mathitis[t].final);
						printf ("TOTAL: %d\n",mathitis[t].total);	
}
