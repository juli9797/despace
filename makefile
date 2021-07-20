
despace: main.cpp
	g++ main.cpp -o despace
install: despace
	cp despace /bin/
clean:
	rm -f despace

