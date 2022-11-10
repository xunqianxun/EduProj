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
    char sc, ec;
    int st, et, pr, qu;
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
    sc = 'a';
    ec = 'b';
    st = 830 ;
    et = 1330;
    pr = 799 ;
    qu = 999 ;
    #endif
    s = (NODE *)malloc(sizeof(NODE));
    s->stear = sc ;
    s->enear = ec ;
    s->sttime = st ;
    s->entime = et ;
    s->Price = pr ;
    s->quantity = qu ;
    s->next = dl->next;
    dl->next = s ;

return 1;
}

int InitList( char sc, char ec, int st, int et, int pr, int qu){
    NODE *s;
    dl = (NODE *)malloc(sizeof(NODE));
    dl->next = NULL ;
    s = (NODE *)malloc(sizeof(NODE));
    s->stear = sc ;
    s->enear = ec ;
    s->sttime = st ;
    s->entime = et ;
    s->Price = pr ;
    s->quantity = qu ;
    s->next = dl->next;
    dl->next = s ;

return 1;
}

NODE *Getelem(char sc, char ec){
    NODE *p = dl ;
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

NODE *Getnumber(int n){
    int j;
    NODE* s;
    s = dl;
    if(dl->next == NULL){
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

int display(){
    if(dl->next == NULL){
        assert(1);
        printf("init default\n");
    }
    while(dl->next != NULL) {
        {Log(dl->stear, dl->enear, dl->sttime, dl->entime, dl->Price, dl->quantity);}
    }
    return 1;
}

int change(char sc, char ec, int st, int et, int pr, int qu, int n){
    NODE *s;
    s = Getnumber(n);
    s->stear = sc;
    s->enear = ec;
    s->sttime = st;
    s->entime = et;
    s->Price = pr;
    s->quantity = qu;
return 1;
}

int Push(char sc, char ec, int st, int et, int pr, int qu){
    NODE *a;
    a = (NODE *)malloc(sizeof(NODE));
    a->stear = sc;
    a->enear = ec;
    a->sttime = st;
    a->entime = et;
    a->Price = pr;
    a->quantity = qu;
    a->next = dl->next;
    dl->next = a;

return 1;
}

int Pop(int n){
    NODE *q, *p;
    q = Getnumber(n);
    p = Getnumber(n-1);
    p->next = q->next;
    free(q);
    return 1;
}

