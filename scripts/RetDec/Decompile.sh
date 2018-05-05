#!/usr/bin/env bash
# Ask user what file to decompile
echo "Enter the file you wish to decompile: "
# Read user input
read filename
# Read users key from key.txt
while IFS='' read key || [[ -n "${key}" ]]; do
    if [ ! -z "${key}" -a "${key}"!=" " ]; then
        # Print users key
        echo "> Your key is: ${key}"
        # Notify user of start
        echo "> Starting decompiling of ${filename}"
        # Run decompile script
    #    ./RetDec.py -k ${key} -v ${filename}
        echo "./RetDec.py -k ${key} -v ${filename}"
    else
        echo "Please enter key manually: "
        read key
        # Print users key
        echo "> Your key is: ${key}"
        # Notify user of start
        echo "> Starting decompiling of ${filename}"
        # Run decompile script
    #    ./RetDec.py -k ${key} -v ${filename}
    echo "./RetDec.py -k ${key} -v ${filename}"
    fi
done < "key.txt"Terrain.dll