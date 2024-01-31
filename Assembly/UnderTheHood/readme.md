Sat 27 Jan 22:52:25 WET 2024

I'm following along the series of videos by LiveOverflow:
'Binary Exploitation / Memory corruption'

This folder has been included to the PATH with the command:

export PATH=/root/.cargo/bin:/usr/games:/usr/local/sbin:/usr/local/bin:/usr/sbin:/usr/bin:/sbin:/bin:/home/opqam/PROJECTS/edoC/Assembly/UnderTheHood

...therefore, programs that are placed in here can be ran by just typing their name, instead of ./name

(note, of course, that this is temporary. We can add our folder to the path by editing .bashrc:
export PATH=/home/opqam/PROJECTS/edoC/Assembly/UnderTheHood)

// This will get us more information on the compilation process:
gcc file.c -o file -Wall

Wed 31 Jan 10:38:20 WET 2024

Added a .gitignore to edoC to make sure that the liveoverflow_youtube folder isn't updated to git. Whatever files I need from there will be taken out and placed in UnderTheHood, or wherever else needed


Installed gdb - the GNU debugger to look at the assembly code, as per liveoverflow's instructions (check video)
