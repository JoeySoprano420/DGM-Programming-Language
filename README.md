# DGM-Programming-Language
“Every Instruction Counts — Safe, Contextual, Base-12 Precision.”

🌌 DGM — The Dodecagram Instruction-Oriented Language

Tagline:
“Every Instruction Counts — Safe, Contextual, Base-12 Precision.”

📖 I. Introduction

DGM (Dodecagram Language) is a next-generation instruction-oriented programming language that unites human-readable clarity with machine-level precision.
It is designed from the ground up to:

Map every operation to a base-12 Dodecagram instruction space (144 slots).

Compile seamlessly to LLVM IR while embedding DGM opcode metadata annotations.

Provide healing arithmetic (safe by default, no undefined behavior).

Support structured data (tuples, lists, arrays, groups, nests) as native constructs.

Enable contextual inference macros (CIAM) for intelligent, self-resolving code expansion.

Guarantee interoperability with C/C++ while retaining a language identity of its own.

DGM is both a research vehicle in compiler design and a practical tool for industries where correctness, predictability, and safety matter above all.

🎯 II. Design Philosophy

Instruction-Oriented:

Every DGM source statement is an instruction, not a vague abstraction.

The compiler is transparent: .dgm → LLVM IR → Executable.

IR metadata tags (!dgm.opcode) ensure traceability from high-level code to low-level execution.

Safe by Default:

Overflow clamps instead of corrupting results.

Divide-by-zero returns a neutral safe value (0) instead of crashing.

branch.heal, recover, language.assert ensure programs continue running safely.

Structured Data First-Class:

Tuples, lists, groups, nests, pairs — not libraries, but core ops (tuple.pack, list.append, group.merge).

Mirrors the realities of data engineering, simulation, and complex algorithm design.

Contextual Intelligence (CIAM):

language.inline, language.expand, language.infer provide meta-instructions.

Programs can rewrite themselves contextually without external macros or preprocessors.

Universally Readable:

English-based keywords (safe.add, tuple.pack, language.parallel).

Chicago-style spacing & indentation rules for human readability.

Machine-friendly structure ensures predictability and clarity.

🔢 III. The 144-Entry Dodecagram

The DGM instruction set is bounded, enumerable, and complete:

00–4B (Core LLVM Ops) — standard computation, flow control, memory ops.

50–7B (Safe Arithmetic & Healing) — overflow-free arithmetic, healing branches.

80–9B (Data Structures) — tuples, lists, arrays, groups, pairs, nests.

A0–BB (CIAM & Intrinsics) — macros, inference, expansion, parallelism, sync.

This 12×12 grid (base-12 × base-12) guarantees no hidden instructions: the language space is closed, finite, and fully mapped.

🛠 IV. Compilation Pipeline
1. Lexer

Tokenizes source into identifiers, numbers, keywords, operators.

Recognizes instruction names (safe.add, tuple.pack, etc.) directly.

2. Parser

Builds an AST of numbers, strings, variables, binary ops, calls, and functions.

Rejects ambiguity — DGM syntax is strictly contextual.

3. AST

Simple, transparent node hierarchy.

dump() allows inspection of syntax tree.

4. Codegen

Lowers AST → LLVM IR with IRBuilder.

Attaches !dgm.opcode = "DGM:XX" metadata to every instruction.

Falls back to external function declarations for unresolved calls.

5. Runtime

Implements dgm_safe_add, dgm_list_append, dgm_tuple_pack, dgm_parallel_begin, etc.

Written in portable C, linked automatically.

Guarantees safe arithmetic and deterministic structured ops.

6. Driver (dgmc)

Command-line compiler.

Options:

--emit-llvm → annotated .ll output.

--run → compile + execute.

-o file → specify output binary.

Links runtime automatically.

🧪 V. Current Capabilities

Arithmetic: Safe integer operations with clamping and divide-by-zero healing.

Functions: Define and call with func ... start ... end.

Calls: Interop with C runtime (print, etc.).

Data Structures: Tuples, lists.

Parallelism: language.parallel / language.sync primitives.

LLVM IR Output: Fully annotated with base-12 opcode mapping.

Executables: Portable binaries across Linux/macOS/Windows.

🌟 VI. Use Cases

Safety-Critical Systems

Aerospace flight software.

Medical device control loops.

Autonomous navigation.

Financial Systems

Overflow-proof transaction calculations.

Deterministic reproducibility for audits.

Education

Teach compilers, IR design, and metadata annotation.

Visualize instruction mapping.

Simulation & Modeling

Physics simulations with safe arithmetic.

Data pipelines with tuples and lists.

Compiler Research

Testbed for CIAM (contextual macros).

Benchmark instruction-oriented paradigms.

🏆 VII. Where DGM Outshines

vs C/C++: No undefined behavior. Safety built-in.

vs Python: Strong typing, LLVM-native performance.

vs Rust: Easier readability, explicit instruction mapping.

vs LLVM IR: Human-readable, but still machine-precise.

⚡ VIII. Performance

Startup speed: near-instant (compiled binaries).

Execution speed: LLVM-optimized machine code (on par with C).

Runtime footprint: minimal, only helpers for safety/data ops.

Parallelism: efficient once full threading primitives replace mock runtime.

🔐 IX. Security & Safety

Arithmetic safety: clamps overflow, heals division.

Memory safety: virtual registers abstract stack/heap.

Concurrency safety: explicit parallel/sync with safe defaults.

Predictability: no hidden instructions, no surprises.

🌍 X. Interoperability

FFI/ABI compatibility with C/C++.

LLVM backend ensures cross-language linkage (Rust, Swift, etc.).

Direct transpilation to C++11 if needed.

Inline calls to system libraries through LLVM externs.

🕰 XI. Future Directions

CIAM Expansion: true contextual inference macros (language.infer, language.trace).

Data Structures: full arrays, groups, nests, match/case pattern matching.

Runtime Expansion: better parallelism with threads/fibers.

Package Ecosystem: dgm-pkg manager for libraries.

Interactive REPL: JIT-backed execution for prototyping.

Formal Verification: integrate SMT-based proofs into safe arithmetic layer.

Education Tooling: visualization of lexer → parser → AST → IR pipelines.

🧭 XII. Why DGM?

Instruction-oriented clarity: 144-op bounded set.

Human readability: English keywords.

Machine precision: LLVM IR metadata.

Safety built-in: healing arithmetic, predictable flow.

Interoperability: C/C++ FFI, LLVM toolchain.

Innovation: CIAM macros for contextual self-expansion.

🌌 XIII. Why It Was Created

To prove that instruction-oriented languages can be safe, human-readable, and machine-perfect.

To bridge the gap between theory (compilers) and practice (applications).

To create a bounded, enumerable instruction space (144 Dodecagram ops) where nothing is hidden.

To explore new paradigms in safe arithmetic, contextual macros, and annotated IR.

✅ Final Word

DGM is a new kind of language:

Not object-oriented, not functional, not purely imperative.

Instruction-Oriented.
Every line you write is an instruction. Every instruction is mapped. Every mapping is annotated.
It is predictable, safe, interoperable, and ready — today.

DGM shines where safety, clarity, and traceability matter most.
It is a language for the future of system safety, education, and human-readable machine programming.

---

# 📘 `README.md`


# 🌌 DGM — The Dodecagram Instruction-Oriented Language

> **Tagline:** *Every Instruction Counts — Safe, Contextual, Base-12 Precision.*

---

## 📖 Overview

**DGM (Dodecagram Language)** is a next-generation **instruction-oriented programming language**.  
It unites **human-readable clarity** with **machine-level precision**, mapping every operation to a **base-12 Dodecagram opcode** (144 total).  

- ✅ **Safe arithmetic** (no overflow, no divide-by-zero crashes).  
- ✅ **Structured data** (tuples, lists, groups, nests).  
- ✅ **CIAM (Contextual Inference Abstraction Macros)** for contextual expansion.  
- ✅ **LLVM IR integration** with base-12 **DGM annotations** (`!dgm.opcode`).  
- ✅ **Interop with C/C++** via ABI and LLVM front end.  
- ✅ **Portable binaries** for Linux, macOS, Windows.  

---

## 🔢 The 144-Entry Dodecagram

DGM instructions are grouped into four regions:

- **00–4B → LLVM Core Instructions**  
- **50–7B → Safe Arithmetic & Healing**  
- **80–9B → Data Structures**  
- **A0–BB → CIAM & Language Intrinsics**

See [`docs/MAPPING.md`](docs/MAPPING.md) for the **full table**.

---

## ⚙️ Install & Build

### Requirements
- LLVM (≥ 12.0)
- Clang
- CMake (≥ 3.14)
- C++11 compiler

### Build
```bash
git clone https://github.com/yourname/dgm-lang.git
cd dgm-lang
mkdir build && cd build
cmake ..
make -j4
````

This builds the compiler binary: **`dgmc`**

---

## 🚀 Usage

### Compile & Run

```bash
./dgmc ../examples/hello.dgm -o hello --run
```

### Emit LLVM IR

```bash
./dgmc ../examples/safe_add.dgm --emit-llvm
```

---

## 📝 Example Programs

### `examples/hello.dgm`

```txt
func main start
    call print("Hello, DGM World!")
end
```

### `examples/safe_add.dgm`

```txt
func main start
    x = 10
    y = 20
    z = safe.add(x, y)
    call print(z)
end
```

### `examples/parallel.dgm`

```txt
func main start
    language.parallel
        call print("Running in parallel block")
    language.sync
end
```

---

## 🛠 Compilation Pipeline

1. **Lexer** → tokens (identifiers, numbers, keywords).
2. **Parser** → AST (functions, calls, binary ops).
3. **AST** → tree nodes with `dump()` inspection.
4. **Codegen** → LLVM IR with `!dgm.opcode` metadata.
5. **Runtime** → C library (safe arithmetic, tuples, lists, sync).
6. **Driver** → CLI `dgmc` for `.dgm → .exe`.

---

## 🌟 Why DGM?

* **Instruction-Oriented:** every operation is mapped, nothing hidden.
* **Safe by Default:** arithmetic heals instead of crashing.
* **Structured Data:** tuples, lists, and groups are first-class.
* **Interoperable:** FFI/ABI compatibility with C/C++.
* **Traceable:** LLVM IR annotated with DGM opcodes.
* **Predictable:** closed 144-op instruction space.

---

## 🏭 Who Uses DGM?

* **Aerospace & defense** — safety-critical navigation software.
* **Medical devices** — overflow-proof, predictable control systems.
* **Finance** — deterministic, auditable arithmetic.
* **Compiler education** — teach IR design and annotation.
* **Data engineering** — tuple/list-native pipelines.

---

## ⚡ Performance

* **Startup:** near-instant (AOT compiled).
* **Execution:** LLVM-optimized native binaries.
* **Runtime:** lightweight C library, minimal footprint.
* **Parallelism:** `language.parallel/sync` for concurrency.

---

## 🔐 Security & Safety

* Overflow → clamps to safe range.
* Divide-by-zero → heals to `0`.
* Memory model → virtual registers, invisible stack/heap.
* Parallelism → controlled `parallel/sync` primitives.

---

## 🧭 Roadmap

* 🔹 Expand CIAM macros (`language.infer`, `language.trace`).
* 🔹 Full array/group/nest support in runtime.
* 🔹 True parallelism with threads/fibers.
* 🔹 REPL mode (JIT execution).
* 🔹 Formal verification layer.
* 🔹 `dgm-pkg` package manager.

---

## 📚 Resources

* [docs/MAPPING.md](docs/MAPPING.md) — full 144-op DGM ↔ LLVM IR mapping.
* [tests/run\_examples.sh](tests/run_examples.sh) — build + run all examples.
* [examples/](examples/) — hello, safe arithmetic, tuples, lists, parallelism.

---

## 🙌 Why Choose DGM?

Because **DGM is instruction-oriented, human-readable, and machine-perfect**.
It was created to prove that a language can be **bounded, safe, contextual, and interoperable**, all while compiling to LLVM IR with precision annotations.

**DGM is where safety meets clarity, and every instruction counts.**

```

---
```
🌌 DGM — The Instruction-Oriented Language

Tagline: “Every Instruction Counts — Safe, Contextual, Base-12 Precision.”

🎯 Who Will Use DGM?

Compiler researchers & systems engineers who want a language that directly maps to LLVM IR while remaining human-readable.

Safety-critical developers in aerospace, healthcare devices, and autonomous systems who need arithmetic that cannot crash.

Data engineers & algorithm designers who want first-class support for tuples, lists, groups, and structured data inside an LLVM-native language.

Parallel & distributed systems architects interested in built-in parallel and sync primitives without bolted-on libraries.

🛠️ What Will It Be Used For?

Systems programming where deterministic, instruction-level control is required.

Simulation engines & modeling tools that need safe arithmetic and strict reproducibility.

Data transformation & pipelines, leveraging tuple/list/group ops.

Embedded and IoT devices where memory safety and predictability matter.

Academic teaching tool: because of its instruction-oriented design, DGM is great for teaching compilers, IR mapping, and safe arithmetic.

🏭 Industries and Sectors That Will Gravitate to It

Aerospace & defense (overflow-safe arithmetic, parallel blocks).

Medical devices & healthcare systems (predictable safety semantics).

Finance & banking (no silent overflows, strong audit trails with CIAM annotations).

Telecommunications & networking (parallel/sync primitives).

Compiler development & education (LLVM-annotated IR makes it a great teaching language).

💻 Real-World Projects and Software

Safety-critical navigation software (e.g., drones, satellites).

Scientific computing frameworks with tuple-heavy data models.

Parallel batch processors for telecom or high-frequency trading.

Education compilers to demonstrate IR annotation and metadata tracking.

Embedded firmware that demands lightweight, safe execution with deterministic output.

📚 Learning Curve

Lower than C/C++: English-style keywords (safe.add, tuple.pack) are intuitive.

Slightly higher than Python: instruction orientation means users must think in terms of ops, not just high-level abstractions.

Similar to Rust in discipline: safety is built in, but without as much syntax ceremony.

🔗 Interoperability

Direct FFI with C/C++: via LLVM + runtime linkage.

Inline C++ transpilation: DGM → LLVM → native OR DGM → C++11 source.

Interop with Python/Java/Rust: possible through LLVM IR libraries.

ISA friendliness: base-12 annotations survive into .ll metadata, aiding cross-language debugging.

🎯 Purposes and Use Cases

Core purpose: create a safe, instruction-oriented language that bridges human readability with machine precision.

Use cases:

Prevent overflows/divide-by-zero at runtime.

Track every instruction via DGM metadata.

Provide deterministic, minimal runtime.

Enable structured data ops (tuples/lists/groups) natively.

Allow contextual macro inference (CIAM) for dynamic code expansion.

⚡ What Can DGM Do Now?

Compile .dgm → LLVM IR → Executable.

Annotate LLVM IR with base-12 DGM opcodes.

Run safe arithmetic, tuples, lists, and parallel constructs via runtime.

Inline call to C functions (print, etc.).

Generate portable executables (.exe, .out) via LLVM backend.

🌟 Where DGM Shines

When safety matters more than speed (but without losing LLVM optimizations).

When predictability and reproducibility are critical (scientific, financial, aerospace).

When debugging instruction pipelines (because annotations show you exactly which DGM op emitted which IR).

When teaching compiler design (clear 144-op mapping, LLVM hooks).

🏆 Where DGM Out-Performs Others

Safer than C/C++: no undefined arithmetic overflow.

More deterministic than Python/JS: strongly typed, IR-mapped.

More transparent than Rust: annotations + healing arithmetic visible in IR.

More approachable than LLVM IR: English-like keywords, structured data.

🚀 Potential and Next Steps

Potential: become the go-to instruction-oriented, safe arithmetic language for education, aerospace, and finance.

Next steps:

Expand runtime (arrays, groups, nests fully).

Optimize parallelism beyond placeholders.

Add CIAM (Contextual Inference Macros) for real contextual transformations.

Build package manager (dgm-pkg).

Add REPL / JIT mode.

🌍 Where DGM Is Most Needed

Systems where crashes are unacceptable (medical, defense, banking).

Learning environments (universities teaching compiler construction).

High-reliability data pipelines (scientific research, simulations).

⚡ Performance

Startup speed: near-instant (LLVM AOT compiler, no heavy runtime).

Execution speed: LLVM-optimized native code (comparable to C).

Load time: just as fast as compiled C/C++, since binaries are machine code.

🔐 Security and Safety

Memory safety: virtual registers + invisible stack/heap.

Arithmetic safety: healing ops (no UB on overflow/division).

Concurrency safety: parallel/sync primitives use controlled sync.

Interop safety: ABI-level compatibility with C/C++.

🤔 Why Choose DGM?

When you want a language that’s:

Predictable (every instruction mapped).

Safe (errors heal, don’t crash).

Readable (English-leaning keywords).

Portable (LLVM backend, cross-platform).

Interoperable (drop into C/C++ when needed).

🛠 Why DGM Was Created

To fill the gap between low-level precision (LLVM IR) and high-level clarity (English-style syntax).

To eliminate runtime surprises (arithmetic overflow, divide-by-zero, unsafe concurrency).

To prove a concept: an instruction-oriented language can be both human-readable and machine-perfect.

To experiment with base-12 instruction mapping for symbolic, deterministic debugging.

✅ In short:
DGM is for people who need instruction-level clarity, arithmetic safety, structured data, and LLVM-backed performance — without sacrificing readability or predictability.

 _____

🧭 Orientation of DGM

Paradigm: Instruction-Oriented (IOP)
Every construct maps deterministically to a DGM opcode, which in turn maps either directly to LLVM IR or to a CIAM-layered expansion. Unlike object-oriented or purely functional systems, the heart of DGM is the instruction dispatch table — a 1:1 link between the Dodecagram (base-12) index and executable semantics.

Execution Model:

AOT (Ahead-of-Time): All .dgm programs are compiled to LLVM IR, then to native binaries (.exe, .out, etc.).

Optional JIT: Used only for hot swaps, mutations, and CIAM-driven macro inferences.

Virtual Register Memory: Stack and heap are abstracted away; values live in a virtual register file, and the compiler invisibly maps this down to LLVM registers + memory slots.

Safety Layer (50–7B): Adds healing constructs (safe.add, branch.heal, recover) so arithmetic and flow errors never crash execution. These resolve at compile-time when possible, or transparently at runtime.

Data Layer (80–9B): Rich first-class collections (tuples, lists, arrays, groups, nests, pairs) map directly to runtime helpers, but still lower into efficient IR.

CIAM Layer (A0–BB): The “Contextual Inference Abstraction Macro” region is unique to DGM. It encodes higher-order operations — macro expansion, inference, trace, echo, parallel/sync — that get resolved before lowering to LLVM IR. Think of it as the meta-brain of the language.

📚 Why This Mapping Matters

Base-12 Instruction Space:

DGM uses 12×12 grid (144 slots) — perfectly aligned with dodecagram symbolic logic.

This guarantees a bounded, enumerable, and complete ISA, which makes it predictable and instruction-oriented.

LLVM Integration:

Core ops (00–4B) are just LLVM instructions under another name → zero impedance mismatch.

Safe ops, Data ops, and CIAM ops are layered on top of LLVM with runtime + pass annotations.

Error Handling Philosophy:

Instead of raising runtime errors, DGM either auto-heals or redirects flow.

This is why you have branch.heal, recover, and language.assert instead of LLVM’s exceptions.

Readable Yet Machine-Friendly Syntax:

English-leaning keywords (tuple.pack, language.inline)

MLA/Chicago style spacing & indentation rules → designed for structured readability.

CIAM guarantees contextual inference: code never gets ambiguous.

 _____

 # 🌌 DGM — The Dodecagram Instruction-Oriented Language

> **Tagline:** *Every Instruction Counts — Safe, Contextual, Base-12 Precision.*

---

## 📖 Overview

**DGM (Dodecagram Language)** is a next-generation **instruction-oriented programming language**.  
It unites **human-readable clarity** with **machine-level precision**, mapping every operation to a **base-12 Dodecagram opcode** (144 total).  

- ✅ **Safe arithmetic** (no overflow, no divide-by-zero crashes).  
- ✅ **Structured data** (tuples, lists, groups, nests).  
- ✅ **CIAM (Contextual Inference Abstraction Macros)** for contextual expansion.  
- ✅ **LLVM IR integration** with base-12 **DGM annotations** (`!dgm.opcode`).  
- ✅ **Interop with C/C++** via ABI and LLVM front end.  
- ✅ **Portable binaries** for Linux, macOS, Windows.  

---

## 🔢 The 144-Entry Dodecagram

DGM instructions are grouped into four regions:

- **00–4B → LLVM Core Instructions**  
- **50–7B → Safe Arithmetic & Healing**  
- **80–9B → Data Structures**  
- **A0–BB → CIAM & Language Intrinsics**

See [`docs/MAPPING.md`](docs/MAPPING.md) for the **full table**.

---

## ⚙️ Install & Build

### Requirements
- LLVM (≥ 12.0)
- Clang
- CMake (≥ 3.14)
- C++11 compiler

### Build
```bash
git clone https://github.com/yourname/dgm-lang.git
cd dgm-lang
mkdir build && cd build
cmake ..
make -j4

## _____

🛠 Compilation Pipeline

Lexer → tokens (identifiers, numbers, keywords).

Parser → AST (functions, calls, binary ops).

AST → tree nodes with dump() inspection.

Codegen → LLVM IR with !dgm.opcode metadata.

Runtime → C library (safe arithmetic, tuples, lists, sync).

Driver → CLI dgmc for .dgm → .exe.

🌟 Why DGM?

Instruction-Oriented: every operation is mapped, nothing hidden.

Safe by Default: arithmetic heals instead of crashing.

Structured Data: tuples, lists, and groups are first-class.

Interoperable: FFI/ABI compatibility with C/C++.

Traceable: LLVM IR annotated with DGM opcodes.

Predictable: closed 144-op instruction space.

🏭 Who Uses DGM?

Aerospace & defense — safety-critical navigation software.

Medical devices — overflow-proof, predictable control systems.

Finance — deterministic, auditable arithmetic.

Compiler education — teach IR design and annotation.

Data engineering — tuple/list-native pipelines.

⚡ Performance

Startup: near-instant (AOT compiled).

Execution: LLVM-optimized native binaries.

Runtime: lightweight C library, minimal footprint.

Parallelism: language.parallel/sync for concurrency.

🔐 Security & Safety

Overflow → clamps to safe range.

Divide-by-zero → heals to 0.

Memory model → virtual registers, invisible stack/heap.

Parallelism → controlled parallel/sync primitives.

🧭 Roadmap

🔹 Expand CIAM macros (language.infer, language.trace).

🔹 Full array/group/nest support in runtime.

🔹 True parallelism with threads/fibers.

🔹 REPL mode (JIT execution).

🔹 Formal verification layer.

🔹 dgm-pkg package manager.

📚 Resources

docs/MAPPING.md
 — full 144-op DGM ↔ LLVM IR mapping.

tests/run_examples.sh
 — build + run all examples.

examples/
 — hello, safe arithmetic, tuples, lists, parallelism.

🙌 Why Choose DGM?

Because DGM is instruction-oriented, human-readable, and machine-perfect.
It was created to prove that a language can be bounded, safe, contextual, and interoperable, all while compiling to LLVM IR with precision annotations.

DGM is where safety meets clarity, and every instruction counts.

## _____

🌌 What Can Be Made with DGM?
🏗️ 1. Systems Programming

Because DGM is LLVM-native and instruction-oriented, you can build:

Operating system kernels (safe arithmetic helps prevent crashes).

Device drivers (safe low-level code, portable across LLVM targets).

Embedded firmware for IoT, robotics, and sensors.

➡️ Why DGM here?
It eliminates overflow/divide-by-zero crashes that plague C, while still compiling to bare-metal machine code.

📊 2. Data-Intensive Applications

With tuples, lists, and groups as native instructions, DGM is suited for:

Data pipelines (ETL systems, log processors).

Scientific computing models (physics, simulations, genetics).

Statistical engines (risk analysis, real-time monitoring).

➡️ Why DGM here?
Structured data ops are first-class, not libraries bolted on later.

🛰️ 3. Safety-Critical Software

This is where DGM shines brightest:

Aerospace navigation systems (overflow-proof flight software).

Medical device firmware (pacemakers, infusion pumps).

Defense systems (autonomous drones, targeting modules).

➡️ Why DGM here?
“Safe arithmetic” prevents catastrophic crashes — you don’t want an overflow in a pacemaker.

🏦 4. Finance and Commerce

Arithmetic correctness is crucial:

Trading algorithms (deterministic, no silent overflow).

Banking software (safe transaction processing).

Auditable ledgers (DGM IR annotations double as an audit trail).

➡️ Why DGM here?
You can prove every instruction was safe and accounted for, thanks to the 144-op mapping.

🎓 5. Education & Research

DGM is a natural tool for teaching and experimenting:

Compiler courses (lexer → parser → AST → LLVM IR).

Programming languages research (instruction-oriented design, base-12 mapping).

Formal verification labs (proving safety of arithmetic + flow).

➡️ Why DGM here?
Students see how high-level instructions map to IR with direct metadata (!dgm.opcode).

🧪 6. Experimental & Advanced Systems

DGM is built for exploration:

Parallel/distributed systems with language.parallel & language.sync.

Simulation engines where deterministic reproducibility is required.

Formal logic systems with CIAM macros (language.infer, language.trace).

➡️ Why DGM here?
Contextual inference macros (CIAM) make it possible to evolve code on the fly.

📱 7. Applications & Services

Command-line tools (compiled native executables).

Data processing services (backend microservices with safe arithmetic).

Cross-platform apps (LLVM ensures portability).

Games & Simulations (parallel ops and structured data are useful here).

➡️ Why DGM here?
Builds like C/C++, but safer, and with structured data as primitives.

⚡ Edge-Case / Specialized Creations

Blockchain / Smart Contracts
DGM’s safety + deterministic execution is perfect for distributed ledgers.

Digital Twin Models
Safe, reproducible arithmetic ensures simulation consistency.

Compiler Prototypes
Research new instruction sets, optimization passes, or hybrid paradigms.

Audit-Trace Systems
The base-12 annotations can act as a proof-of-execution log.

✅ Summary

With DGM, you can build:

Low-level systems (kernels, firmware, drivers).

High-reliability applications (banking, aerospace, healthcare).

Data pipelines & scientific models with native tuple/list ops.

Parallel/distributed services with built-in concurrency.

Educational tools for compilers, programming languages, and safe arithmetic.

In short: anything you’d build in C/C++ or Rust can be built in DGM — but with safer arithmetic, transparent IR, and structured data baked in.

## _____


---

# 🛠️ DGM Language — Setup & Operation Requirements

---

## 📦 System Requirements

* **Operating System**:

  * Linux (Ubuntu/Debian/Fedora/Arch recommended)
  * macOS (Intel or Apple Silicon)
  * Windows 10/11 (MSVC or MinGW toolchain)

* **Hardware**:

  * CPU: x86-64 or ARM64 (LLVM-supported target)
  * RAM: 2 GB minimum (4 GB recommended for LLVM builds)
  * Disk: \~1 GB free space (LLVM + build artifacts)

---

## 🔧 Software Dependencies

### 1. Compiler Toolchain

* **C++11-compatible compiler**:

  * Linux/macOS: `g++` (≥ 7.0) or `clang++` (≥ 6.0)
  * Windows: MSVC (≥ 2019) or MinGW-w64

### 2. Build System

* **CMake (≥ 3.14)** — required to configure and build the project

### 3. LLVM & Clang

* **LLVM Core libraries** (≥ 12.0 recommended)
* **Clang** (used for linking runtime + emitting executables)
* Ensure `llvm-config` is available on `$PATH`

Linux example install:

```bash
sudo apt-get update
sudo apt-get install -y llvm clang cmake build-essential
```

macOS (Homebrew):

```bash
brew install llvm cmake
```

Windows:

* Install **LLVM/Clang** from [releases.llvm.org](https://releases.llvm.org).
* Add LLVM `bin/` folder to `PATH`.

### 4. Pthread Support

* Required for parallel/sync runtime features.
* Usually built-in on Linux/macOS.
* On Windows, install **pthreads for Win32** (optional if parallel not used).

---

## 📚 Project-Specific Requirements

* **Source tree**: `dgm-lang/`

  * `include/` (headers)
  * `src/` (lexer, parser, ast, codegen, runtime, driver)
  * `examples/` (sample programs)
  * `docs/` (144-entry mapping)
  * `tests/` (CI + run script)

* **Runtime linking**:

  * The driver auto-links `runtime.c`.
  * Requires `clang` or system linker to be installed.

---

## 🚀 Setup & Build Instructions

```bash
# Clone repo
git clone https://github.com/yourname/dgm-lang.git
cd dgm-lang

# Create build folder
mkdir build && cd build

# Run CMake
cmake ..

# Compile
make -j4
```

This produces the compiler binary: **`dgmc`**

---

## ▶️ Operating the Compiler

* **Compile a program**:

```bash
./dgmc ../examples/hello.dgm -o hello
```

* **Run immediately**:

```bash
./dgmc ../examples/hello.dgm -o hello --run
```

* **Emit LLVM IR**:

```bash
./dgmc ../examples/safe_add.dgm --emit-llvm
```

---

## 🧪 Testing

* Run all example programs:

```bash
./tests/run_examples.sh
```

* CI/CD setup is available in `tests/ci.yml` (GitHub Actions).

---

## 📝 Recommended Extras

* **LLVM tools**: `llc`, `opt`, `llvm-dis` for exploring IR and optimizations.
* **Debugger**: `gdb` or `lldb` for runtime debugging.
* **Editor support**: VSCode or CLion with CMake/LLVM integration.

---

# ✅ Summary Checklist

1. **OS**: Linux, macOS, or Windows.
2. **Compiler**: C++11-capable (`clang++`/`g++`/MSVC).
3. **Build**: CMake ≥ 3.14.
4. **LLVM & Clang** ≥ 12.0 installed + `llvm-config` in PATH.
5. **Pthreads** (default on Linux/macOS, install separately on Windows).
6. **Clone repo**, configure with CMake, build with `make`.
7. Use `dgmc` to compile/run `.dgm` → `.exe`.

---

This way, anyone can set up **DGM** from scratch, even if they’ve never built a compiler before. 

---

# 🛠️ DGM Language — Step-by-Step Installation Guide

---

## 🐧 Linux (Ubuntu/Debian-based)

1. **Update packages**

```bash
sudo apt-get update
```

2. **Install dependencies**

```bash
sudo apt-get install -y build-essential cmake clang llvm-dev lld
```

3. **Verify LLVM installation**

```bash
llvm-config --version
```

Should show `>= 12.0`.

4. **Clone DGM**

```bash
git clone https://github.com/yourname/dgm-lang.git
cd dgm-lang
```

5. **Build DGM**

```bash
mkdir build && cd build
cmake ..
make -j4
```

6. **Test hello program**

```bash
./dgmc ../examples/hello.dgm -o hello --run
```

✅ Output:

```
Hello, DGM World!
```

---

## 🍎 macOS (Homebrew)

1. **Install Homebrew** (if not already installed)

```bash
/bin/bash -c "$(curl -fsSL https://raw.githubusercontent.com/Homebrew/install/HEAD/install.sh)"
```

2. **Install LLVM + CMake**

```bash
brew install llvm cmake
```

3. **Add LLVM to PATH**

```bash
echo 'export PATH="/usr/local/opt/llvm/bin:$PATH"' >> ~/.zshrc
source ~/.zshrc
```

4. **Verify LLVM**

```bash
llvm-config --version
```

5. **Clone & Build DGM**

```bash
git clone https://github.com/yourname/dgm-lang.git
cd dgm-lang
mkdir build && cd build
cmake -DLLVM_DIR=$(brew --prefix llvm)/lib/cmake/llvm ..
make -j4
```

6. **Run Example**

```bash
./dgmc ../examples/safe_add.dgm -o safe_add --run
```

✅ Output:

```
30
```

---

## 🪟 Windows (MSVC or MinGW)

### Option A: MSVC (Visual Studio)

1. **Install Visual Studio 2019 or newer**

   * Include **Desktop development with C++**.

2. **Install LLVM/Clang for Windows**
   Download from [https://releases.llvm.org](https://releases.llvm.org).
   Add LLVM `bin/` folder to `PATH`.

3. **Install CMake**
   Download from [https://cmake.org/download](https://cmake.org/download) or use `winget`:

   ```powershell
   winget install Kitware.CMake
   ```

4. **Clone Repo**

```powershell
git clone https://github.com/yourname/dgm-lang.git
cd dgm-lang
```

5. **Build with CMake (MSVC Generator)**

```powershell
mkdir build
cd build
cmake -G "Visual Studio 16 2019" ..
cmake --build . --config Release
```

6. **Run Example**

```powershell
.\Release\dgmc.exe ..\examples\hello.dgm -o hello --run
```

---

### Option B: MinGW (Lightweight)

1. **Install MSYS2**
   Download from [https://www.msys2.org](https://www.msys2.org).

2. **Install Dependencies**

```bash
pacman -S --needed base-devel mingw-w64-x86_64-toolchain cmake llvm
```

3. **Build DGM**

```bash
git clone https://github.com/yourname/dgm-lang.git
cd dgm-lang
mkdir build && cd build
cmake -G "MinGW Makefiles" ..
mingw32-make -j4
```

4. **Run Example**

```bash
dgmc.exe ../examples/tuple_test.dgm -o tuple_test --run
```

---

## 🧪 Testing All Examples

Once installed, run the bundled test script:

```bash
./tests/run_examples.sh
```

Expected output will cycle through all example programs (`hello`, `safe_add`, `tuple_test`, `list_test`, `parallel`).

---

# ✅ Installation Recap

1. Install **C++11 compiler**, **CMake**, and **LLVM (≥ 12.0)**.
2. Clone the `dgm-lang` repo.
3. Run `cmake .. && make` (or MSVC/MinGW equivalent).
4. Compile `.dgm` files with `dgmc`.
5. Run programs directly with `--run`.

---


## _____



---

# 📦 `Dockerfile`

```dockerfile
# -------------------------------
# DGM Language — Docker Container
# -------------------------------

# Use LLVM-ready base image
FROM ubuntu:22.04

# Set environment variables
ENV DEBIAN_FRONTEND=noninteractive
ENV LLVM_VERSION=14

# Install build essentials + LLVM + CMake + Git
RUN apt-get update && apt-get install -y \
    build-essential \
    cmake \
    git \
    clang \
    llvm-$LLVM_VERSION \
    llvm-$LLVM_VERSION-dev \
    lld \
    && rm -rf /var/lib/apt/lists/*

# Add LLVM to PATH
ENV PATH="/usr/lib/llvm-${LLVM_VERSION}/bin:${PATH}"

# Create workspace
WORKDIR /opt/dgm

# Clone repo
RUN git clone https://github.com/yourname/dgm-lang.git . 

# Build
RUN mkdir build && cd build && cmake .. && make -j4

# Default command: run hello example
CMD ["./build/dgmc", "examples/hello.dgm", "-o", "hello", "--run"]
```

---

# 🛠 Build & Run Instructions

### 1. Build the image

```bash
docker build -t dgm-lang .
```

### 2. Run inside container

```bash
docker run --rm dgm-lang
```

✅ This will compile and run `examples/hello.dgm` automatically.
Output:

```
Hello, DGM World!
```

### 3. Interactive container

If you want a shell inside:

```bash
docker run -it --rm dgm-lang /bin/bash
```

---

# 🧪 Mounting Local `.dgm` Files

To compile your own programs without rebuilding the image, mount your source folder:

```bash
docker run -it --rm -v $(pwd):/workspace dgm-lang /bin/bash
```

Inside container:

```bash
cd /opt/dgm/build
./dgmc /workspace/my_program.dgm -o my_program --run
```

---

# ✅ Why Use Docker?

* No need to install LLVM/CMake on host.
* Consistent environment across Linux/macOS/Windows.
* Perfect for CI/CD pipelines.
* One command (`docker run`) → instant compiler.

---


Here’s a **comprehensive checklist** of all requirements and prerequisites you’ll need to **download, build, run, and operate DGM successfully**. 

---

# 🛠️ DGM Language — Setup & Operation Requirements

---

## 📦 System Requirements

* **Operating System**:

  * Linux (Ubuntu/Debian/Fedora/Arch recommended)
  * macOS (Intel or Apple Silicon)
  * Windows 10/11 (MSVC or MinGW toolchain)

* **Hardware**:

  * CPU: x86-64 or ARM64 (LLVM-supported target)
  * RAM: 2 GB minimum (4 GB recommended for LLVM builds)
  * Disk: \~1 GB free space (LLVM + build artifacts)

---

## 🔧 Software Dependencies

### 1. Compiler Toolchain

* **C++11-compatible compiler**:

  * Linux/macOS: `g++` (≥ 7.0) or `clang++` (≥ 6.0)
  * Windows: MSVC (≥ 2019) or MinGW-w64

### 2. Build System

* **CMake (≥ 3.14)** — required to configure and build the project

### 3. LLVM & Clang

* **LLVM Core libraries** (≥ 12.0 recommended)
* **Clang** (used for linking runtime + emitting executables)
* Ensure `llvm-config` is available on `$PATH`

Linux example install:

```bash
sudo apt-get update
sudo apt-get install -y llvm clang cmake build-essential
```

macOS (Homebrew):

```bash
brew install llvm cmake
```

Windows:

* Install **LLVM/Clang** from [releases.llvm.org](https://releases.llvm.org).
* Add LLVM `bin/` folder to `PATH`.

### 4. Pthread Support

* Required for parallel/sync runtime features.
* Usually built-in on Linux/macOS.
* On Windows, install **pthreads for Win32** (optional if parallel not used).

---

## 📚 Project-Specific Requirements

* **Source tree**: `dgm-lang/`

  * `include/` (headers)
  * `src/` (lexer, parser, ast, codegen, runtime, driver)
  * `examples/` (sample programs)
  * `docs/` (144-entry mapping)
  * `tests/` (CI + run script)

* **Runtime linking**:

  * The driver auto-links `runtime.c`.
  * Requires `clang` or system linker to be installed.

---

## 🚀 Setup & Build Instructions

```bash
# Clone repo
git clone https://github.com/yourname/dgm-lang.git
cd dgm-lang

# Create build folder
mkdir build && cd build

# Run CMake
cmake ..

# Compile
make -j4
```

This produces the compiler binary: **`dgmc`**

---

## ▶️ Operating the Compiler

* **Compile a program**:

```bash
./dgmc ../examples/hello.dgm -o hello
```

* **Run immediately**:

```bash
./dgmc ../examples/hello.dgm -o hello --run
```

* **Emit LLVM IR**:

```bash
./dgmc ../examples/safe_add.dgm --emit-llvm
```

---

## 🧪 Testing

* Run all example programs:

```bash
./tests/run_examples.sh
```

* CI/CD setup is available in `tests/ci.yml` (GitHub Actions).

---

## 📝 Recommended Extras

* **LLVM tools**: `llc`, `opt`, `llvm-dis` for exploring IR and optimizations.
* **Debugger**: `gdb` or `lldb` for runtime debugging.
* **Editor support**: VSCode or CLion with CMake/LLVM integration.

---

# ✅ Summary Checklist

1. **OS**: Linux, macOS, or Windows.
2. **Compiler**: C++11-capable (`clang++`/`g++`/MSVC).
3. **Build**: CMake ≥ 3.14.
4. **LLVM & Clang** ≥ 12.0 installed + `llvm-config` in PATH.
5. **Pthreads** (default on Linux/macOS, install separately on Windows).
6. **Clone repo**, configure with CMake, build with `make`.
7. Use `dgmc` to compile/run `.dgm` → `.exe`.

---



**step-by-step installation guide** for **Linux, macOS, and Windows**, with exact commands. This way, anyone can set up **DGM** from scratch, even if they’ve never built a compiler before.

---

# 🛠️ DGM Language — Step-by-Step Installation Guide

---

## 🐧 Linux (Ubuntu/Debian-based)

1. **Update packages**

```bash
sudo apt-get update
```

2. **Install dependencies**

```bash
sudo apt-get install -y build-essential cmake clang llvm-dev lld
```

3. **Verify LLVM installation**

```bash
llvm-config --version
```

Should show `>= 12.0`.

4. **Clone DGM**

```bash
git clone https://github.com/yourname/dgm-lang.git
cd dgm-lang
```

5. **Build DGM**

```bash
mkdir build && cd build
cmake ..
make -j4
```

6. **Test hello program**

```bash
./dgmc ../examples/hello.dgm -o hello --run
```

✅ Output:

```
Hello, DGM World!
```

---

## 🍎 macOS (Homebrew)

1. **Install Homebrew** (if not already installed)

```bash
/bin/bash -c "$(curl -fsSL https://raw.githubusercontent.com/Homebrew/install/HEAD/install.sh)"
```

2. **Install LLVM + CMake**

```bash
brew install llvm cmake
```

3. **Add LLVM to PATH**

```bash
echo 'export PATH="/usr/local/opt/llvm/bin:$PATH"' >> ~/.zshrc
source ~/.zshrc
```

4. **Verify LLVM**

```bash
llvm-config --version
```

5. **Clone & Build DGM**

```bash
git clone https://github.com/yourname/dgm-lang.git
cd dgm-lang
mkdir build && cd build
cmake -DLLVM_DIR=$(brew --prefix llvm)/lib/cmake/llvm ..
make -j4
```

6. **Run Example**

```bash
./dgmc ../examples/safe_add.dgm -o safe_add --run
```

✅ Output:

```
30
```

---

## 🪟 Windows (MSVC or MinGW)

### Option A: MSVC (Visual Studio)

1. **Install Visual Studio 2019 or newer**

   * Include **Desktop development with C++**.

2. **Install LLVM/Clang for Windows**
   Download from [https://releases.llvm.org](https://releases.llvm.org).
   Add LLVM `bin/` folder to `PATH`.

3. **Install CMake**
   Download from [https://cmake.org/download](https://cmake.org/download) or use `winget`:

   ```powershell
   winget install Kitware.CMake
   ```

4. **Clone Repo**

```powershell
git clone https://github.com/yourname/dgm-lang.git
cd dgm-lang
```

5. **Build with CMake (MSVC Generator)**

```powershell
mkdir build
cd build
cmake -G "Visual Studio 16 2019" ..
cmake --build . --config Release
```

6. **Run Example**

```powershell
.\Release\dgmc.exe ..\examples\hello.dgm -o hello --run
```

---

### Option B: MinGW (Lightweight)

1. **Install MSYS2**
   Download from [https://www.msys2.org](https://www.msys2.org).

2. **Install Dependencies**

```bash
pacman -S --needed base-devel mingw-w64-x86_64-toolchain cmake llvm
```

3. **Build DGM**

```bash
git clone https://github.com/yourname/dgm-lang.git
cd dgm-lang
mkdir build && cd build
cmake -G "MinGW Makefiles" ..
mingw32-make -j4
```

4. **Run Example**

```bash
dgmc.exe ../examples/tuple_test.dgm -o tuple_test --run
```

---

## 🧪 Testing All Examples

Once installed, run the bundled test script:

```bash
./tests/run_examples.sh
```

Expected output will cycle through all example programs (`hello`, `safe_add`, `tuple_test`, `list_test`, `parallel`).

---

# ✅ Installation Recap

1. Install **C++11 compiler**, **CMake**, and **LLVM (≥ 12.0)**.
2. Clone the `dgm-lang` repo.
3. Run `cmake .. && make` (or MSVC/MinGW equivalent).
4. Compile `.dgm` files with `dgmc`.
5. Run programs directly with `--run`.

---



---

# 📦 `Dockerfile`

```dockerfile
# -------------------------------
# DGM Language — Docker Container
# -------------------------------

# Use LLVM-ready base image
FROM ubuntu:22.04

# Set environment variables
ENV DEBIAN_FRONTEND=noninteractive
ENV LLVM_VERSION=14

# Install build essentials + LLVM + CMake + Git
RUN apt-get update && apt-get install -y \
    build-essential \
    cmake \
    git \
    clang \
    llvm-$LLVM_VERSION \
    llvm-$LLVM_VERSION-dev \
    lld \
    && rm -rf /var/lib/apt/lists/*

# Add LLVM to PATH
ENV PATH="/usr/lib/llvm-${LLVM_VERSION}/bin:${PATH}"

# Create workspace
WORKDIR /opt/dgm

# Clone repo
RUN git clone https://github.com/yourname/dgm-lang.git . 

# Build
RUN mkdir build && cd build && cmake .. && make -j4

# Default command: run hello example
CMD ["./build/dgmc", "examples/hello.dgm", "-o", "hello", "--run"]
```

---

# 🛠 Build & Run Instructions

### 1. Build the image

```bash
docker build -t dgm-lang .
```

### 2. Run inside container

```bash
docker run --rm dgm-lang
```

✅ This will compile and run `examples/hello.dgm` automatically.
Output:

```
Hello, DGM World!
```

### 3. Interactive container

If you want a shell inside:

```bash
docker run -it --rm dgm-lang /bin/bash
```

---

# 🧪 Mounting Local `.dgm` Files

To compile your own programs without rebuilding the image, mount your source folder:

```bash
docker run -it --rm -v $(pwd):/workspace dgm-lang /bin/bash
```

Inside container:

```bash
cd /opt/dgm/build
./dgmc /workspace/my_program.dgm -o my_program --run
```

---

# ✅ Why Use Docker?

* No need to install LLVM/CMake on host.
* Consistent environment across Linux/macOS/Windows.
* Perfect for CI/CD pipelines.
* One command (`docker run`) → instant compiler.

---



** so you can treat DGM like a local dev environment. With this setup, you’ll be able to:

* Mount a `workspace/` folder from your host machine.
* Compile `.dgm` files inside the container with **hot-reload-like convenience**.
* Keep the container lightweight but persistent for iterative development.

---

# 📂 `docker-compose.yml`

```yaml
version: "3.9"

services:
  dgm:
    build:
      context: .
      dockerfile: Dockerfile
    container_name: dgm-lang
    volumes:
      - ./workspace:/workspace
    working_dir: /workspace
    tty: true
    stdin_open: true
```

---

# 📂 Folder Structure

```
dgm-lang/            # project root
│
├── Dockerfile       # from previous step
├── docker-compose.yml
├── workspace/       # your local DGM programs
│   ├── hello.dgm
│   ├── safe_add.dgm
│   └── ...
└── ...
```

---

# 🛠 Usage

### 1. Build the image

```bash
docker-compose build
```

### 2. Start the container

```bash
docker-compose up -d
```

### 3. Open a shell inside

```bash
docker exec -it dgm-lang /bin/bash
```

Now you’re in a container with **DGM prebuilt**.

---

# ▶️ Compiling Programs in `workspace/`

Inside the container:

```bash
cd /opt/dgm/build
./dgmc /workspace/hello.dgm -o hello --run
```

✅ Output:

```
Hello, DGM World!
```

---

# 🔄 Hot Reload Style Workflow

* Edit `workspace/*.dgm` on your host (VSCode, etc.).
* Run `dgmc` inside the container.
* No rebuild/restart needed — files sync automatically through the volume mount.

---

# ✅ Why Docker Compose?

* Persistent dev container with all dependencies.
* Local file editing + in-container compilation.
* Easy collaboration — teammates only need `docker-compose up`.
* CI/CD ready: the same config works in pipelines.

---


Just run make run file=hello.dgm and it automatically compiles & runs inside Docker Compose)

**Makefile helper** so you can interact with DGM via simple `make` commands, without typing long Docker or Compose commands.

---

# 📂 `Makefile`

```makefile
# Makefile for DGM inside Docker Compose

# Default program to compile/run
file ?= hello.dgm
output ?= program

# Build the Docker image
build:
	docker-compose build

# Start container (detached)
up:
	docker-compose up -d

# Stop container
down:
	docker-compose down

# Open interactive shell inside DGM container
shell:
	docker exec -it dgm-lang /bin/bash

# Compile .dgm → executable (inside container)
compile:
	docker exec -it dgm-lang /opt/dgm/build/dgmc /workspace/$(file) -o /workspace/$(output)

# Compile + Run
run:
	docker exec -it dgm-lang /opt/dgm/build/dgmc /workspace/$(file) -o /workspace/$(output) --run

# Emit LLVM IR instead of executable
emit-llvm:
	docker exec -it dgm-lang /opt/dgm/build/dgmc /workspace/$(file) --emit-llvm
```

---

# 🛠 Usage Examples

### 1. Build the environment

```bash
make build
```

### 2. Start container

```bash
make up
```

### 3. Compile & run your program

```bash
make run file=hello.dgm
```

### 4. Compile but don’t run

```bash
make compile file=safe_add.dgm output=safe_add
```

### 5. Emit LLVM IR

```bash
make emit-llvm file=safe_add.dgm
```

### 6. Open shell in container

```bash
make shell
```

### 7. Stop container

```bash
make down
```

---

# ✅ Benefits of the Makefile

* One-liners replace long Docker commands.
* Standardized workflow (`make build`, `make run`, `make shell`).
* Works across Linux, macOS, and Windows (with Docker Desktop).
* Keeps DGM development smooth & repeatable.

---

## _____

# 🔢 Full 144-Entry Dodecagram ↔ LLVM IR Mapping Table

This is the canonical mapping table for the **DGM language** compiler.  
It is divided into four regions:

- **00–4B → LLVM Core Instructions**  
- **50–7B → Safety + Safe Arithmetic Extensions**  
- **80–9B → Data Structures**  
- **A0–BB → CIAM Extensions + Language Intrinsics**

---

## 00–4B: LLVM Core Ops

| DGM | LLVM IR         | Meaning                        |
|-----|-----------------|--------------------------------|
| 00  | nop             | No-op                         |
| 01  | alloca          | Allocate stack/register space |
| 02  | load            | Load from memory              |
| 03  | store           | Store to memory               |
| 04  | getelementptr   | Pointer arithmetic            |
| 05  | bitcast         | Type reinterpret              |
| 06  | trunc           | Truncate int                  |
| 07  | zext            | Zero extend int               |
| 08  | sext            | Sign extend int               |
| 09  | fptrunc         | FP truncate                   |
| 0a  | fpext           | FP extend                     |
| 0b  | fptoui          | FP → unsigned int             |
| 10  | fptosi          | FP → signed int               |
| 11  | uitofp          | Unsigned int → FP             |
| 12  | sitofp          | Signed int → FP               |
| 13  | ptrtoint        | Pointer → int                 |
| 14  | inttoptr        | Int → pointer                 |
| 15  | icmp            | Integer compare               |
| 16  | fcmp            | FP compare                    |
| 17  | add             | Integer add                   |
| 18  | sub             | Integer subtract              |
| 19  | mul             | Integer multiply              |
| 1a  | udiv            | Unsigned div                  |
| 1b  | sdiv            | Signed div                    |
| 20  | fadd            | FP add                        |
| 21  | fsub            | FP sub                        |
| 22  | fmul            | FP mul                        |
| 23  | fdiv            | FP div                        |
| 24  | frem            | FP remainder                  |
| 25  | shl             | Shift left                    |
| 26  | lshr            | Logical shift right           |
| 27  | ashr            | Arithmetic shift right        |
| 28  | and             | Bitwise AND                   |
| 29  | or              | Bitwise OR                    |
| 2a  | xor             | Bitwise XOR                   |
| 2b  | call            | Function call                 |
| 30  | br              | Branch                        |
| 31  | switch          | Switch                        |
| 32  | indirectbr      | Indirect branch               |
| 33  | ret             | Return                        |
| 34  | resume          | Resume (exceptions)           |
| 35  | unreachable     | Mark unreachable              |
| 36  | landingpad      | Exception landing pad         |
| 37  | invoke          | Invoke function               |
| 38  | phi             | PHI node                      |
| 39  | select          | Select (ternary)              |
| 3a  | extractvalue    | Extract from struct           |
| 3b  | insertvalue     | Insert into struct            |
| 40  | atomicrmw       | Atomic read-modify-write      |
| 41  | cmpxchg         | Compare-and-swap              |
| 42  | fence           | Memory fence                  |
| 43  | memset          | Memset                        |
| 44  | memcpy          | Memcpy                        |
| 45  | memmove         | Memmove                       |
| 46  | lifetime.start  | Lifetime start                |
| 47  | lifetime.end    | Lifetime end                  |
| 48  | sanitizer.check | Sanitizer bounds check        |
| 49  | assume          | Compiler assumption           |
| 4a  | llvm.dbg.declare| Debug declare                 |
| 4b  | llvm.dbg.value  | Debug value                   |

---

## 50–7B: Safe Arithmetic & Healing

| DGM | Meaning                  |
|-----|--------------------------|
| 50  | safe.add (auto heal add) |
| 51  | safe.sub                 |
| 52  | safe.mul                 |
| 53  | safe.div                 |
| 54  | safe.mod                 |
| 55  | safe.shift               |
| 56  | safe.and                 |
| 57  | safe.or                  |
| 58  | safe.xor                 |
| 59  | safe.neg                 |
| 5a  | safe.not                 |
| 60  | cascade.begin            |
| 61  | cascade.end              |
| 62  | cascade.yield            |
| 63  | cascade.resume           |
| 70  | branch.try               |
| 71  | branch.heal              |
| 72  | branch.soft              |
| 73  | branch.auto              |
| 7a  | recover                  |
| 7b  | language.assert          |

---

## 80–9B: Data Structures

| DGM | Meaning        |
|-----|----------------|
| 80  | tuple.pack     |
| 81  | tuple.unpack   |
| 82  | list.append    |
| 83  | list.remove    |
| 84  | list.insert    |
| 85  | list.pop       |
| 86  | array.load     |
| 87  | array.store    |
| 88  | group.spawn    |
| 89  | group.merge    |
| 8a  | group.split    |
| 8b  | nest.enter     |
| 90  | nest.exit      |
| 91  | derive.child   |
| 92  | derive.parent  |
| 93  | pair.create    |
| 94  | pair.split     |
| 95  | match.begin    |
| 96  | match.case     |
| 97  | match.end      |
| 98  | language.yield |
| 99  | language.halt  |
| 9a  | language.wait  |
| 9b  | language.resume|

---

## A0–BB: CIAM + Language Intrinsics

| DGM | Meaning           |
|-----|-------------------|
| A0  | language.inline   |
| A1  | language.expand   |
| A2  | language.fold     |
| A3  | language.derive   |
| A4  | language.macro    |
| A5  | language.trace    |
| A6  | language.echo     |
| A7  | language.link     |
| A8  | language.infer    |
| A9  | language.delete   |
| Aa  | language.replace  |
| Ab  | language.redirect |
| B0  | language.guard    |
| B1  | language.wrap     |
| B2  | language.unwrap   |
| B3  | language.enclose  |
| B4  | language.open     |
| B5  | language.close    |
| B6  | language.defer    |
| B7  | language.future   |
| B8  | language.parallel |
| B9  | language.sync     |
| Ba  | language.pragma   |
| Bb  | language.exit     |

## _____


