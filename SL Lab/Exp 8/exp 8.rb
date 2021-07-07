def check(a, b)
    if (a < 0 && b > 100) || (b < 0 && a > 100)
        return true
    else
        return false 
    end
end

puts check(-10, 200)