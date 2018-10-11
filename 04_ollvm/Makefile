all:
	make ollvm-build
	make main


main: calc.o main.o
	gcc -o bin/main obj/calc.o obj/main.o
calc.o: src/calc.c
	gcc -c src/calc.c -o obj/calc.o
main.o: src/main.c inc/calc.h
	gcc -c src/main.c -Iinc -o obj/main.o


clean:
	rm bin/*
	rm obj/*


ollvm-build:
	~/src/obfuscator-llvm/build/bin/clang src/* -Iinc -o bin/main-ollvm -mllvm -fla -mllvm -split -mllvm -split_num=3 -mllvm -sub -mllvm -sub_loop=1 -mllvm -bcf -mllvm -bcf_loop=1 -mllvm -bcf_prob=100

.PYONY: clean, ollvm-build, all, main
