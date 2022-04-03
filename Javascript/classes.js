


class Automobile {
    constructor(year, make, model) {
      this.year = year;
      this.make = make;
      this.model = model;
    }

    
}

// unnamed class
class Truck extends Automobile {
    constructor(year, make, model) {
        super(year, make, model);
      }

     revIt() {
        console.log(`${this.model} goes VROOOOOOMMMM.`); 
     } 
  };


  let SportsCar = class FastAutomobile {
    constructor(year, make, model) {
        this.year = year;
        this.make = make;
        this.model = model;
      }

    revIt() {
        console.log(`${this.model} goes vroom vroom.`);
    }
  };


  let porsche = new SportsCar(1992, "porsche", "911")
  console.log(porsche.model);
  porsche.revIt();

  

  function Person (name) {
    this.name = name;
  }
  
  Person.prototype.speak = function () {
    console.log(`${this.name} says Hello.`);
  }