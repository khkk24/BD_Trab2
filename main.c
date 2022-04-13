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
    int i = 0;
    n = malloc(sizeof(no));
    e = malloc(sizeof(esc));
    while(fscanf(stdin, "%d %d %c %c ",&tc,&id_trans,&oper,&atr) !=EOF)
    {
        o->tc = tc;
        o->id = id_trans;
        o->op = oper;
        o->att = atr;

        n->vertice[i] = o->id;
        e->operacao[i] = o->op;


        if (o->tc != 1)
        {
            if (o->id[i-1]  )
        }
        i++;

        


    }
    saida = freopen(argv[2], "w", stdout );
}