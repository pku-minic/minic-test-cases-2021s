#!/bin/sh

for i in ./*.c; do
    echo -n "processing ${i} ... "
    gcc ${i} lib.c -o test.out
    if [ $? -ne 0 ]; then
        echo "${i} compile error";
        exit 1
    fi
    if [ -f ./${i%.*}.in ]; then
        ./test.out < ${i%.*}.in > ${i%.*}.out
    else
        ./test.out > ${i%.*}.out
    fi
    echo $? >> ${i%.*}.out
    echo "done."
done

rm -f test.out