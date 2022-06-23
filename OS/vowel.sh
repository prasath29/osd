read -p "Enter something: " char
if [[ "$char" == *[AEIOUaeiou]* ]]; then
    echo "vowel"
else
    echo "consonant"
fi 
