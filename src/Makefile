PROGRAM = paintball
CC      = gcc
ZAST    = -g -std=c99 -Wall -L/usr/X11R6/lib -L/usr/pkg/lib
PROG    = main.c utility.c callback.c  global.c 
ZAV     = utility.h callback.h global.h
BIBL    = -lglut -lGLU -lGL -lm

$(PROGRAM): $(PROG) $(ZAV)
	$(CC) $(ZAST) -o $(PROGRAM) $(PROG) $(BIBL)

.PHONY: run makerun clean

run:
	./$(PROGRAM) &

makerun:
	make
	make run

clean:
	rm -f *~ 
