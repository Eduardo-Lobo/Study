# Tell the linker to omit references to unused shared libraries.
AM_LDFLAGS = $(IGNORE_UNUSED_LIBRARIES_CFLAGS)

bin_PROGRAMS = test_bitwise
test_bitwise_SOURCES = test_main.c \
    test_bits.c         \
    test_bitwise.c
noinst_HEADERS = test.h
