# Kosmos: textstats

A command-line tool that reports the lines, words and characters of a text.
Build 01 of nand-to-pwn-labs (in line with CS50x weeks 0-1, nand2tetris project 1).

## Status

- [x] Version 1: count lines, words and chars from a file
- [ ] Version 2: stdin, `--help`, most common letter (improved)
- [ ] Version 3: gate mode (`nand`-built gates, `--parity`, `--bits N`)

## Build

```
make
make clean
```

Compiled with `-Wall -Wextra -Werror`.

## Usage

```
./textstats FILE
```

Prints:

```
lines: 2
words: 3
chars: 6
```

Exit code 1 with a message on stderr if the file is missing or cannot be opened.

## How word counting works

An `in_word` flag flips to true on the first non-space character and back to
false on whitespace. A word is counted only on the false-to-true transition,
so repeated spaces never inflate the count. Characters are read with `fgetc`
into an `int` because `EOF` is -1 and must not collide with a valid byte.

## Tests

Sample inputs live in `tests/`. Compare against `wc` (lines, words, bytes).