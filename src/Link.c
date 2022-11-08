//-----------------------------------------------------------------------//
// Author   : GuoqiLi                                                    //
// Data     : 2022,11,8                                                  //
// describe : build this project  LinkList                               //
//-----------------------------------------------------------------------//

#include <stdio.h>
#include <assert.h>
#include "./include/commont.h"
#include "./include/Link.h"
#include "./include/ioe.h"

NODE *Inisys(NODE *L){
    NODE *s;
    char sc, ec;
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
    sc = "BeiJing";
    ec = "ShenZhen";
    st = 830 ;
    et = 1330;
    pr = 799 ;
    qu = 999 ;
    #endif
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

PNODE Getelem(PNODE L, char sc[8], char ec[8]){
    NODE *p = L->next ;
    if(p->next == NULL){
        assert(1);
        printf("init default\n");
    }
    while((p->next != NULL) && (p->stear == sc) && (p->enear == ec)) {
        p = p->next ;
    }
    if(p->next == NULL){printf("can`t fand the ear\n");}
    Log(p->stear, p->enear, p->sttime, p->entime, p->Price, p->quantity);
return p;
}

int Getnumber(PNODE L, int n){

}

int display(PNODE L){
    if(L->next == NULL){
        assert(1);
        printf("init default\n");
    }
    while(L->next != NULL) {
        {Log(L->stear, L->enear, L->sttime, L->entime, L->Price, L->quantity);}
    }
    return 1;
}

int Push(PNODE L, char sc, char ec, int st, int et, int pr, int qu){
    NODE *a;
    a = (NODE *)malloc(sizeof(NODE));
    a->stear = sc;
    a->enear = ec;
    a->sttime = st;
    a->entime = et;
    a->Price = pr;
    a->quantity = qu;
    a->next = L->next;
    L->next = a;

return 1;
}

int Pop(PNODE L, char sc, char ec, int st, int et, int pr, int qu){
    NODE *q;
    if(L->next = NULL){
       printf("this List init default\n");
       assert(1);
    }
    while(L->next != NULL){
        if((L->stear == sc) && (L->enear == ec) && (L->sttime == st) && (L->entime == et) && (L->Price == pr) && (L->quantity == qu)){
            q = L->next;
            L->next = q->next;
            Log(q->stear, q->enear, q->sttime, q->entime, q->Price, q->quantity)
        }
    }
    return 1;
}
