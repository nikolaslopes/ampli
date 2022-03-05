#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <assert.h>

struct No
{
  int info;
  struct No *proximo;
};

struct Lista
{
  struct No *inicio;
  int tamanho;
};

struct Lista *criar()
{
  struct Lista *nova_lista = (struct Lista *)malloc(sizeof(struct Lista));

  if (nova_lista != NULL)
  {
    nova_lista->inicio = NULL;
    nova_lista->tamanho = 0;
  }
  return nova_lista;
};

bool vazia(struct Lista *li)
{
  assert(li != NULL);

  if (li->inicio == NULL)
  {
    return true;
  }
  else
  {
    return false;
  }
};

int main()
{
  system("CLS");

  struct Lista *minha_lista = criar();

  if (vazia(minha_lista) == true)
  {
    printf("\nOK, lista vazia!");
  }
  else
  {
    printf("\nAlgo deu errado!");
  }

  printf("\n\n\n");
  system("PAUSE");
  system("CLS");
  return 0;
}
