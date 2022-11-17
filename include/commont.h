#ifndef COMMONT_H_
#define COMMONT_H_

#include "ioe.h"
#include "Link.h"
#include "file.h"


//#define MODE_FIRST
//#define ABLEINIT
enum{ROOT, USER, MAIN_GUR, QUICK};
extern int EduPrjl;


int do_root();
int do_user();
int main_gur();
int InitLogo();


#endif