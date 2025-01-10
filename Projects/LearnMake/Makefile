files := files1 files2
some_file: $(files)
	echo "look at this variable: " $(files)
	touch some_file

files1:
	touch files1

files2:
	touch files2

clean:
	rm -f files1 files2 some_file