//-----------------------------------------------------------------------//
// Author   : GuoqiLi                                                    //
// Data     : 2022,11,8                                                  //
// describe : read and write file                                        //
//-----------------------------------------------------------------------//
#include <stdio.h>
#include "commont.h"

int initsys(){
    int cont = 0;
    FILE *fp = fopen("/home/mulin/EduPrj/tools/keep.txt", "r");
    NODE *s;
    if(fp == NULL) {printf("open false\n");}
    while(feof(fp)){
    fread(s, sizeof(NODE), 1, fp); 
    if(cont == 0){
        InitList(dl, s->stear[8], s->enear[8], s->sttime, s->entime, s->Price, s->quantity);
    }
    else {
        Push(dl, s->stear[8], s->enear[8], s->sttime, s->entime, s->Price, s->quantity);
    }
    cont++;
    }
    
    fclose(fp);

return 1;
}

int closesys(){
    NODE * l;
    l = dl;
    FILE *fp = fopen("/home/mulin/EduPrj/tools/keep.txt", "w");
    if(fp == NULL) {printf("open false\n");}
    while(l->next != NULL){
        fwrite(l, sizeof(NODE), 1, fp);
        l = l->next ;
    }
    fclose(fp);
return 1;
}

