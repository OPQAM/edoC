	The edoC file has two folders:
	Compiled and Scripts, which hold, respectively, compiled code and scripts,
	a README.md file, with a brief explanation of why this folder exists,
	and this docs.md file, which holds random notes to be turned into proper documentation.

#### To start practicing and learning Vim, we need:
- a terminal (I'm using a Linux terminal);
- a text editor (I'm using Vim);
- a compiler (I'm using gcc);

	I had to re-install the build-essential package for the compiler

> sudo apt update
> sudo apt install build-essential

We can now start coding.
After creating my first script, and saving it (see helloWorld.c in Scripts) I have to compile it.

> gcc helloWorld.c -o ~/pathToFile/Compiled/helloWorld

This way, I've added the exact path where I want to create the file, and its name.
We can also just type:

> gcc helloWorld.c

This will return a file named *a.out*, which will be the compiled file.
To run a file we can do:

> ./helloWorld

Very much like we would run any other program.
Do note that the compiler automatically creates a compiled file with executable permissions.


--snip--

Explain these changes, and why we need to have them on all users we want to have programming:

*(file: .vimrc)*
syntax enable
set tabstop=4
set shiftwidth=4
set autoindent
filetype plugin indent on
set number
set statusline=%f\ %y\ %r%h%w\ %l/%L\ %p%%\ %=%m\ %a\ %r
set laststatus=2
nnoremap <Leader>cc :set colorcolumn=80<cr>
nnoremap <Leader>ncc :set colorcolumn-=80<cr>
nnoremap <F5> :!gcc -Wall -Wextra % -o /home/opqam/PROJECTS/edoC/Compiled/%< && /home/opqam/PROJECTS/edoC/Compiled/%< <CR>
set t_Co=256
highlight Comment ctermfg=darkgray
highlight String ctermfg=darkcyan

--snip--
