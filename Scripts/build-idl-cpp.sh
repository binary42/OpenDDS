#!/bin/bash

for files in ../IDL/*.idl;
do
	cp $files ../Source/Cpp/IDL
	
	${DDS_ROOT}/dds/idl/opendds_idl -I../IDL -o ../Source/Cpp/Generated/ $files
done

for files in ../IDL/*.idl;
do
	${TAO_ROOT}/TAO_IDL/tao_idl -I$DDS_ROOT -I$TAO_ROOT/orbsvcs -I../Source/Cpp/IDL -I../Source/Cpp/Generated -o ../Source/Cpp/Generated/ $files
done

for files in ../Source/Cpp/Generated/*.idl;
do
	${TAO_ROOT}/TAO_IDL/tao_idl -I$DDS_ROOT -I$TAO_ROOT/orbsvcs -I../Source/Cpp/IDL -I../Source/Cpp/Generated -o ../Source/Cpp/Generated/ $files
done