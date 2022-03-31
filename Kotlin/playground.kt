// classes, inheritance, interfaces, class methods, abstract functions, member functions

abstract class Automobile(val make: String) {
    abstract fun revIt()
}

interface Hauler {
    fun unload()
    fun haul(loadSize: Int) = println("I'm going to haul this $loadSize ton load")
}

class Truck(make: String, val model: String) : Automobile(make), Hauler {
    override fun revIt() = println("vroom vroom")
    fun load() = println("Load me up!")
    override fun unload() = println("Unload It!")
}

fun main() {
    val newVehicle = Truck("Tesla", "Super Truck")
    newVehicle.revIt() // An implementation of an abstract function
    newVehicle.load() // A member function
    newVehicle.haul(10) // A default implementation in an interface
    for (i in 1..10) {           
        println(" $i")
    }
    newVehicle.unload() // An implementation of an interface function
}


