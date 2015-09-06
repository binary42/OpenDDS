#!/bin/bash

for files in ../IDL/*.idl;
do
	~/Development/DDS/bin/opendds_idl $files
	mv $files ../Source/Cpp/Generated/
done


