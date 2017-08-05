FC=gcc -c
LD=gcc
SRC=fx.c simp.c period.c main.c
OBJ=fx.o simp.o period.c main.o
all:	simp run plot
simp:
	$(FC) $(SRC)
	$(LD) $(OBJ) -o simp.x -lm
	rm -rf *.o
clean:
	rm -rf *.o simp.x
run:
	./simp.x
plot:
	gnuplot plot.gp

