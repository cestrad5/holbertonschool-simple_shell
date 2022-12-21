


>Simple Shell
>---
**File descripción**
 ---
This program will interpret the general behaviors of a shell executing the main commands of a simple shell.

**Compilation**
---
to compile we have to use these flags.
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o hsh

**Example**
---
- **interactive mode**

$ ./hsh
($) ls -la

    total 60
    drwxrwxrwx 1 zapata_camilo zapata_camilo  4096 Dec 21 15:25 .
    drwxrwxrwx 1 zapata_camilo zapata_camilo  4096 Dec 16 12:35 ..
    -rwxrwxrwx 1 zapata_camilo zapata_camilo   321 Dec 15 11:30 fork.c
    -rwxrwxrwx 1 zapata_camilo zapata_camilo   158 Dec 19 16:03 main.h
    -rwxrwxrwx 1 zapata_camilo zapata_camilo 16456 Dec 16 15:33 pr
    -rwxrwxrwx 1 zapata_camilo zapata_camilo 16424 Dec 21 15:25 shell
    -rwxrwxrwx 1 zapata_camilo zapata_camilo   686 Dec 21 15:24 simpleShell.c
    -rwxrwxrwx 1 zapata_camilo zapata_camilo 16136 Dec 16 16:36 stats
    -rwxrwxrwx 1 zapata_camilo zapata_camilo   571 Dec 16 17:02 stats.c

($)
- **non-interactive mode**

$ echo "/bin/ls" | ./hsh

    fork.c  main.h  pr  shell  simpleShell.c  stats  stats.c
$

>---
**flowchart**
 - First flowchart
	<img src= https://blogger.googleusercontent.com/img/b/R29vZ2xl/AVvXsEisr5URAupB5cmsVMs2RpUoEw2aCmGM9b-Yk4BWBdkS1wdufTttC_LBkmt0N5BwhTj6uPnUUbSbJaPg_PvL19pPCoOBw7sQw1XtzdqlG2i8m4UOoKqjnqmXuVVT0pySfuAiX2n8Xo4tFlIFOX4RCRQgsQVwcsfbDky23leJHJdBjdt_gwpWsI6EGOdByA/s1325/simpleShell.jpg>
---
 - Second flowchart
	<img src = https://blogger.googleusercontent.com/img/b/R29vZ2xl/AVvXsEha868A8BtN8sQZTbavrMDwCDdS4WnKGmyJKOfyVpL8dyWYFpSN2LMRea0yvmKjAyBLqz88j6XY20azKtqxx0Ys3QBWqfnXUtq7u6JzVbkh2JYnw_Q9Yd_7ONXTuFTGVQ2_BkM_UBLsfqb8SKvULRir5IAf0WkR8W6R3yC8PjMm1xTs3NnRuWLNfPQi4A/s2901/Diagrama%20de%20flujo%20shell%20-%20Corriente.jpeg>
---
**Authors**
 
 - <a href = "https://github.com/cestrad5">Camilo Estrada<a>
 - <a href = "https://github.com/ZapataCamilo">Camilo Zapata<a>

