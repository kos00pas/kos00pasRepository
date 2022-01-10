 # define true 1 
#define false 0 

#define stack_size 10 

typedef int elem; 

struct stack{
	elem array[stack_size];
	int top; 
};

typedef struct stack STACK ; 

void test();

void st_init(STACK *s); 
int st_empty(STACK s);
int st_full(STACK s);
int st_push(STACK *s , elem x); 
int st_pop(STACK *s,elem *x); 

/*
void st_init(STACK *s){
	s->top=-1;
}

int st_empty(STACK s){
	return s.top==-1;
}

int st_full(STACK s){
	return (s.top==stack_size);
}

int st_push(STACK *s,elem x ){
	if (st_full(*s)){
		return false;
	}
	else{
		s->top++;
		s->array[s->top]=x;
		return true; 
	}
}

int st_pop(STACK *s,elem *x){
	if(st_empty(*s)){
		return false; 
}
	else{
		*x=s->array[s->top];
		(s->top)-- ;
		return true;
	
}
}
*/



