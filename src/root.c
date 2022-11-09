//-----------------------------------------------------------------------//
// Author   : GuoqiLi                                                    //
// Data     : 2022,11,8                                                  //
// describe : root module                                                //
//-----------------------------------------------------------------------//
#include <stdio.h>
#include "commont.h"

enum{ONE = 1, TWO, THREE, FOUR, FIVE};
int do_root(){
    int x;
    printf("Dear ROOT usear what you wwant to do\n");
    printf("One: add Train number!\n")     ;
    printf("two: delete Train number!\n")  ;
    printf("three: modify Train number!\n");
    printf("four: quit root!\n")    ;
    printf("five: end the program!\n")    ;
    printf("please input you want do:");
    // scanf("%d", &x);
    switch (x)
    {
    case ONE:
        char sc1, ec1;
        int st1,et1,pr1,qu1;
        scanf("please input need add infomention:%c %c %d %d %d %d %d", &sc1, &ec1, &st1, &et1, &pr1, &qu1);
        Push(dl, sc1, ec1, st1, et1, pr1, qu1);
        EduPrjl = ROOT;
        break;
    case TWO:
        int s2;
        printf("please input need delete number:"); 
        // scanf("%d", &s);
        Pop(dl, s2);
        EduPrjl = ROOT;
        break;
    case THREE:
        int n3 ;
        printf("please input you want change number:");
        // scanf("%d", &n);
        char sc3, ec3;
        int st3,et3,pr3,qu3;
        scanf("please input need delete infomention:%c %c %d %d %d %d %d", &sc3, &ec3, &st3, &et3, &pr3, &qu3);
        change(dl, sc3, ec3, st3, et3, pr3, qu3, n3);
        EduPrjl = ROOT;
        break;
    case FOUR:
        EduPrjl = USER;
        break;
    case FIVE:
        EduPrjl = QUICK;
        break;
    
    default:;
        break;
    }
}