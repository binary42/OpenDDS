#!/bin/bash

for files in ../IDL/*.idl;
do
~/Development/DDS/bin/opendds_idl ../Source/Cpp/Generated/ $files
done
