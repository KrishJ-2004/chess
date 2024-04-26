CC = g++
CFLAGS = -O3 -std=c++17
TARG = chess
#Change CS22B200 to your filename: CS22Bxyc-Labx-Q1.cpp 
DEPS = chess.o piece.o

$(TARG): $(DEPS)
	$(CC) $(CFLAGS) -o $@ $(DEPS)

chess.o: chess.cpp 
	$(CC) $(CFLAGS) -c -o $@ $<

piece.o: piece.cpp piece.h
	$(CC) $(CFLAGS) -c -o $@ $<

# GraphAdjList.o: GraphAdjList.cpp GraphAdjList.h
# 	$(CC) $(CFLAGS) -c -o $@ $<

clean:
	rm -rf *.o *Q1