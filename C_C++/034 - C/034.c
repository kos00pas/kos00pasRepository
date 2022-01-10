#include <stdio.h>
typedef struct{
	int id ;
	char name[25];
	int vathmoi[3];
	
}st_student;

void read(st_student* stud);
void display(st_student* stud);


void main (void){
st_student * student1;
st_student * student2; 

student1=(st_student*) malloc(sizeof(st_student));
student2=(st_student *) malloc(sizeof(st_student));	
	
read(student1);
read(student2);

display(student1);
display(student2);	
	
}

void read(st_student* stud){
	printf("dwse id  ");
	scanf("%d",&stud->id);
	printf("dwse moy to onoma t mathiti ");
	scanf("%s",&stud->name);
	printf("dwse vathmous metaksi ts keno "); 
	scanf("%d %d %d", &stud->vathmoi[0],&stud->vathmoi[1],&stud->vathmoi[2]);
}

void display (st_student * stud){
printf("o mathitis me ton arithmo tautotitas %d exei vathmous %d %d %d",stud->id,stud->vathmoi[0],stud->vathmoi[1],stud->vathmoi[2]);	
printf("to onoma tou mathiti %d einai %s\n",stud->id, stud->name);
}

