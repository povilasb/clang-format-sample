=====
About
=====

This is a basic sample of clang-format use. This tool reformats C++ (and
other languages) code to match your defined style.


Installation
============

On debian wheezy latest available version is 3.5:

	$ sudo apt-get install clang-format-3.5

Put `.clang-format` into your project root directory.


Vim integration
===============

Put this into `~/.vimrc`::

	map <C-K> :pyf /usr/share/vim/addons/syntax/clang-format-3.5.py<cr>
	imap <C-K> <c-o>:pyf /usr/share/vim/addons/syntax/clang-format-3.5.py<cr>

`Ctrl + k` reformats current line or selected region (`shift + v`).
