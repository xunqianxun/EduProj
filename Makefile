#-----------------------------------------------------------------------#
# Author   : GuoqiLi                                                    #
# Data     : 2022,11,8                                                  #
# describe : build this project                                         #
#-----------------------------------------------------------------------#
COLOR_RED := $(shell echo "\033[1;31m")
COLOR_END := $(shell echo "\033[0m")
COLOR_GRE := $(shell echo "\033[1;32m")
COLOR_ENG := $(shell echo "\033[0m")

ifeq ($(wildcard src/EduPrj-main.c),)
$(warning $(COLOR_RED)Warning: EduPrj-main.c does not exists!$(COLOR_END))
endif

CC=gcc
GCCFLAGS= -o
BUILDDIR=./build/
SRCDIR=./src/
INFLAGS= -I include/
TARGET=EduPrj

EduPrj-main.o:$(SRCDIR)EduPrj-main.c
	$(CC) -c $(SRCDIR)EduPrj-main.c $(GCCFLAGS) $(BUILDDIR)EduPrj-main.o $(INFLAGS)
file.o:$(SRCDIR)file.c
	$(CC) -c $(SRCDIR)file.c $(GCCFLAGS) $(BUILDDIR)file.o $(INFLAGS)
ioe.o:$(SRCDIR)ioe.c
	$(CC) -c $(SRCDIR)ioe.c $(GCCFLAGS) $(BUILDDIR)ioe.o $(INFLAGS)
Link.o:$(SRCDIR)Link.c
	$(CC) -c $(SRCDIR)Link.c $(GCCFLAGS) $(BUILDDIR)Link.o $(INFLAGS)
logo.o:$(SRCDIR)logo.c
	$(CC) -c $(SRCDIR)logo.c $(GCCFLAGS) $(BUILDDIR)logo.o $(INFLAGS)
root.o:$(SRCDIR)root.c
	$(CC) -c $(SRCDIR)root.c $(GCCFLAGS) $(BUILDDIR)root.o $(INFLAGS)
user.o:$(SRCDIR)user.c
	$(CC) -c $(SRCDIR)user.c $(GCCFLAGS) $(BUILDDIR)user.o $(INFLAGS)

run: Link.o ioe.o file.o user.o root.o logo.o  EduPrj-main.o 
	$(CC) $(BUILDDIR)EduPrj-main.o $(BUILDDIR)file.o $(BUILDDIR)ioe.o $(BUILDDIR)Link.o $(BUILDDIR)logo.o $(BUILDDIR)root.o $(BUILDDIR)user.o -o $(TARGET)
	./$(TARGET)
	$(COLOR_GRE) EduPrj Work Successfully!! $(COLOR_ENG)

git:
	git add .
	git commit -m"up my build and change"

clean:
	rm -rf $(BUILDDIR)*.o
	rm $(BUILDDIR)$(TARGET)