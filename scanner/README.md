# scanner tests

Here are a couple of tests files that test the scanner with the framework 
provided by the LVA.

## Usage

We assume here that a `make` in the folder `~/abgabe/scanner` will create a 
binary called `scanner` (as wanted by the assignment).

1. Copy the files from this directory into `~/test/scanner` _(this is already the case if you have followed the instructions on the main page)_
2. Run the tests with: `/usr/ftp/pub/ubvl/test/scanner/test`

## Contribution

To write your own tests, follow the instructions given by the LVA team:

> Beim Scanner-Beispiel legen Sie für korrekte Eingaben Dateien mit Namen der 
> Form *.0 an, und für die zugehörigen Ausgaben Dateien mit Namen der Form 
> *.out; für Eingabendateien mit lexikalischen Fehlern legen Sie Dateien mit 
> Namen der Form *.1 an.

When creating new tests, please use the following naming convention: 
`{username}_{number}.{type}` 
(e.g. `Coccho_03.1`), in order to avoid conflicts.

If you add test please consider pushing them upstream with a PR so that other 
students can benefit from them 😉
