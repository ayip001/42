for i in $(seq 0 $1)
do
	mkdir $(printf "ex%02d" $i)
done
