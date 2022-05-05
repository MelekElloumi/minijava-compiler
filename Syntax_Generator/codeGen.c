#include "codeGen.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int indextab;
ENTREE_CODE tabCodeInt[2000];

ENTREE_CODE creerEnt (const char* code, int op, const char* nomfonc){
    ENTREE_CODE ent;
    ent.code_op = (char *)malloc(strlen(code)+2);
    strcpy(ent.code_op, code);
    ent.operande=op;
    ent.nomFct = (char *)malloc(strlen(nomfonc)+2);
    strcpy(ent.nomFct, nomfonc);
    return ent;
}

ENTREE_CODE creerOp (const char* code,int op){
    return creerEnt (code,op,"");
}

ENTREE_CODE creerCode (const char* code){
    return creerOp (code,-1);
}

void genererCode(){
    FILE *fgc;
    fgc=fopen("generatedCode.txt","w");
    if(fgc==NULL){
        printf("Error");
        exit(1);
    }
    for (int f=0;f<indextab;f++){
        fprintf(fgc,"%s ",tabCodeInt[f].code_op);
        if(tabCodeInt[f].operande!=-1)
            fprintf(fgc,"%d ",tabCodeInt[f].operande);
        fprintf(fgc,"\n");
    }
    fclose(fgc);
}
