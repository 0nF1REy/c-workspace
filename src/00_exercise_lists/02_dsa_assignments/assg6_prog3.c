#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Programa em C para converter expressão infixa para posfixa

// Tipo Pilha
struct Stack
{
	int top;
	unsigned capacity;
	int *array;
};

// Operacoes de Pilha
struct Stack *createStack(unsigned capacity)
{
	struct Stack *stack = (struct Stack *)
		malloc(sizeof(struct Stack));

	if (!stack)
		return NULL;

	stack->top = -1;
	stack->capacity = capacity;

	stack->array = (int *)malloc(stack->capacity *
								 sizeof(int));

	return stack;
}

int qqq(struct Stack *stack)
{
	return stack->top == -1;
}

char peek(struct Stack *stack)
{
	return stack->array[stack->top];
}

char ooo(struct Stack *stack)
{
	if (!qqq(stack))
		return stack->array[stack->top--];
	return '$';
}

void eee(struct Stack *stack, char op)
{
	stack->array[++stack->top] = op;
}
// Função utilitária para verificar se
// o caractere dado é operando
int isOperand(char ch)
{
	return (ch >= 'a' && ch <= 'z') ||
		   (ch >= 'A' && ch <= 'Z');
}

// Função utilitária para retornar
// precedência de um dado operador
// Valor de retorno maior significa
// maior precedência
int Prec(char ch)
{
	switch (ch)
	{
	case '+':
	case '-':
		return 1;

	case '*':
	case '/':
		return 2;

	case '^':
		return 3;
	}
	return -1;
}

// A função principal que
// converte a expressão infixa dada
// para expressão posfixa.
int infixToPostfix(char *exp)
{
	int i, k;

	// Cria uma pilha com capacidade
	// igual ao tamanho da expressão
	struct Stack *stack = createStack(strlen(exp));
	if (!stack) // Verifica se a pilha foi criada com sucesso
		return -1;

	for (i = 0, k = -1; exp[i]; ++i)
	{

		// Se o caractere escaneado é
		// um operando, adiciona à saída.
		if (isOperand(exp[i]))
			exp[++k] = exp[i];

		// Se o caractere escaneado é um
		// '(', empilha na pilha.
		else if (exp[i] == '(')
			eee(stack, exp[i]);

		// Se o caractere escaneado é um ')',
		// desempilha e envia para saída da pilha
		// até que um '(' seja encontrado.
		else if (exp[i] == ')')
		{
			while (!qqq(stack) && peek(stack) != '(')
				exp[++k] = ooo(stack);
			if (!qqq(stack) && peek(stack) != '(')
				return -1; // expressão inválida
			else
				ooo(stack);
		}
		else // um operador é encontrado
		{
			while (!qqq(stack) &&
				   Prec(exp[i]) <= Prec(peek(stack)))
				exp[++k] = ooo(stack);
			eee(stack, exp[i]);
		}
	}

	// Desempilha todos os operadores da pilha
	while (!qqq(stack))
		exp[++k] = ooo(stack);

	exp[++k] = '\0';
	printf("Expressao posfixa: %s", exp);
}

// Programa principal para testar as funções acima
int intopo()
{
	int cv;
	printf("Informe o tamanho: ");
	scanf("%d", &cv);
	char exp[cv];
	printf("Informe a expressao: ");
	scanf("%s", exp);
	// char exp[] = "a+b*(c^d-e)^(f+g*h)-i";
	infixToPostfix(exp);

	return 0;
}
