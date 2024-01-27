.PHONY: clean all loopd loops recursives recursived

all: mains maindrec maindloop loopd loops recursives recursived

clean:
	rm -f *.a *.o *.so maindloop maindrec mains loopd loops recursives recursived



mains: main.o libclassrec.a
	gcc -Wall -g -o mains main.o libclassrec.a

maindloop: main.o libclassloops.so
	gcc -Wall -g -o maindloop main.o ./libclassloops.so -lm

maindrec: main.o libclassrec.so
	gcc -Wall -g  -o maindrec main.o ./libclassrec.so -lm




loops: libclassloops.a
	

recursives: libclassrec.a
	

loopd: libclassloops.so
	

recursived: libclassrec.so
	



libclassloops.a: main.o basicClassification.o advancedClassificationLoop.o
	ar rcs libclassloops.a main.o basicClassification.o advancedClassificationLoop.o

libclassrec.a: main.o basicClassification.o advancedClassificationRecursion.o
	ar rcs libclassrec.a main.o basicClassification.o advancedClassificationRecursion.o

libclassrec.so: main.o basicClassification.o advancedClassificationRecursion.o
	gcc -Wall -fPIC -shared -o libclassrec.so main.o basicClassification.o advancedClassificationRecursion.o

libclassloops.so: main.o basicClassification.o advancedClassificationLoop.o
	gcc -Wall -fPIC -shared -o libclassloops.so main.o basicClassification.o advancedClassificationLoop.o



main.o: NumClass.h
basicClassification.o: NumClass.h
advancedClassificationLoop.o: NumClass.h
advancedClassificationRecursion.o: NumClass.h






