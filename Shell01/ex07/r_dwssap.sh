cat /etc/passwd | grep -v "#" | awk 'NR%2==1' | cut -d : -f 1 | sort -r | head -n $FT_LINE1 | tail -n $(($FT_LINE2-$FT_LINE1+1)) | tr '\n' ' ' | tr ' ' ',' | rev | cut -c 2- |rev |
