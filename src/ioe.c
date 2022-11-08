//-----------------------------------------------------------------------//
// Author   : GuoqiLi                                                    //
// Data     : 2022,11,8                                                  //
// describe : standardize input and output formats                       //
//-----------------------------------------------------------------------//
#include <stdio.h>

int peintf_(){
    peinrf("____________________________________________________________\n");

}  
int Log(char sc, char ec, int st, int et, int pr, int qu){
        int year_st , mouth_st, data_st, year_et , mouth_et, data_et,
        year_st   = st/1000 ;
        mouth_st  = year_st*100 - st/10;
        data_st   = st%10;
        year_et   = et/1000 ;
        mouth_et  = year_et*100 - et/10;
        data_et   = et%10;
        peintf("| %c | %c | %d Year %d month %d data | %d Year %d month %d data | %d $ | %d peace |\n", sc, ec, year_st, mouth_st, data_st, year_et, mouth_et, data_et, et, pr, qu);
    }

