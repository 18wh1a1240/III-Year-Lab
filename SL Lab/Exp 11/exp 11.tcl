set i 1; set fact 1
set x 5

while {$i <= $x} {
      set fact [expr $fact * $i]
      incr i
}

puts $fact