all : statictest sharetest rdynamic

statictest : main.c
	gcc -I./lib -L./lib main.c -o statictest -lstest

sharetest : main.c
	gcc -I./lib -L./lib main.c -o sharetest -ldtest

rdynamic : dltest.c
	gcc -rdynamic dltest.c -o rdynamictest -ldl

clean : 
	rm -f *.o
