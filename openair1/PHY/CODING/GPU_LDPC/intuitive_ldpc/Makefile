NVCC = nvcc
CFLAGS = 
PROF = nvprof
exec = ldpc
file = channel_output.txt 
OBJS = util.o
code = 8448

.PHONY: clean debug


## Target-specific Variable Values
debug: CFLAGS += -Ddebug -g -G
debug: clean $(exec) 
	cuda-gdb -q --args $(exec) -l $(code) -f $(file)

$(exec): $(exec).cu $(OBJS)
	$(NVCC) $(CFLAGS) -o $@ $^

%.o: %.cu
	$(NVCC) $(CFLAGS) -o $@ -c $<

run: clean $(exec)
	./$(exec) -l $(code) -f $(file)

prof: clean $(exec)
	$(PROF) ./$(exec) -l $(code) -f  $(file)

test: clean $(exec)
	./check.sh $(code)
	rm $(OBJS) $(file)

clean:
	rm -rf *.o test.* $(exec) CN* BN* log.txt channel_output.txt
