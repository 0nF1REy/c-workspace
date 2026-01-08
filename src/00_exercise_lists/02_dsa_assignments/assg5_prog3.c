#include <stdio.h>
#include <stdlib.h>

struct node53
{
	int info;
	struct node53 *prev, *next;
};

struct node53 *start = NULL;

void traverse53()
{
	if (start == NULL)
	{
		printf("\nLista vazia\n");
		return;
	}

	struct node53 *temp;
	temp = start;
	while (temp != NULL)
	{
		printf("Data = %d\n", temp->info);
		temp = temp->next;
	}
}

void insertAtFront53()
{
	int data;
	struct node53 *temp;
	temp = (struct node53 *)malloc(sizeof(struct node53));
	printf("\nDigite o numero a ser inserido: ");
	scanf("%d", &data);
	temp->info = data;
	temp->prev = NULL;

	temp->next = start;
	start = temp;
}

void insertAtEnd53()
{
	int data;
	struct node53 *temp, *trav;
	temp = (struct node53 *)malloc(sizeof(struct node53));
	temp->prev = NULL;
	temp->next = NULL;
	printf("\nDigite o numero a ser inserido: ");
	scanf("%d", &data);
	temp->info = data;
	temp->next = NULL;
	trav = start;

	if (start == NULL)
	{

		start = temp;
	}

	else
	{
		while (trav->next != NULL)
			trav = trav->next;
		temp->prev = trav;
		trav->next = temp;
	}
}

void insertAtPosition53()
{
	int data, pos, i = 1;
	struct node53 *temp, *newnode53;
	newnode53 = malloc(sizeof(struct node53));
	newnode53->next = NULL;
	newnode53->prev = NULL;

	printf("\nDigite a posicao: ");
	scanf("%d", &pos);
	printf("\nDigite o numero a ser inserido: ");
	scanf("%d", &data);
	newnode53->info = data;
	temp = start;

	if (start == NULL)
	{
		start = newnode53;
		newnode53->prev = NULL;
		newnode53->next = NULL;
	}

	else if (pos == 1)
	{
		newnode53->next = start;
		newnode53->next->prev = newnode53;
		newnode53->prev = NULL;
		start = newnode53;
	}

	else
	{
		while (i < pos - 1)
		{
			temp = temp->next;
			i++;
		}
		newnode53->next = temp->next;
		newnode53->prev = temp;
		temp->next = newnode53;
		temp->next->prev = newnode53;
	}
}

void deleteFirst53()
{
	struct node53 *temp;
	if (start == NULL)
		printf("\nLista vazia\n");
	else
	{
		temp = start;
		start = start->next;
		if (start != NULL)
			start->prev = NULL;
		free(temp);
	}
}

void deleteEnd53()
{
	struct node53 *temp;
	if (start == NULL)
		printf("\nLista vazia\n");
	temp = start;
	while (temp->next != NULL)
		temp = temp->next;
	if (start->next == NULL)
		start = NULL;
	else
	{
		temp->prev->next = NULL;
		free(temp);
	}
}

void deletePosition53()
{
	int pos, i = 1;
	struct node53 *temp, *position;
	temp = start;

	if (start == NULL)
		printf("\nLista vazia\n");

	else
	{

		printf("\nDigite a posicao: ");
		scanf("%d", &pos);

		if (pos == 1)
		{
			position = start;
			start = start->next;
			if (start != NULL)
			{
				start->prev = NULL;
			}
			free(position);
			return;
		}

		while (i < pos - 1)
		{
			temp = temp->next;
			i++;
		}

		position = temp->next;
		if (position->next != NULL)
			position->next->prev = temp;
		temp->next = position->next;

		free(position);
	}
}

int assg5prog3()
{
	int choice;
	while (1)
	{

		printf("\n\t1 Ver lista\n");
		printf("\t2 Para insercao no inicio\n");
		printf("\t3 Para insercao no fim\n");
		printf("\t4 Para insercao em qualquer posicao\n");
		printf("\t5 Para exclusao do primeiro elemento\n");
		printf("\t6 Para exclusao do ultimo elemento\n");
		printf("\t7 Para exclusao de elemento em qualquer posicao\n");
		printf("\t8 Para sair\n");
		printf("\nInforme a opcao:\n");
		scanf("%d", &choice);

		switch (choice)
		{
		case 1:
			traverse53();
			break;
		case 2:
			insertAtFront53();
			break;
		case 3:
			insertAtEnd53();
			break;
		case 4:
			insertAtPosition53();
			break;
		case 5:
			deleteFirst53();
			break;
		case 6:
			deleteEnd53();
			break;
		case 7:
			deletePosition53();
			break;

		case 8:
			exit(1);
			break;
		default:
			printf("Opcao incorreta. Tente novamente.\n");
			continue;
		}
	}
	return 0;
}
