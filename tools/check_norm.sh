while getopts ":oR" opt; do
case $opt in
	o)
		NORMARGS=$NORMARGS"$(find . -name '*.c' | tr '\\\n' ' ') "
		;;
	R)
		NORMARGS=$NORMARGS"-R CheckForbiddenSourceHeader "
		;;
	\?)
		echo "Invalid option: -$OPTARG" >&2
		;;
esac
done
# echo $NORMARGS
norminette $NORMARGS | tr '\n' '~' | rev | cut -c2- | rev | sed -e $'s/~Norme: ../\\\n/g' | sed 's/Norme: ..//' | sort | tr '~' '\n' | sed ''/Error/s//`printf "\033[31mError\033[0m"`/'' | sed ''/Warning/s//`printf "\033[33mWarning\033[0m"`/''
