# @param {Integer} x
# @return {Boolean}

# simple palidrome code
def is_palindrome(x)
    if x.to_s[0] == "-"
        return false
    end
    if x == x.to_s.reverse.to_i
       return true
    end
    return false
end

# playing with classes and class methods
class Automobile
    def initialize(make, model, year)
        @make = make
        @model = model
        @year = year
    end
    def to_s
        "Automobile: #{@make}--#{@model} (#{@year})"
    end
    def Automobile.revIt 
        puts "vroom"
    end
end

# inheritance and instance methods
class Truck < Automobile
    def initialize(make, model, year, bedLength)
      super(make, model, year)
      @bedLength = bedLength
    end
    def revIt
        puts "vroom vroom"
    end
end

aTruck = Truck.new("2022", "Tesla", "WorkTruck", "10")
aTruck.revIt
puts "Done!"