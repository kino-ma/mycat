OBJS := cat.o

default: cat

cat: $(OBJS)

clean:
	rm cat $(OBJS) *.txt

.PHONY: default clean
