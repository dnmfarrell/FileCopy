FileCopy
========

A C daemon that monitors a directory, copying any file placed there to a target directory. Source and target directories are configurable with command line args.

Synopsis
--------

    $ filecopy /home/myusername/directorytowatch /home/myusername/directorytocopy


Compiling
---------

Compile with gcc:

    $ gcc src/filecopy.c -obin/filecopy


Set execute permissions:

    $ chmod +x bin/filecopy


