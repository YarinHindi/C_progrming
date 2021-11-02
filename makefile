
<<<<<<< HEAD
all: loops loopd recursives recursived mains maindloop maindrec
=======
all: loopd recursived loops recursives mains maindloop maindrec mainsloop
>>>>>>> 406043f31164ccbdf88224c41950a0da584a1832
maindrec: main.o
	gcc -Wall -g -o maindrec main.o ./libclassrec.so
maindloop: main.o 
	gcc -Wall -g -o maindloop main.o ./libclassloops.so
mains: main.o libclassrec.a
	gcc -Wall -g -o mains main.o libclassrec.a 
<<<<<<< HEAD
	
=======
mainsloop: main.o libclassrec.a
	gcc -Wall -g -o mainsloop main.o libclassloops.a -lm
>>>>>>> 406043f31164ccbdf88224c41950a0da584a1832
loopd: libclassloops.so
recursived: libclassrec.so
loops: libclassloops.a
recursives: libclassrec.a
<<<<<<< HEAD

=======
>>>>>>> 406043f31164ccbdf88224c41950a0da584a1832
libclassloops.so: advancedClassificationLoop.o basicClassification.o
	gcc -shared -o libclassloops.so advancedClassificationLoop.o basicClassification.o
libclassrec.so: advancedClassificationRecursion.o basicClassification.o
	gcc -shared -o libclassrec.so advancedClassificationRecursion.o basicClassification.o
libclassrec.a: advancedClassificationRecursion.o basicClassification.o
	ar -rcs libclassrec.a advancedClassificationRecursion.o basicClassification.o
libclassloops.a: advancedClassificationLoop.o basicClassification.o
	ar -rcs libclassloops.a advancedClassificationLoop.o basicClassification.o
advancedClassificationRecursion.o: advancedClassificationRecursion.c NumClass.h
	gcc -Wall -g -c advancedClassificationRecursion.c
advancedClassificationLoop.o: advancedClassificationLoop.c NumClass.h
	gcc -Wall -g -c advancedClassificationLoop.c
basicClassification.o: basicClassification.c NumClass.h
	gcc -Wall -g -c basicClassification.c 
main.o : main.c NumClass.h
	gcc -Wall -g -c main.c

.PHONY: clean all

clean:
	rm -f *.o *.a *.so mains maindloop maindrec
