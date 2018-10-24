CC = gcc
CFLAGS = -Wall -g -std=c99
LDFLAGS = -lm

# $^ -> List of pre-requisites, excluding duplicate elements
# $@ -> Target filename
circle: circle.o functions.o
	$(CC) $(LDFLAGS) -o $@ $^

# $< -> First prerequiste
circle.o: circle.c
	$(CC) $(LDFLAGS) -o $@ -c $<

functions.o: functions.c
	$(CC) $(LDFLAGS) -o $@ -c $<

clean:
	rm circle
