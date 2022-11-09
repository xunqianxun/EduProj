#ifndef LINK_H_
#define LINK_H_

typedef char EarType ;
typedef int TimeType ;
typedef struct {
EarType stear[8] ;
EarType enear[8] ;
TimeType sttime ;
TimeType entime ;
int Price ;
int quantity ;
struct NODE *next ;
}NODE, *PNODE ;

PNODE InitList(NODE *L, char sc, char ec, int st, int et, int pr, int qu);
PNODE Getelem(PNODE L, char sc, char ec);
int display(PNODE L);
NODE *Inisys(NODE *L);
PNODE Getnumber(PNODE L, int n);
int change(PNODE L, char sc, char ec, int st, int et, int pr, int qu, int n);
int Push(PNODE L, char sc, char ec, int st, int et, int pr, int qu);
int Pop(PNODE L, int n);

NODE *dl;

#endif
