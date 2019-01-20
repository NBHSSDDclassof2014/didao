Didao
=====

"Didao" is a Real-Time Strategy game under "heavy" development and was
originally intended as a major project for AbyssMaul and DpEpsilon's
Software Design and Documentation course, during which it was
developed under the working name "Suidao". It has ridiculous features
planned, the most significant being destructable terrain facilitating
the creation of tunnels. The gameplay will be built around this
experimental game mechanic.

It is written in C++ and Lua, with the engine in C++ and various
scripts for unit/building behaviour, artificial intelligence and other
specific game details written in Lua.

It is not worth running at the moment unless you intend to alter it.

License
-------

Didao Copyright (C) 2013-2014  Oliver Fisher and Daniel Phillips

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.

Compiling
---------

    $ make

Makefile tested under GNU/Linux. Should work on Mac OS X, though this
is untested. Needs tweaking and MinGW to work under Windows.

Dependencies
------------

- SDL2
- JsonCpp
- Lua 5.2

```
sudo apt install liblua5.2-dev libjsoncpp-dev libsdl2-dev libsdl2-image-dev libsdl2-mixer-dev libsdl2-ttf-dev
```

### Other Licenses ###

The following files are taken/derived from files from the
[FreeRCT](https://code.google.com/p/freerct/) project. They are
licensed under the terms of the GNU General Public License
version 2.0.

    ./content/graphics/foundation.png
    ./content/graphics/tiles.png

The dirent.h for windows header (./include/win/dirent.h) is
permissively licensed (see file).
