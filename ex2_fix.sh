#Bash script without race condition
LOCK=/home/dinislam/OS/week5/ex2_file.lock
while [ -f "$LOCK" ] # Waiting to unlock file
do
:
done # while loop is interrupt when file is unlocked

touch "$LOCK" # Lock file

X=$(tail -n 1 "/home/dinislam/OS/week5/ex2_file.txt") # Read last line
echo $((X + 1)) >> "/home/dinislam/OS/week5/ex2_file.txt" # Wrile last line + 1

rm "$LOCK" # Unlock file
