#include <stdio.h>
#include <stdlib.h>

#include "seria_equi.h"

int main (int argc, char *argv[])
{
    FILE *entrada = NULL;
    FILE *saida = NULL;
    int tc; // tempo de chegada
    int id_trans ; // id de transacção
    char oper,atr; //operação e o atributo a ser lido
    operacao *o;
    no *n;
    esc *e;
    
    int t=0,i = 0;
    int cont = 0,j=0,k=1;
    int vet[20];
    int v[5];
    int vet_commit[10];
    int tp;
    n = malloc(sizeof(no));
    e = malloc(sizeof(esc));
    o = (operacao*)malloc(sizeof(operacao));
    int cont_op=0;
    int a=0;
    int tamp=0;
    
    o->tc = malloc(sizeof(int));
    o->id = malloc(sizeof(int));
    o->op = malloc(sizeof(char));
    o->att = malloc(sizeof(char));
    n->vertice = malloc(sizeof(int));
    n->vertice = 0;
    
    while(fscanf(stdin, "%d %d %c %c",&tc,&id_trans,&oper,&atr) !=EOF)
    {
        
            o->tc[i] = tc;
            o->id[i] = id_trans;
            o->op[i] = oper;
            o->att[i] = atr;

        vet[i]= o->id[i];
        //tamp =o->id[i];
        if(o->op[i] == 'C')
        {
            vet_commit[a]=o->tc[i];
            cont_op ++;
            a++;
        }
        else if(o->id[i] > tamp)
        {
            tamp = o->id[i];
        }
        i++;       

    }


    // testes de seriabilidade
    while (k <= tamp)
    {
       n->vertice[k] = k;
       k++; 
    }

    for ( j = 0; j < a; j++)
    {
        /* code */printf("%d\t",vet_commit[j]);
    }
    printf("\n");
    printf("cont = %d\n",cont_op);
    printf("tamp = %d\n",tamp);
    
    
    
    saida = freopen(argv[2], "w", stdout );
}