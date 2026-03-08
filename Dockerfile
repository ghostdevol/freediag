FROM ubuntu:22.04

# Essentials
RUN apt-get update && apt-get install -y \
    build-essential \
    cmake \
    git \
    clang \
    nano \
    libpthread-stubs0-dev \
    && rm -rf /var/lib/apt/lists/*

# Set working directory
WORKDIR /workspace

# Default command
CMD ["/bin/bash"]