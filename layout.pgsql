dgm-lang/
├── CMakeLists.txt
├── include/
│   ├── lexer.h
│   ├── parser.h
│   ├── ast.h
│   ├── codegen.h
│   ├── runtime.h
│   ├── dgm_pass.h
├── src/
│   ├── lexer.cpp
│   ├── parser.cpp
│   ├── ast.cpp
│   ├── codegen.cpp
│   ├── runtime.c
│   ├── driver.cpp
│   ├── dgm_pass.cpp
├── grammar/
│   └── DGM.ebnf
├── examples/
│   ├── hello.dgm
│   ├── safe_add.dgm
│   ├── tuple_test.dgm
│   ├── parallel.dgm
├── tests/
│   ├── run_examples.sh
│   └── ci.yml   # GitHub Actions CI
└── docs/
    └── MAPPING.md   # Full 144-entry DGM ↔ LLVM IR mapping table
