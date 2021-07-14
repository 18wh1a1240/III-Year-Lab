set i 1; set res 1

while {$i <= 10} {
      set res [expr $res * $i]
      incr i
}

puts $res