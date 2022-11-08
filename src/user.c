//-----------------------------------------------------------------------//
// Author   : GuoqiLi                                                    //
// Data     : 2022,11,8                                                  //
// describe : user module                                                //
//-----------------------------------------------------------------------//
#include "./include/Link.h"
#include "./include/commont.h"
#include <stdio.h>
#include "./include/ioe.h"

#define TRUE  1
#define INR  3

int do_user(){
    int x;
    int j;
    printf("Dear USER usear what you wwant to do\n");
    printf("One: buy Train ticket!\n")     ;
    printf("two: quit!\n")  ;
    printf("three: in root!\n")  ;
    scanf("please input you want do:%d",&x);
    if(x == TRUE){
        peintf_();
        display(dl);
        peintf_();
        scanf("which one you want buy:%d", &j);
        Getnumber(dl, j); 
        EduPrjl = USER;
    }
    else if(x == INR) {
      EduPrjl = ROOT;  
    }
        
}