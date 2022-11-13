//-----------------------------------------------------------------------//
// Author   : GuoqiLi                                                    //
// Data     : 2022,11,8                                                  //
// describe : root module                                                //
//-----------------------------------------------------------------------//
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "commont.h"

#define MAX 999 //一刀999， 是兄弟，来啃我

enum{ONE = 1, TWO, THREE, FOUR, FIVE};
int do_root(){

    time_t t = time(NULL);

    struct tm *dt = localtime(&t);

    int xnumb =0;
    printf("Dear ROOT usear what you wwant to do\n");
    printf("One: add Train number!\n")     ;
    printf("two: delete Train number!\n")  ;
    printf("three: modify Train number!\n");
    printf("four: quit root!\n")    ;
    printf("five: end the program!\n")    ;
    printf("please input you want do:\n");
    scanf("%d", &xnumb);
    switch (xnumb)
    {
    case ONE:
        char *sc1; char *ec1;
        sc1 = (char *)malloc(8);
        ec1 = (char *)malloc(8);
        peintf_();
        display();
        peintf_();
        printf("please input need add your ear:\n");
        scanf("%s", sc1);
        printf("please input need add you want to go:\n");
        scanf("%s", ec1);
        Push(sc1, ec1, dt->tm_year+1900, dt->tm_mon+1, dt->tm_mday, dt->tm_year+1900, dt->tm_mon+1, dt->tm_mday, 245, MAX);
        EduPrjl = ROOT;
        break;
    case TWO:
        int s2;
        peintf_();
        display();
        peintf_();
        printf("please input need delete number:"); 
        scanf("%d", &s2);
        Pop(s2);
        EduPrjl = ROOT;
        break;
    case THREE:
        int n3 ;
        peintf_();
        display();
        peintf_();
        printf("please input you want change number:");
        scanf("%d", &n3);
        char *sc3; char *ec3;
        sc3 = (char *)malloc(8);
        ec3 = (char *)malloc(8);
        printf("please input need change ear:\n");
        scanf("%s", sc3);
        printf("please input need change you want to go:\n");
        scanf("%s", ec3);
        change(sc3, ec3, dt->tm_year+1900, dt->tm_mon+1, dt->tm_mday, dt->tm_year+1900, dt->tm_mon+1, dt->tm_mday, 245, MAX, n3);
        EduPrjl = ROOT;
        break;
    case FOUR:
        EduPrjl = MAIN_GUR;
        break;
    case FIVE:
        EduPrjl = QUICK; 
        break;
    
    default:;
        break;
    }
}