srcdir = $(CURDIR)/src
build_dir = $(CURDIR)/build

all:
	@echo "Usage:"
	@echo  "\tmake reformat - reformats src/main.cpp file."
.PHONY: all


reformat:
	mkdir -p $(build_dir)
	clang-format-3.5 $(srcdir)/main.cpp > $(build_dir)/main.cpp
	cat $(build_dir)/main.cpp
.PHONY: reformat


clean:
.PHONY: clean
