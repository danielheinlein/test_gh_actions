[![coverage badge](https://img.shields.io/badge/dynamic/xml?url=https://danielheinlein.github.io/test_gh_actions/coverage/index.html&query=/html/body/table[1]/tr[3]/td/table/tr[2]/td[7]&label=coverage)](https://danielheinlein.github.io/test_gh_actions/coverage/)

This project demonstrates the usage of github actions to

- run [cmake](https://cmake.org/) to configure, compile, test
- the last step includes coverage (without third party software, hence the custom badge from (shields.io)[https://shields.io/] currently without green = success etc. colors)
- [address sanitizer](https://github.com/google/sanitizers/wiki/AddressSanitizer), [leak sanitizer](https://github.com/google/sanitizers/wiki/AddressSanitizerLeakSanitizer), [undefined behavior sanitizer](https://clang.llvm.org/docs/UndefinedBehaviorSanitizer.html)
- creation of [doxygen](https://doxygen.nl/) documentation
- use [valgrind](https://valgrind.org/)/[cachegrind](https://valgrind.org/docs/manual/cg-manual.html) to count performance statistics (note that github actions run virtualized)
- publishing to github pages

Find the documentation here: https://danielheinlein.github.io/test_gh_actions/main_8cpp.html

and the coverage report here: https://danielheinlein.github.io/test_gh_actions/coverage/

and the performance statistics here: https://danielheinlein.github.io/test_gh_actions/cachegrind/cachegrind.txt
