# MiniC Test Cases

Functional and performance test cases for MiniC compiler.

## Cloning and Building this Repo

Please run the following command lines:

```
$ git clone --recursive https://github.com/pku-minic/minic-test-cases.git
$ make DESC_GEN=path/to/descgen.py -j8
```

The `make` command will generate an archive of all test cases, which located in `build/testcases.tar.gz`.
