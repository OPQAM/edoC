syntax on
set tabstop=4
set shiftwidth=4
set softtabstop=4
set autoindent
set smartindent
set number
filetype plugin indent on
set statusline=%f\ %y\ %r%h%w\ %l/%L\ %p%%\ %=%m\ %a\ %r
set laststatus=2
nnoremap <F5> :!gcc % -o /home/opqam/PROJECTS/edoC/Compiled/%< && /home/opqam/PROJECTS/edoC/Compiled/%< <CR>
set t_Co=256
nnoremap <Leader>cc :set colorcolumn=80<cr>
nnoremap <Leader>ncc :set colorcolumn-=80<cr>
highlight Comment ctermfg=darkred
highlight String ctermfg=darkcyan
au BufRead,BufNewFile *.s set filetype=asm
au FileType asm syntax on
nnoremap <F7> :!gcc -m32 -o /home/opqam/PROJECTS/edoC/Assembly/%< && /home/opqam/PROJECTS/edoC/Assembly/%<< <CR>
