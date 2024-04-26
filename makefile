CC = g++
CFLAGS = -O3 -std=c++17
TARG = chess

DEPS = chess.o piece.o pawn.o knight.o bishop.o

$(TARG): $(DEPS)
	$(CC) $(CFLAGS) -o $@ $(DEPS)

chess.o: chess.cpp 
	$(CC) $(CFLAGS) -c -o $@ $<

piece.o: ./source/piece.cpp ./header/piece.h
	$(CC) $(CFLAGS) -c -o $@ $<

pawn.o: ./source/pawn.cpp ./header/pawn.h
	$(CC) $(CFLAGS) -c -o $@ $<

knight.o: ./source/knight.cpp ./header/knight.h
	$(CC) $(CFLAGS) -c -o $@ $<

bishop.o: ./source/bishop.cpp ./header/bishop.h
	$(CC) $(CFLAGS) -c -o $@ $<

clean:
	rm -rf *.o *Q1