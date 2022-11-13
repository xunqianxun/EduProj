//-----------------------------------------------------------------------//
// Author   : GuoqiLi                                                    //
// Data     : 2022,11,8                                                  //
// describe : read and write file                                        //
//-----------------------------------------------------------------------//
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "commont.h"



// int initsys(){
//     int cont = 0;
//     FILE *fp = fopen("/home/mulin/EduPrj/tools/keep.txt", "rt");
//     NODE *s;
//     if(fp == NULL) {printf("open false\n");}
//     while(feof(fp)){
//     fread(s, sizeof(NODE)+14, 1, fp); 
//     if(cont == 0){
//         InitList(s->stear, s->enear, s->styear, s->stmouth, s->stdata, s->etyear, s->etmouth, s->etdata, s->Price, s->quantity);
//     }
//     else {
//         Push(s->stear, s->enear, s->styear, s->stmouth, s->stdata, s->etyear, s->etmouth, s->etdata, s->Price, s->quantity);
//     }
//     cont++;
//     }
    
//     fclose(fp);

// return 1;
// }

// int closesys(){
//     NODE * l;
//     l = Getnumber(1);
//     FILE *fp = fopen("/home/mulin/EduPrj/tools/keep.txt", "wt");
//     if(fp == NULL) {printf("open false\n");}
//     while(l->next != NULL){
//         fwrite(l, sizeof(NODE), 1, fp);
//         l = l->next ;
//     }
//     fclose(fp);
// return 1;
// }


int initsys(){

    time_t t = time(NULL);

    struct tm *initt = localtime(&t);

    int cont = 0;
    char *strstart;
    char *strend;
    FILE *start = fopen("/home/mulin/EduPrj/tools/start.txt", "rt");
    FILE *end = fopen("/home/mulin/EduPrj/tools/end.txt", "rt");
    if(start == NULL) {printf("open start false\n");}
    if(end == NULL) {printf("open end false\n");}
    while(!feof(start) | !feof(end)){
    strstart = (char *)malloc(8);
    strend = (char *)malloc(8); 
    fgets(strstart, 8, start);
    fgets(strend, 8, end); 
    if(cont == 0){
        InitList(strstart, strend, initt->tm_year+1900, initt->tm_mon+1, initt->tm_mday, initt->tm_year+1900, initt->tm_mon+1, initt->tm_mday, 245, 999);
    }
    else {
        Push(strstart, strend, initt->tm_year+1900, initt->tm_mon+1, initt->tm_mday, initt->tm_year+1900, initt->tm_mon+1, initt->tm_mday, 245, 999);
    }
    cont++;
    }
    
    fclose(start);
    fclose(end);
return 1;
}


int closesys(){
    NODE *l;
    char star[8];
    char en[8];
    l = l = Getnumber(1);
    FILE *wstart = fopen("/home/mulin/EduPrj/tools/start.txt", "wt");
    FILE *wend = fopen("/home/mulin/EduPrj/tools/end.txt", "wt");
    if(wstart == NULL) {printf("open start false\n");}
    if(wend == NULL) {printf("open end false\n");}
    while(l->next != NULL){
        star[8] = (char)l->stear;
        en[8] = (char)l->enear;
        fprintf(wstart, "%s", star);
        fprintf(wend, "%s", en);
        l = l->next ;
    }
    fclose(wstart);
    fclose(wend);
return 1;
}

