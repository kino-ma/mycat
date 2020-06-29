OBJS := cat.o
RANDOM_LEN := 1000000

default: cat

cat: $(OBJS)

random:
	base64 < /dev/urandom | head -c $(RANDOM_LEN) > random.txt

clean:
	rm cat $(OBJS) *.txt

.PHONY: default clean random
