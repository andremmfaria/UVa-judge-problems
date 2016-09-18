#include <stdio.h>
#include <string.h>

int move(int block);
int pile(int block);
int onto(int block);
int over(int block);
void prtblk(Block **vet, n);
int find(Block **vet, int n, int block);

typedef struct blck { int blkval; Block *next; } Block;

int main()
{
    int  n, bl1, bl2;
    char *cmd1 = (char*)malloc(5*sizeof(char));
    char *cmd2 = (char*)malloc(5*sizeof(char));
    scanf("%d", n);
    Block **vet= (Block**)malloc(n*sizeof(Block*));
    for(int i=0;i<n;i++)
    {
        Block *blk = (Block*)malloc(sizeof(Block));
        blk->blkval = i; blk->next = NULL;
        vet[i]=blk; i++;
    }
    while(scanf("%4s %d %4s %d", cmd1, bl1, cmd2, bl2) != EOF)
    {
        if(strcmp(cmd1,"quit")) { prtblk(vet, n); return 0; }
        if(strcmp(cmd1,"move")) { move(bl1,bl2,cmd2); }
        if(strcmp(cmd1,"pile")) { pile(bl1,bl2,cmd2); }
    }
}

int move(Block **vet, int n, int blka, int blkb, char *cmd)
{
    Block *aux;
    int i = find(vet,n,blka);
    while(aux->next != NULL)
    {
        if(vet[i]->blkval == )
    }
    if(strcmp(cmd,"onto")) {  }
    if(strcmp(cmd,"over")) {  }
}

int pile(Block **vet, int n, int blka, int blkb, char *cmd)
{
    if(strcmp(cmd,"onto")) {  }
    if(strcmp(cmd,"over")) {  }
}

int onto(int block)
{

}

int over(int block)
{

}

void prtblk(Block **vet, int n)
{
    Block* vect;
    for(int i=0;i<n;i++)
    {
        printf("%d: ",i);
        while(vect->next != NULL)
        {
            vect = vet[i];
            printf("%d ",vect->blkval); printf("\n");
        }
    }
}

Block* find(Block **vet, int n, int block)
{
    Block *blk;
    for(int i=0;i<n;i++)
    {
        blk = vet[i];
        while(blk->next != NULL)
        {
            if(blk->blkval==block) {return blk;}
            blk = blk->next;
        }
    }
    return NULL;
}

void unstack(Block **vet, int n, int index)
{
    Block *blk = find(vet,n,index);
    Block *aux1 = blk->next, *aux2 = blk->next;
    while(aux1->next != NULL)
    {
        aux1 = aux1->next;
        vet[aux2->blkval]=aux2;
        aux2->next = NULL;
        aux2 = aux1;
    }
}
