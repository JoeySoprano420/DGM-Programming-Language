
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

