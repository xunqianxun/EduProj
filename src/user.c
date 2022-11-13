/*-----------------------------------------------------------------------//
// Author   : GuoqiLi                                                    //
// Data     : 2022,11,8                                                  //
// describe : user module                                                //
//-----------------------------------------------------------------------*/
#include "commont.h"
#include <stdio.h>


int do_user(){
    int x;
    int j;
    NODE *p;
    while(1){
    printf("Dear USER usear what you wwant to do\n");
    printf("One: buy Train ticket!\n")     ;
    printf("two: quit!\n")  ;
    printf("three: in root!\n");
    printf("please input you want do:\n");
    scanf("%d", &x);
    if(x == 1){
        peintf_();
        display();
        peintf_();
        printf("which one you want buy\n");
        scanf("%d",&j);
        p = Getnumber(j);
        peintf_();
        Log(p->stear, p->enear, p->styear, p->stmouth, p->stdata, p->etyear, p->etmouth, p->etdata, p->Price, p->quantity);
        peintf_();
        EduPrjl = USER;
        break;
    }
    else if(x == 3) {
      EduPrjl = ROOT;  
      break;
    }
    else if(x == 2){EduPrjl = QUICK; break;}
    }
return 1;      
}

int main_gur(){
  char s;
  printf("              Who you are?                \n");
  printf("I`m user(u)                 I`m root(r)   \n");
  scanf("%c", &s);
  if(s == 'u'){
    EduPrjl = USER;
  }
  else if(s == 'r'){
    EduPrjl = ROOT;
  }
  else{EduPrjl = QUICK;}
return 1;
}