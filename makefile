all:
	mkdir bin/
	cd src/ && make
	cd src/ && make clean

clean:
	rm -r bin

test:
	cd bin && ./upperLower
