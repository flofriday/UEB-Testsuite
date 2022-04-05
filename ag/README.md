# parser tests

Here are a couple of tests files that test the parser with the framework 
provided by the LVA.

# Usage

We assume here that a `make` in the folder `~/abgabe/parser` will create a 
binary called `parser` (as wanted by the assignment).

1. Copy the files from this directory into `~/test/parser` _(this is already the case if you have followed the instructions on the main page)_
2. Run the tests with: `/usr/ftp/pub/ubvl/test/parser/test`

# Contribution

To write your own tests, follow the instructions given by the LVA team:

> Für das Parser-Beispiel legen Sie Dateien der Form *.[012] an, wobei die 
> Extension angibt, welchen exit-Status parser bei dieser Eingabe liefern sollen. 
> Wenn Sie also eine Datei mit einem Syntax-Fehler anlegen, sollte sie z.B. 
> "test.2" heißen.

When creating new tests, please use the following naming convention: 
`{username}_{number}.{type}` 
(e.g. `Coccho_03.1`), in order to avoid conflicts.

If you add tests please consider pushing them upstream with a PR so that other 
students can benefit from them 😉

<!--

    _
   / \
   |-|
   | |           Already got a parser?
   |U|
   |E|        Let's go to the moooooooooon!
   |B|
  /| |\
 / | | \
|  | |  |
 `_"""_`

-->
