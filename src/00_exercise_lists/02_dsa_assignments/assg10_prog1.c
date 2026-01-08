#include <stdio.h>
#include <stdlib.h>

struct BST
{
       int data;
       struct BST *left;
       struct BST *right;
};

typedef struct BST NODE;

NODE *node;

NODE *createtree(NODE *node, int data)
{
       if (node == NULL)
       {
              NODE *temp;
              temp = (NODE *)malloc(sizeof(NODE));
              temp->data = data;
              temp->left = temp->right = NULL;
              return temp;
       }

       if (data < (node->data))
       {
              node->left = createtree(node->left, data);
       }
       else if (data > node->data)
       {
              node->right = createtree(node->right, data);
       }
       return node;
}

NODE *search(NODE *node, int data)
{
       if (node == NULL)
       {
              printf("\nElemento nao encontrado");
       }
       else if (data < node->data)
       {
              node->left = search(node->left, data);
       }
       else if (data > node->data)
       {
              node->right = search(node->right, data);
       }
       else
       {
              printf("\nElemento encontrado e: %d", node->data);
       }
       return node;
}

void inorder(NODE *node)
{
       if (node != NULL)
       {
              inorder(node->left);
              printf("%d\t", node->data);
              inorder(node->right);
       }
}

void preorder(NODE *node)
{
       if (node != NULL)
       {
              printf("%d\t", node->data);
              preorder(node->left);
              preorder(node->right);
       }
}

void postorder(NODE *node)
{
       if (node != NULL)
       {
              postorder(node->left);
              postorder(node->right);
              printf("%d\t", node->data);
       }
}

NODE *findMin(NODE *node)
{
       if (node == NULL)
       {
              return NULL;
       }
       if (node->left)
              return findMin(node->left);
       else
              return node;
}

NODE *findMax(NODE *node)
{
       if (node == NULL)
       {
              return NULL;
       }
       if (node->right)
              return findMax(node->right);
       else
              return node;
}

NODE *del(NODE *node, int data)
{
       NODE *temp;
       if (node == NULL)
       {
              printf("\nElemento nao encontrado");
       }
       else if (data < node->data)
       {
              node->left = del(node->left, data);
       }
       else if (data > node->data)
       {
              node->right = del(node->right, data);
       }
       else
       {
              /* Substitui pelo menor elemento na subárvore direita ou maior na esquerda */
              if (node->right && node->left)
              {
                     /* Substituição pelo menor elemento da subárvore direita */
                     temp = findMin(node->right);
                     node->data = temp->data;
                     /* Deleta o nó que foi movido para o topo */
                     node->right = del(node->right, temp->data);
              }
              else
              {
                     temp = node;
                     if (node->left == NULL)
                            node = node->right;
                     else if (node->right == NULL)
                            node = node->left;
                     free(temp);
              }
       }
       return node;
}

void assg10prog1()
{
       int data, ch, i, n;
       NODE *root = NULL;

       while (1)
       {
              printf("\n 0. Sair\n 1. Criar\n 2. Travessia Em-Ordem \n 3. Travessia Pre-Ordem \n 4. Travessia Pos-Ordem \n 5. Buscar\n 6. Encontrar Menor Elemento\n 7. Encontrar Maior Elemento\n 8. Excluir da Arvore\n");
              printf("DIGITE SUA ESCOLHA: \n");
              scanf("%d", &ch);

              switch (ch)
              {
              case 0:
                     exit(0);
              case 1:
                     printf("\nDigite o valor de N: ");
                     scanf("%d", &n);
                     printf("\nDigite os valores para criar a Arvore de Busca Binaria (BST) (ex: 6,9,5,2,8,15,24,14,7,8,5,2)\n");
                     for (i = 0; i < n; i++)
                     {
                            scanf("%d", &data);
                            root = createtree(root, data);
                     }
                     break;
              case 2:
                     printf("\nTravessia Em-Ordem: \n");
                     inorder(root);
                     break;
              case 3:
                     printf("\nTravessia Pre-Ordem: \n");
                     preorder(root);
                     break;
              case 4:
                     printf("\nTravessia Pos-Ordem: \n");
                     postorder(root);
                     break;
              case 5:
                     printf("\nDigite o elemento para buscar: ");
                     scanf("%d", &data);
                     root = search(root, data);
                     break;
              case 6:
                     printf("\nO menor elemento na BST e: %d \n", findMin(root)->data);
                     break;
              case 7:
                     printf("\nO maior elemento na BST e: %d \n", findMax(root)->data);
                     break;
              case 8:
                     printf("\nDigite o elemento a ser excluido: ");
                     scanf("%d", &data);
                     root = del(root, data);
                     break;
              default:
                     printf("\nOpcao invalida");
                     break;
              }
       }
}
