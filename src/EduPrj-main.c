//-----------------------------------------------------------------------//
// Author   : GuoqiLi                                                    //
// Data     : 2022,11,8                                                  //
// describe : EduPrj entrance                                            //
//-----------------------------------------------------------------------//
#include "commont.h"
#include <stdio.h>

int main(int argc, char *argv){
    InitLogo();

#ifdef MODE_FIRST
    initsys();
#else 
    Inisys(dl);
#endif

    while(EduPrjl != QUICK){
        switch (EduPrjl)
        {
        case ROOT:
            do_root();
            break;
        case USER:
            do_user();
            break;
        default:;
            break;
        }
    }

    closesys();
    

return 1;
}