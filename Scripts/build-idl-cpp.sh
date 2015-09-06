#!/bin/bash

for files in ../IDL/*.idl;
do
	~/Development/DDS/bin/opendds_idl $files
done

tao_idl -I$DDS_ROOT -I$TAO_ROOT/orbsvcs ../IDL/*.idl

for files in Scripts/;
do
	mv *.h ../Source/Cpp/Generated/
	mv *.cpp ../Source/Cpp/Generated/
	mv *.inl ../Source/Cpp/Generated/
	mv *TypeSupport* ../Source/Cpp/Generated/
done

tao_idl -I$DDS_ROOT -I$TAO_ROOT/orbsvcs ../Source/Cpp/Generated/*TypeSupport.idl

for files in Scripts/;
do
	mv *.h ../Source/Cpp/Generated/
	mv *.cpp ../Source/Cpp/Generated/
	mv *.inl ../Source/Cpp/Generated/
done