class Automobile:
  def __init__(self, year, make, model):
    self.year = year
    self.make = make
    self.model = model

  def revIt(self):
    print("vroom vroom")

class Truck(Automobile):
  def __init__(self, year, make, model):
    super().__init__(year, make, model)
    self.payload_tons = 10

auto1 = Automobile(2021, "Ford", "Fiesta")

print(auto1.year)
print(auto1.make)
print(auto1.model)

redTruck = Truck(2022, "Tesla", "Super Truck")

redTruck.revIt()
print(redTruck.payload_tons)
