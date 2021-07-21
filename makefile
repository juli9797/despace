
despace: main.cpp
	g++ -std=c++20 main.cpp -o despace
install: despace
	cp despace /usr/local/bin/
uinstall:
	rm -f /usr/local/despace
clean:
	rm -f despace

