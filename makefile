

CC = gcc

SOURCES = $(wildcard *.c)
PROGRAMS = $(SOURCES:.c=)


all: $(PROGRAMS)
	@for program in $(PROGRAMS); do									\
		echo "running program $$program";							\
		echo "--------------------------------------------------";	\
		./$$program;												\
		echo "--------------------------------------------------";	\
	done


%: %.c
	@echo "program $@ compilation"
	$(CC) $< -Wall --pedantic -o $@

.PHONY: clean

clean:
	@-rm -rf $(PROGRAMS)
