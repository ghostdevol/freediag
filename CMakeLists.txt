cmake_minimum_required(VERSION 3.10)

# Project definition
project(freediag VERSION 1.0 LANGUAGES C)

# ---- C standard ----
set(CMAKE_C_STANDARD 99)
set(CMAKE_C_STANDARD_REQUIRED ON)
set(CMAKE_POSITION_INDEPENDENT_CODE ON)

# ---- Compiler options ----
add_compile_options(
    -Wall
    -Wextra
    -Wno-strict-prototypes
    -Wno-unused-const-variable
    -Wno-unused-variable
)

# ---- Include directories ----
include_directories(
    ${PROJECT_SOURCE_DIR}/include
    ${PROJECT_SOURCE_DIR}/diag
    ${PROJECT_SOURCE_DIR}/scantool
)

# ---- Source files ----
file(GLOB DIAG_SOURCES
    "${PROJECT_SOURCE_DIR}/diag/*.c"
)

file(GLOB SCANTOOL_SOURCES
    "${PROJECT_SOURCE_DIR}/scantool/*.c"
    "${PROJECT_SOURCE_DIR}/scantool/scantool_850/*.c"
)

# ---- Create executable ----
add_executable(
    freediag
    ${DIAG_SOURCES}
    ${SCANTOOL_SOURCES}
)

# ---- Optional libraries ----
find_library(M_LIB m)
if(M_LIB)
    target_link_libraries(freediag ${M_LIB})
endif()

# ---- Install rule ----
install(TARGETS freediag DESTINATION bin)

# ---- Print info ----
message(STATUS "Building freediag with C standard ${CMAKE_C_STANDARD}")
message(STATUS "Source dir: ${PROJECT_SOURCE_DIR}")