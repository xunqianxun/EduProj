//-----------------------------------------------------------------------//
// Author   : GuoqiLi                                                    //
// Data     : 2022,11,8                                                  //
// describe : user module                                                //
//-----------------------------------------------------------------------//
#include "commont.h"
#include <stdio.h>


int do_user(){
    int x;
    int j;
    NODE *p;
    printf("Dear USER usear what you wwant to do\n");
    printf("One: buy Train ticket!\n")     ;
    printf("two: quit!\n")  ;
    printf("three: in root!\n")  ;
    scanf("please input you want do:%d",&x);
    if(x == 1){
        peintf_();
        display();
        peintf_();
        scanf("which one you want buy:%d", &j);
        p = Getnumber(j); 
        Log(p->stear, p->enear, p->sttime, p->entime, p->Price, p->quantity);
        EduPrjl = USER;
    }
    else if(x == 3) {
      EduPrjl = ROOT;  
    }
        
}