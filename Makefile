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
GCCFLAGS= -Wall -o
BUILDDIR=build/
TARGET=EduPrj

main.o:EduPrj-main.c
	$(CC) -c EduPrj-main.c $(GCCFLAGS) $(BUILDDIR)main.o
file.o:file.c
	$(CC) -c file.c $(GCCFLAGS) $(BUILDDIR)file.o
ioe.o:ioe.c
	$(CC) -c ioe.c $(GCCFLAGS) $(BUILDDIR)ioe.o
Link.o:Link.c
	$(CC) -c Link.c $(GCCFLAGS) $(BUILDDIR)Link.o
logo.o:logo.c
	$(CC) -c logo.c $(GCCFLAGS) $(BUILDDIR)logo.o
root.o:root.c
	$(CC) -c root.c $(GCCFLAGS) $(BUILDDIR)root.o
user.o:user.c
	$(CC) -c user.c $(GCCFLAGS) $(BUILDDIR)user.o

run: main.o file.o ioe.o Link.o logo.o root.o user.o
	$(cc) $(BUILDDIR)main.o $(BUILDDIR)file.o $(BUILDDIR)ioe.o $(BUILDDIR)Link.o $(BUILDDIR)logo.o $(BUILDDIR)root.o $(BUILDDIR)user.o -o $(TARGET)
	./$(TARGET)
	$(COLOR_GRE) EduPrj Work Successfully!! $(COLOR_ENG)

git:
	git add .
	git commit -m"up my build and change"

clean:
	rm *.o $(TARGET) -rf