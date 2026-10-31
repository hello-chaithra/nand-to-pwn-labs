# nand-to-pwn
 
Every week I build one project that combines concepts I learnt from **CS50x** (high-level programming, C, algorithms, memory, web) and **nand2tetris** (how a computer is built from logic gates up).

[![Nand to Tetris Part 1 certificate](https://img.shields.io/badge/Nand%20to%20Tetris%20Part%201-Certificate-0056D2?style=for-the-badge&logo=coursera)](https://www.coursera.org/account/accomplishments/verify/FOLH62O2MEO0)
[![Nand to Tetris Part 2 certificate](https://img.shields.io/badge/Nand%20to%20Tetris%20Part%202-Certificate-0056D2?style=for-the-badge&logo=coursera)](https://www.coursera.org/account/accomplishments/verify/455HQMFTIS3I)
## How this repo works
 
- **One folder for each mini project.** CS50x and nand2tetris both ask students not to publish their solutions, so problem sets and course chips live in a private repo. This repo contains only my own builds with the concepts they use.
- **Each build's README lists** what it does, the CS50x concepts used, the nand2tetris concepts used, and what I would improve.

## Mini Builds
 
| S.No | Build | Week | CS50x concepts | nand2tetris concepts | Status |
|---|-------|------|----------------|----------------------|--------|
| 01 | **Kosmos**: textstats | Oct 31 to Nov 8 | C basics (week 0-1) | Logic gates (project 1) | In progress |
| 02 | **Dash**: sorting benchmark | Nov 9 to 15 | Arrays, algorithms (weeks 2-3) | Adders, the ALU, memory (projects 2-3) | Planned |
| 03 | **Linus**: data-structure library | Nov 16 to 22 | Memory (weeks 4-5) | Machine language, the CPU (projects 4-5) | Planned |
| 04 | **Rover**: assembler and SQL tracker | Nov 23 to 29 | Python, SQL (weeks 6-7) | The Hack assembler (project 6) | Planned |
| 05 | **Flint**: Flask with a Spark | Nov 30 to Dec 6 | HTML, CSS, JavaScript, Flask (weeks 8-9) | Virtual machine translator (projects 7-8) | Planned |
 
## Pwn My Own Apps

The `pwn-my-own-apps/` folder is where "nand-to-pwn" gets its pwn. I take the web apps I built in **Rover** (build 04) and **Flint** (build 05), attack them myself, fix what breaks, and attack again to check the fix holds.

Each round follows the same loop: **Attack:** find and exploit a weakness, and record the exact steps, **Explain:** write down why it worked, in terms of concepts and **Fix:** patch the code and run the same exploit against the fixed version.

## Tools
 
C (clang, make), Python, SQL, Flask, the nand2tetris hardware simulator and HDL, Git and GitHub, Linux terminal.

## Credits

I sincerely thank the educators for the free, world-class material that made this journey possible:

- [CS50x](https://cs50.harvard.edu/x/), Harvard University, taught by David J. Malan and the CS50 team
- [nand2tetris](https://www.nand2tetris.org/), Noam Nisan and Shimon Schocken, authors of *The Elements of Computing Systems*
- [OverTheWire](https://overthewire.org/wargames/), for the wargames that make learning security fun

All course material belongs to its authors. This repo contains only my own builds and the concepts they use.
