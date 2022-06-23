echo "Enter x value:"
read x
echo "Enter y value:"
read y
echo "Addition"  
let "z = $(( x + y ))"  
echo "z= $z"  
  
echo "Substraction"  
let "z = $((x - y ))"  
echo "z= $z"  
  
echo "Multiplication"  
let "z = $(( x * y ))"  
echo "z = $z"  
  
echo "Division"  
let "z = $(( x / y ))"  
echo "z = $z"
