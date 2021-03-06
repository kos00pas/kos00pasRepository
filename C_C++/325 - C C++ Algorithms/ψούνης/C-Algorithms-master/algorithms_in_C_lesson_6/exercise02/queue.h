/* queue.h : Dilwseis ouras */

#define TRUE 1
#define FALSE 0

#define QUEUE_SIZE 10      /* Megethos pinaka ouras */


typedef int data_type;

struct data_array{
	data_type data;
	int priority;
};

typedef struct data_array qelem;          /* typos dedomenwn ouras */

struct queue{
   qelem array[QUEUE_SIZE]; /* pinakas stoixeiwn     */
   int start;			   /* arxi tis ouras 		*/
   int finish;             /* telos tis ouras       */
};

typedef struct queue QUEUE; /* Sinwnimo tis stoivas */


void QU_init(QUEUE *s);
int QU_empty(QUEUE s);
int QU_full(QUEUE s);
int QU_enqueue(QUEUE *s, qelem x);
int QU_dequeue(QUEUE *s, qelem *x);
