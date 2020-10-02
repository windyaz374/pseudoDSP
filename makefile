CC = gcc
CFLAGS = -c -Wall

all: chuoipseudo

chuoipseudo: main.o chuoix1.o chuoix2.o xuat.o modul.o d2b.o
	$(CC) -o chuoipseudo main.o chuoix1.o chuoix2.o xuat.o modul.o d2b.o

main.o: main.c chuoi.h
	$(CC) $(CFLAGS) main.c

chuoix1.o: chuoix1.c chuoi.h
	$(CC) $(CFLAGS) chuoix1.c

chuoix2.o: chuoix2.c chuoi.h
	$(CC) $(CFLAGS) chuoix2.c

xuat.o: xuat.c chuoi.h
	$(CC) $(CFLAGS) xuat.c

modul.o: modul.c chuoi.h
	$(CC) $(CFLAGS) modul.c

d2b.o: d2b.c chuoi.h
	$(CC) $(CFLAGS) d2b.c

clean:
	rm -rf *o chuoipseudo