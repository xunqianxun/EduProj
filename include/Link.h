#ifndef LINK_H_
#define LINK_H_

typedef char EarType ;
typedef int TimeType ;
typedef struct lnode{
EarType stear ;
EarType enear ;
TimeType sttime ;
TimeType entime ;
int Price ;
int quantity ;
struct lnode *next ;
}NODE;


int InitList(char sc, char ec, int st, int et, int pr, int qu);
NODE *Getelem(char sc, char ec);
int display();
int Inisys();
NODE *Getnumber(int n);
int change(char sc, char ec, int st, int et, int pr, int qu, int n);
int Push(char sc, char ec, int st, int et, int pr, int qu);
int Pop(int n);




#endif
