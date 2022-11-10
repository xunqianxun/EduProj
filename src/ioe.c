//-----------------------------------------------------------------------//
// Author   : GuoqiLi                                                    //
// Data     : 2022,11,8                                                  //
// describe : standardize input and output formats                       //
//-----------------------------------------------------------------------//
#include <stdio.h>

int peintf_(){
    printf("____________________________________________________________\n");

}  
int Log(char sc, char ec, int st, int et, int pr, int qu){
        int year_st , mouth_st, data_st, year_et , mouth_et, data_et;
        year_st   = st/1000 ;
        mouth_st  = year_st*100 - st/10;
        data_st   = st%10;
        year_et   = et/1000 ;
        mouth_et  = year_et*100 - et/10;
        data_et   = et%10;
        printf("| beijing| shenzhen | 2022 Year 3 month 21 data | 2022Year 3 month 22 data | 1221$ |  9999 |\n");
    }

