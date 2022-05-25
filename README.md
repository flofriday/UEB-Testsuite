# UEB-Testsuite

A testsuite for the [Übersetzterbau (Compilers)](https://tiss.tuwien.ac.at/course/courseDetails.xhtml?dswid=3349&dsrid=144&courseNr=185A48&semester=2022S&locale=en) at [TU Wien](https://www.tuwien.at/en/) 2022S.

## Usage

1. `git clone https://github.com/flofriday/UEB-Testsuite.git ~/test`
2. Run the tests as described in the individual test-suite folders for the tasks

Every exercise has its own folder with a README.md for instructions on how to
use its tests.

## Other Tipps
[Compiler Explorer (godbolt)](https://godbolt.org/z/PjP4r1GqP) is an amazing Website with which you can discover how different compilers translate code to machine instructions.

When compiling code generated with flex and `-Wall` you will get warnings that `input` and `yyunput` is unused. By adding the following lines to the top of the file you can fix those warnings.
```
%option noinput
%option nounput
```

There are two great videos on YouTube for an overview of [flex](https://www.youtube.com/watch?v=LpVufkH4gog&list=PLImMVrOC3KFn0US0AiW0JYLaU8mCtrqG0&index=7) and [bison](https://www.youtube.com/watch?v=fFRxWtRibC8&list=PLImMVrOC3KFn0US0AiW0JYLaU8mCtrqG0&index=13).

On [VoWi Übersetzterbau](https://vowi.fsinf.at/wiki/TU_Wien:%C3%9Cbersetzerbau_VU_(Ertl,_Krall)) are some solutions from past semesters which can be very helpfull in understanding, and learning from practial examples.

## Contributing

Contributions are very welcome, feel free to just create a PR.
You are awesome 😊🎉
