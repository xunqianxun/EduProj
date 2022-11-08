//-----------------------------------------------------------------------//
// Author   : GuoqiLi                                                    //
// Data     : 2022,11,8                                                  //
// describe : EduPrj entrance                                            //
//-----------------------------------------------------------------------//
#include "./include/commont.h"
#include "./include/Link.h"
#include "./include/root.h"
#include "./include/user.h"
#include "stdio.h"

int main(int argc, char *argv){
    logo();

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