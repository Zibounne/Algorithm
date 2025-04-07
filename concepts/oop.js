/* Object-Oriented Programming

La Programmation Orientée Objet est un paradigme qui permet d’organiser ton code autour de "choses" (objets) plutôt que de fonctions seules.

On crée des objets avec des propriétés (valeurs) et des méthodes (fonctions), et on les structure avec des classes.

*/

// simple object

const car = {
    brand: "Toyota",
    speed: 120,
    drive: function() {
      console.log(`Driving at ${this.speed}km/h`);
    }
};

car.drive(); // Driving at 120km/h

const person = {};

// Add Properties
person.firstName = "John";
person.lastName = "Doe";
person.age = 50;
person.eyeColor = "blue";

// classes

class Person {
    constructor(name, age) {
      this.name = name;
      this.age = age;
    }
  
    greet() {
      console.log(`Hi, I'm ${this.name} and I'm ${this.age} years old.`);
    }
}

// create instance

const john = new Person("John", 30);
john.greet(); // "Hi, I'm John and I'm 30 years old."

// extends

class Student extends Person {
  constructor(name, age, level) {
    super(name, age); // Appelle le constructeur de la classe parente (Person)
    this.level = level;
  }

  study() {
    console.log(`${this.name} is studying at level ${this.level}.`);
  }
}

const alice = new Student("Alice", 22, "Master");
alice.greet(); // hérite de Person
alice.study();

// private

class BankAccount {
  #balance = 0;

  deposit(amount) {
    this.#balance += amount;
  }

  getBalance() {
    return this.#balance;
  }
}

const account = new BankAccount();
account.deposit(100);
console.log(account.getBalance()); // 100
// console.log(account.#balance); error
