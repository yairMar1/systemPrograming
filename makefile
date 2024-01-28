.PHONY: clean all loopd loops recursives recursived

all: mains maindrec maindloop loopd loops recursives recursived

clean:
	rm -f *.a *.o *.so maindloop maindrec mains loopd loops recursives recursived
# Cleaning all the files we created


#The four directories (static and dynamic) with the main
mains: main.o libclassrec.a
	gcc -Wall -g -o mains main.o libclassrec.a

maindloop: main.o libclassloops.so
	gcc -Wall -g -o maindloop main.o ./libclassloops.so -lm

maindrec: main.o libclassrec.so
	gcc -Wall -g  -o maindrec main.o ./libclassrec.so -lm


#The target names they requested, in the assignment for the libraries
loops: libclassloops.a
	

recursives: libclassrec.a
	

loopd: libclassloops.so
	

recursived: libclassrec.so
	


#Creating the static and dynamic libraries
libclassloops.a: main.o basicClassification.o advancedClassificationLoop.o
	ar rcs libclassloops.a main.o basicClassification.o advancedClassificationLoop.o

libclassrec.a: main.o basicClassification.o advancedClassificationRecursion.o
	ar rcs libclassrec.a main.o basicClassification.o advancedClassificationRecursion.o

libclassrec.so: main.o basicClassification.o advancedClassificationRecursion.o
	gcc -Wall -fPIC -shared -o libclassrec.so main.o basicClassification.o advancedClassificationRecursion.o

libclassloops.so: main.o basicClassification.o advancedClassificationLoop.o
	gcc -Wall -fPIC -shared -o libclassloops.so main.o basicClassification.o advancedClassificationLoop.o


#The four basic files we created
main.o: NumClass.h main.c
	gcc -Wall -c -o main.o main.c
basicClassification.o: NumClass.h
advancedClassificationLoop.o: NumClass.h
advancedClassificationRecursion.o: NumClass.h






