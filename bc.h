typedef struct node{
	int data;
	int sign;
	struct node* next;
} node;

typedef node* List;

void freeLL(List *L);
void insertNode(List *L, int temp);
void reverseLL(List *L);
void removeZeroes(List* L);
int compareLL(List L1, List L2);

node* numToLL(char *num);
void displayLL(List L);

node* add(List L1, List L2);
node* subtract(List L1, List L2);
node* multiply(List L1, List L2);
node* divide(List L1, List L2);
node* expon(List L1, List L2);
node* square(List L1);

node* handleFunctions(char *expr, int k);

node* solveExpr(char *expr);
