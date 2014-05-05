#!/bin/sh

if [ "$1" = "clean" ]
	then
		echo "Cleaning the interface"
		cd interface_generator
		make clean

		echo "Cleaning LipMiniAnalysis"
		cd ..
		make clean
	else
		if [ "$1" = "debug" ]
			then
				export DEBUG=yes
				echo "Building the interface in debug mode"
				cd interface_generator
				make

				bin/EDGen ../src EventData.h

				echo "Building LipMiniAnalysis in debug mode"
				cd ..
				make
			else
				echo "Building the interface"
				cd interface_generator
				make

				bin/EDGen ../src EventData.h

				echo "Building LipMiniAnalysis"
				cd ..
				make
		fi
fi
