CC = gcc
CFLAGS  = -g -Wall
default: driveTest
driveTest: drive
	./drive
drive: add.o countInList.o countInMemory.o createList.o defragment.o displayFree.o displayInList.o displayInMemory.o doubleList.o doubleMemory.o freevar.o indexStart.o inFree.o pop.o prevFree.o push.o delete.o
	$(CC) $(CFLAGS) -o drive driver.c add.o countInList.o countInMemory.o createList.o defragment.o displayFree.o displayInList.o displayInMemory.o  doubleList.o doubleMemory.o freevar.o indexStart.o inFree.o pop.o prevFree.o push.o delete.o
add.o: add.h pop.h doubleMemory.h
	$(CC) $(CFLAGS) -c add.c
countInList.o: countInList.h
	$(CC) $(CFLAGS) -c countInList.c
countInMemory.o: countInList.h countInMemory.h
	$(CC) $(CFLAGS) -c countInMemory.c
createList.o: doubleList.h createList.h
	$(CC) $(CFLAGS) -c createList.c
defragment.o: inFree.h prevFree.h freevar.h indexStart.h push.h defragment.h
	$(CC) $(CFLAGS) -c defragment.c
delete.o: freevar.h push.h delete.h
	$(CC) $(CFLAGS) -c delete.c
displayFree.o: freevar.h displayFree.h
	$(CC) $(CFLAGS) -c displayFree.c
displayInList.o: displayInList.h
	$(CC) $(CFLAGS) -c displayInList.c
displayInMemory.o: displayInList.h displayInMemory.h
	$(CC) $(CFLAGS) -c displayInMemory.c
doubleList.o: doubleList.h
	$(CC) $(CFLAGS) -c doubleList.c
doubleMemory.o: freevar.h doubleMemory.h
	$(CC) $(CFLAGS) -c doubleMemory.c
freevar.o: freevar.h
	$(CC) $(CFLAGS) -c freevar.c
indexStart.o: indexStart.h
	$(CC) $(CFLAGS) -c indexStart.c
inFree.o: freevar.h inFree.h
	$(CC) $(CFLAGS) -c inFree.c
pop.o: freevar.h pop.h
	$(CC) $(CFLAGS) -c pop.c
prevFree.o: prevFree.h freevar.h
	$(CC) $(CFLAGS) -c prevFree.c
push.o: push.h freevar.h
	$(CC) $(CFLAGS) -c push.c
clean:
	rm *.o drive


