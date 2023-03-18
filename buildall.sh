for file in *.c; do
    if [ ! -f $file ]; then
        exit
    fi
    b=$(basename $file .c)
    echo "compiling $file"
    gcc $b.c -o $b
done