# Task 1 Makefile

CFLAGS = -Wall -Wextra -Werror
EXECS = lower multiply sines

help:
	@echo "Task 1 Help:"
	@echo
	@echo "Enter 'make' followed by name of an executable"
	@echo "(Options are: $(EXECS))"
	@echo
	@echo "Remove all executables with 'make clean'"

lower: lower.o
	gcc $< -o $@

sines: sines.o
	gcc $< -o $@ -lm

multiply: multiply.o matrix.o
	gcc $^ -o $@

%.o: %.c
	gcc $(CFLAGS) -c $<

clean:
	@rm -f *.o
	@rm -f $(EXECS)
	@rm -rf $(patsubst %,%.dSYM,$(EXECS))   # for clang on Macs

.PHONY: clean help
