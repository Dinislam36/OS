# Bash script with race condion
# Race conditon occures randomly, sometimes it doesn't occurs
# Sometimes it occures several times in a row
X=$(tail -n 1 "/home/dinislam/OS/week5/ex2_file.txt")
echo $((X + 1)) >> "/home/dinislam/OS/week5/ex2_file.txt"