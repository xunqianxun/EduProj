//-----------------------------------------------------------------------//
// Author   : GuoqiLi                                                    //
// Data     : 2022,11,8                                                  //
// describe : build this project  LinkList                               //
//-----------------------------------------------------------------------//

#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#include "commont.h"



NODE *Inisys(NODE *L){
    NODE *s;
    char sc[8], ec[8];
    int st, et, pr, qu;
    L = (NODE *)malloc(sizeof(NODE));
    L->next = NULL ;
    #ifdef ABLEINIT
    scanf("%c", sc);
    scanf("%c", ec);
    scanf("%c", st);
    scanf("%c", et);
    scanf("%c", pr);
    scanf("%c", qu);
    #else
    sc[8] = "BeiJing";
    ec[8] = "ShenZhen";
    st = 830 ;
    et = 1330;
    pr = 799 ;
    qu = 999 ;
    #endif
    s = (NODE *)malloc(sizeof(NODE));
    s->stear[8] = sc[8] ;
    s->enear[8] = ec[8] ;
    s->sttime = st ;
    s->entime = et ;
    s->Price = pr ;
    s->quantity = qu ;
    s->next = L->next;
    L->next = s ;

return L;
}

PNODE InitList(NODE *L, char sc, char ec, int st, int et, int pr, int qu){
    NODE *s;
    L = (NODE *)malloc(sizeof(NODE));
    L->next = NULL ;
    s = (NODE *)malloc(sizeof(NODE));
    s->stear[8] = sc ;
    s->enear[8] = ec ;
    s->sttime = st ;
    s->entime = et ;
    s->Price = pr ;
    s->quantity = qu ;
    s->next = L->next;
    L->next = s ;

return L;
}

PNODE Getelem(PNODE L, char sc, char ec){
    NODE *p = L ;
    if(p->next == NULL){
        assert(1);
        printf("init default\n");
    }
    while(p->next != NULL) {
        if((p->stear == sc) && (p->enear == ec)){
            break;
        }
        p = p->next ;        
    }

    // Log(p->stear, p->enear, p->sttime, p->entime, p->Price, p->quantity);
return p;
}

PNODE Getnumber(PNODE L, int n){
    int j;
    NODE* s;
    s = L;
    if(L->next == NULL){
        assert(1);
        printf("init default\n");
    }
    while((s->next != NULL) && (n > j)){
        s = s->next;
        j++;
    }
    // Log(s->stear, s->enear, s->sttime, s->entime, s->Price, s->quantity);
return s;
}

int display(PNODE L){
    if(L->next == NULL){
        assert(1);
        printf("init default\n");
    }
    while(L->next != NULL) {
        {Log(L->stear[8], L->enear[8], L->sttime, L->entime, L->Price, L->quantity);}
    }
    return 1;
}

int change(PNODE L, char sc, char ec, int st, int et, int pr, int qu, int n){
    NODE *s;
    s = Getnumber(dl, n);
    s->stear[8] = sc;
    s->enear[8] = ec;
    s->sttime = st;
    s->entime = et;
    s->Price = pr;
    s->quantity = qu;
return 1;
}

int Push(PNODE L, char sc, char ec, int st, int et, int pr, int qu){
    NODE *a;
    a = (NODE *)malloc(sizeof(NODE));
    a->stear[8] = sc;
    a->enear[8] = ec;
    a->sttime = st;
    a->entime = et;
    a->Price = pr;
    a->quantity = qu;
    a->next = L->next;
    L->next = a;

return 1;
}

int Pop(PNODE L, int n){
    NODE *q, *p;
    q = Getnumber(dl, n);
    p = Getnumber(dl, n-1);
    p->next = q->next;
    free(q);
    return 1;
}

