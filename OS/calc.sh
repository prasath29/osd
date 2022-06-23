echo "Enter First Number:"
read num1
echo "Enter Second Number:"
read num2
echo "+ADDITION"
echo "-SUBTRACTION"
echo "*MULTIPLICATION"
echo "/DIVISION"
echo "Enter Your Choice:"
read ch

case "$ch" in
'+') r=`expr $num1 + $num2`
echo "ADDITION = $r";;
'-') r=`expr $num1 - $num2`
echo "DIFFERENCE = $r";;

esac
