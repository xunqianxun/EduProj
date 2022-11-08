//-----------------------------------------------------------------------//
// Author   : GuoqiLi                                                    //
// Data     : 2022,11,8                                                  //
// describe : root module                                                //
//-----------------------------------------------------------------------//
#include "./include/Link.h"
#include <stdio.h>
#include <./include/commont.h>
#include "./include/ioe.h"

enum{ONE = 1, TWO, THREE, FOUR, FIVE};
int do_root(){
    int x;
    printf("Dear ROOT usear what you wwant to do\n");
    printf("One: add Train number!\n")     ;
    printf("two: delete Train number!\n")  ;
    printf("three: modify Train number!\n");
    printf("four: quit root!\n")    ;
    printf("five: end the program!\n")    ;
    scanf("please input you want do:%d", &x);
    switch (x)
    {
    case ONE:
        char sc, ec;
        int st,et,pr,qu;
        scanf("please input need add infomention:%c %c %d %d %d %d %d", &sc, &ec, &st, &et, &pr, &qu);
        Push(dl, char sc, char ec, int st, int et, int pr, int qu);
        break;
    case TWO:
        char sc, ec;
        int st,et,pr,qu;
        scanf("please input need delete infomention:%c %c %d %d %d %d %d", &sc, &ec, &st, &et, &pr, &qu);
        Pop(dl, char sc, char ec, int st, int et, int pr, int qu);
        break;
    case THREE:
        break;
    case FOUR:
        break;
    case FIVE:
        break;
    
    default:;
        break;
    }
}