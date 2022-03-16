scanner tests
---

To be able to test your scanner implementation, this directory must be located under `~/test/scanner`. If you have followed the instructions in the `README.md` for the root directory, this should already be the case.

Run this command to test your implementation with the official test script and test cases from this repository:
```
/usr/ftp/pub/ubvl/test/parser/test
```

## Contribution

To write your own tests, follow the instructions given by the LVA team:

> "Beim Scanner-Beispiel legen Sie für korrekte Eingaben Dateien mit Namen der Form *.0 an, und für die zugehörigen Ausgaben Dateien mit Namen der Form *.out; für Eingabendateien mit lexikalischen Fehlern legen Sie Dateien mit Namen der Form *.1 an."

When creating new tests, please use the following naming convention: `{username}_{number}.{type}` (e.g. `Coccho_3.1`), in order to avoid conflicts.
