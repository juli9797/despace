# d e s p a c e

I hate whitespaces in filenames.

This tool removes them.

## Requirements

* g++ with C++20 support
* make

## Installation

Clone the directory:

```
$ git clone https://github.com/juli9797/despace
```

Change directory:

```
$ cd despace
```

Build and install:

```
$ make install
```

## Usage

Just supply a list of files to *DESPACE*:

```console
$ ls
filewithoutspace.exe  'file with space. exe'   folderwithoutspace  'folder with space'
$ despace *
filewithoutspace.exe	->	[nothing to do...]
'file with space. exe'	->	filewithspace.exe
folderwithoutspace	->	[nothing to do...]
'folder with space'	->	folderwithspace
$ ls
filewithoutspace.exe  filewithspace.exe  folderwithoutspace  folderwithspace
```
