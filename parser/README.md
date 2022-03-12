Instructions by the LVA-team:

"Für das Parser-Beispiel legen Sie Dateien der Form *.[012] an, wobei die Extension angibt, welchen exit-Status parser bei dieser Eingabe liefern sollen. Wenn Sie also eine Datei mit einem Syntax-Fehler anlegen, sollte sie z.B. "test.2" heißen."

Make sure all tests for the parser are located in ~/test/parser. They will be ran automatically by the main test file when calling /usr/ftp/pub/ubvl/test/parser/test.

When creating new tests, please use the following naming convention: {name}_{number}.{type} e.g. Coccho_3.1 in order to avoid conflicts.