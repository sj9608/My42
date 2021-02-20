find . \( -type f -o -type d \) | wc -l | sed 's/[[:space:]]//g'
