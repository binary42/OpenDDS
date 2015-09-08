#!/bin/bash

for files in ../IDL/*.idl;
do
	cp $files ../Source/Cpp/IDL
	
	opendds_idl -o ../Source/Cpp/Generated/ $files
done

for files in ../IDL/*.idl;
do
	tao_idl -I$DDS_ROOT -I$TAO_ROOT/orbsvcs -o ../Source/Cpp/Generated/ $files
done

for files in ../Source/Cpp/Generated/*.idl;
do
	tao_idl -I$DDS_ROOT -I$TAO_ROOT/orbsvcs -o ../Source/Cpp/Generated/ $files
done