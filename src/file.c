//-----------------------------------------------------------------------//
// Author   : GuoqiLi                                                    //
// Data     : 2022,11,8                                                  //
// describe : read and write file                                        //
//-----------------------------------------------------------------------//
#include "./include/commont.h"
#include <stdio.h>
#include "./include/Link.h"

int initsys(){
    int cont = 0;
    FILE *fp = fopen("/home/mulin/EduPrj/tools/keep.txt", "r");
    NODE *s;
    if(fp == NULL) {printf("open false\n");}
    while(feof(fp)){
    fread(s, sizeof(NODE), 1, fp); 
    if(cont == 0){
        InitList(dl, s->stear, s->enear, s->sttime, s->entime, s->Price, s->quantity);
    }
    else {
        Push(dl, s->stear, s->enear, s->sttime, s->entime, s->Price, s->quantity);
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

