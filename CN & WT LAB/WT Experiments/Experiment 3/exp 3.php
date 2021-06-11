<?php
    $a1=array(7, 44, 34, 40);
    
    $a2=array(25, 6, 2, 16);
    
    $sorted = array_merge($a1, $a2);
    
    //rsort($sorted);
    array_multisort($sorted, SORT_DESC, SORT_NUMERIC);
    
    print_r($sorted);
?>
