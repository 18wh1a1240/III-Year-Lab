<?php

$number = 1 ;

while ($number < 50 ) {
  
    $count=0;
    
    for ($i = 1; $i <= $number; $i++) {
        if (($number % $i) == 0) {
            $count++;
        }
    }
    if ($count < 3) {
      echo $number." , ";
    } $number = $number + 1;
}

?>
