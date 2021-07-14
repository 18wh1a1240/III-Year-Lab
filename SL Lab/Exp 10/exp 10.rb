marks = {
    'science' => 60,
    'maths' => 75,
    'social' => 80
}

total = 0

marks.each {|key,value|
              total +=value
        } 
        
puts "Total Marks: "+ total.to_s