//-----------------------------------------------------------------------//
// Author   : GuoqiLi                                                    //
// Data     : 2022,11,8                                                  //
// describe : build this project  LinkList                               //
//-----------------------------------------------------------------------//

#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#include "commont.h"

NODE *dl;
int Inisys(){
    NODE *s;
    char *sc, *ec;
    int sty, stm, sta, ety, etm, eta, pr, qu;
    dl = (NODE *)malloc(sizeof(NODE));
    dl->next = NULL ;
    #ifdef ABLEINIT
    scanf("%c", sc);
    scanf("%c", ec);
    scanf("%c", st);
    scanf("%c", et);
    scanf("%c", pr);
    scanf("%c", qu);
    #else
    sc = (char *)"BeiJing";
    ec = (char *)"ShenZhen";
    sty = 2022;
    stm = 11;
    sta = 12;
    eta = 2022;
    etm = 11;
    eta = 12;
    pr = 799 ;
    qu = 999 ;
    #endif
    s = (NODE *)malloc(sizeof(NODE));
    s->stear = sc ;
    s->enear = ec ;
    s->styear = sty;
    s->stmouth = stm;
    s->stdata = sta;
    s->etyear = ety;
    s->etmouth = etm;
    s->etdata = eta;
    s->Price = pr ;
    s->quantity = qu ;
    s->next = dl->next;
    dl->next = s ;

return 1;
}

int InitList( char *sc, char *ec, int sty, int stm, int sta, int ety, int etm, int eta, int pr, int qu){
    NODE *s;
    dl = (NODE *)malloc(sizeof(NODE));
    dl->next = NULL ;
    s = (NODE *)malloc(sizeof(NODE));
    s->stear = sc ;
    s->enear = ec ;
    s->styear = sty;
    s->stmouth = stm;
    s->stdata = sta;
    s->etyear = ety;
    s->etmouth = etm;
    s->etdata = eta;
    s->Price = pr ;
    s->quantity = qu ;
    s->next = dl->next;
    dl->next = s ;

return 1;
}

// NODE *Getelem(char *sc, char *ec){
//     NODE *p = dl ;
//     if(p->next == NULL){
//         printf("init default\n");
//         assert(1);
//     }
//     char ps = (char)p->next; char scc = (char)sc; char ecc = (char)ec;
//     while(p->next != NULL) {
//         if((ps == scc) && (ps == ecc)){
//             break;
//         }
//         p = p->next ;        
//     }

//     // Log(p->stear, p->enear, p->sttime, p->entime, p->Price, p->quantity);
// return p;
// }

NODE *Getnumber(int n){
    int j = 0;
    NODE* s;
    s = dl;
    if(dl->next == NULL){
        printf("init default\n");
        assert(1);
    }
    while((s->next != NULL) && (n > j)){     
        s = s->next;      
        j++;
    }
        //Log(s->stear, s->enear, s->styear, s->stmouth, s->stdata, s->etyear, s->etmouth, s->etdata, s->Price, s->quantity); 
        
return s;
}

int display(){
    NODE *g;
    g = dl;
    if(g->next == NULL){
        printf("init default\n");
        assert(1);
    }
    while(g->next != NULL) {
        g = g->next;
        Log(g->stear, g->enear, g->styear, g->stmouth, g->stdata, g->etyear, g->etmouth, g->etdata, g->Price, g->quantity);
    }
    return 1;
}

int change(char *sc, char *ec, int sty, int stm, int sta, int ety, int etm, int eta, int pr, int qu, int n){
    NODE *s;
    s = Getnumber(n);
    free(s->stear);
    free(s->enear);
    s->stear = sc;
    s->enear = ec;
    s->styear = sty;
    s->stmouth = stm;
    s->stdata = sta;
    s->etyear = ety;
    s->etmouth = etm;
    s->etdata = eta;
    s->Price = pr;
    s->quantity = qu;
return 1;
}

int Push(char *sc, char *ec, int sty, int stm, int sta, int ety, int etm, int eta, int pr, int qu){
    NODE *a;
    a = (NODE *)malloc(sizeof(NODE));
    a->stear = sc;
    a->enear = ec;
    a->styear = sty;
    a->stmouth = stm;
    a->stdata = sta;
    a->etyear = ety;
    a->etmouth = etm;
    a->etdata = eta;
    a->Price = pr;
    a->quantity = qu;
    a->next = dl->next;
    dl->next = a;

    Log(a->stear, a->enear, a->styear, a->stmouth, a->stdata, a->etyear, a->etmouth, a->etdata, a->Price, a->quantity);

return 1;
}

int Pop(int n){
    NODE *q, *p;
    q = Getnumber(n);
    p = Getnumber(n-1);
    p->next = q->next;
    free(q->stear);
    free(q->enear);
    free(q);
    return 1;
}

