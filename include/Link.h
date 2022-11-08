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
PNODE Getelem(PNODE L, char sc[8], char ec[8]);
int display(PNODE L);
NODE *Inisys(NODE *L);
int Getnumber(PNODE L, int n);
int Push(PNODE L, char sc, char ec, int st, int et, int pr, int qu);
int Pop(PNODE L, char sc, char ec, int st, int et, int pr, int qu);

NODE *dl;
#endif
