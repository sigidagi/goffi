.PHONY: build clean

build:
	@echo "Compiling Go source"
	go build -buildmode=c-shared -o libtest.a libtest.go
	@echo ""
	@echo "Compiling C++ main executable"
	g++ main.cpp -L. -ltest -o main

clean:
	@echo "Cleaning up workspace"
	@rm libtest.h
	@rm libtest.a
	@rm main
