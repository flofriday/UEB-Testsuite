# ag tests

Here are a couple of tests files that test the ag with the framework 
provided by the LVA.

# Usage

We assume here that a `make` in the folder `~/abgabe/ag` will create a 
binary called `ag` (as wanted by the assignment).

1. Copy the files from this directory into `~/test/ag` _(this is already the case if you have followed the instructions on the main page)_
2. Run the tests with: `/usr/ftp/pub/ubvl/test/ag/test`

# Contribution

To write your own tests, follow the instructions given by the LVA team:

> Für das AG-Beispiel legen Sie Dateien der Form *.[0123] an, wobei die 
> Extension angibt, welchen exit-Status ag bei dieser Eingabe liefern sollen. 
> Bei einem lexikalischen Fehler soll der Fehler- status 1 erzeugt werden, bei einem Syntaxfehler Fehlerstatus 2, bei anderen Fehlern der Fehlerstatus 3.

When creating new tests, please use the following naming convention: 
`{username}_{number}.{type}` 
(e.g. `Coccho_03.1`), in order to avoid conflicts.

If you add tests please consider pushing them upstream with a PR so that other 
students can benefit from them 😉

<!--

    _
   / \
   |-|
   | |           Already got the ag?
   |U|
   |E|        Let's go to the moooooooooon!
   |B|
  /| |\
 / | | \
|  | |  |
 `_"""_`

-->
