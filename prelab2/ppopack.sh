#!/usr/bin/env bash

if (($# == 1)); then
  projectName=$1 
  mkdir $projectName
  cp -r include/ src/ CMakeLists.txt Main.cpp $projectName
  tar -czf $projectName.tar.gz $projectName
  rm -r $projectName
  echo "Spakowano jako: $projectName.tar.gz"
else
  echo "Sposób użycia: ppopack nazwaProjektu" 
fi
