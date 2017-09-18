find . -type f -name \*.sh | rev | sed 's/hs\.//' | cut -d / -f 1 | rev
