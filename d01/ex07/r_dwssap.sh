cat /etc/passwd | grep -v \# | awk "NR%2==1" | cut -d : -f 1 | rev | sort -rf | awk "NR>=$FT_LINE1 && NR<=$FT_LINE2" | paste -sd , - | sed 's/,/, /g' | tr '\n' '.'
