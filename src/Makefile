CC=gcc
CFLAGS= -I -std=c11 -Wall -Werror

all: Kamui

Kamui: cs50.c cs50.h Kamui.c
	$(CC) $(CFLAGS) cs50.c Kamui.c -o test_version

clean:
	del /f *.o 