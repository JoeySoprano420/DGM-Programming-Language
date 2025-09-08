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
