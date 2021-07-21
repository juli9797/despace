
despace: main.cpp
	g++ -std=c++20 main.cpp -o despace
install: despace
	cp despace /bin/
clean:
	rm -f despace

