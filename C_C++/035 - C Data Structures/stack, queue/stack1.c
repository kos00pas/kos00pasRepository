 #include <stdio.h>
 # define size 4
  typedef struct {
 	int list[size];
 	int length ; 	
 }stack;
 //orismos
  void makeEmpty(stack *s);
 int isEmpty(stack *s);
 void pop(stack *s);
 void push(int x , stack *s);
 int top(stack *s);

 //telos orismou 
 

 void main (){
 }
 
 void makeEmpty(stack *s){
 	s->length=0;
 }
 
 int isEmpty(stack *s){
 	return(s->length==0);
 }
 
 void pop(stack *s){
 	if (!isEmpty(s)){
 		(s->length)--;
	 }
 }
 
 void push(int x , stack *s){
 	if((s->length)<size){
 		s->list[s->length]=x;
 		(s->length)++;
	 }
 }
 
 int top(stack *s){
 	if (!isEmpty(s)){
 		return s->list[s->length-1];
	 }
 }
