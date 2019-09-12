EXEC = gen_idx
TXT = gen_matrix.txt
DEBUG = debug

gen: clean gen_idx.c
	$(CC) $(EXEC).c -o $(EXEC) -g

ldpc: clean ldpc.cu 
	nvcc ldpc.cu -o ldpc -g -G
	mkdir debug

test: ldpc
	./check.sh

cgdb: clean ldpc
	cuda-gdb --silent --args ldpc test_input.txt

.PHONY: clean
clean:
	$(RM) -rf $(DEBUG) $(EXEC) $(TXT) ldpc log.txt channel_output.txt
