norminette */* -R CheckForbiddenSourceHeader
gcc -Wall -Wextra -Werror main.c ex00/sastantua.c
for i in $(seq 0 20)
do
	echo $(printf "Checking diff for size %d" $i);
	./a.out $i > ft;
	./model $i > rt;
diff rt ft
done
rm a.out ft rt
