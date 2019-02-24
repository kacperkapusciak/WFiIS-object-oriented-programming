#!/bin/bash
if [ ! -e $1* ]; then
   printf "#pragma once\n\nclass $1\n{\npublic:\n\nprotected:\n\nprivate:\n\n};\n" >> $1.h
   printf "#include \"$1.h\"\n\n" >> $1.cpp
fi
