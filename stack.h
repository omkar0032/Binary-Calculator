typedef struct stack{
	char *arr;
	int top;
	int size;
} Stack;

void initStack(Stack *s, int n);
int isFull(Stack *s);
int isEmpty(Stack *s);

void push(Stack *s, char val);
char pop(Stack *s);
char peek(Stack *s);

int isOperator(char ch);
int isOperand(char ch);
int isSpace(char ch);

int precedence(char ch);

char *infixToPostfix(char *expr);
node* evaluatePostfix(char *expr);
