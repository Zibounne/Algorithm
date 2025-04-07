/*
Story
Your friend Bob is working as a taxi driver. After working for a month he is frustrated in the city's traffic lights. He asks you to write a program for a new type of traffic light. It is made so it turns green for the road with the most congestion.

Task
Given 2 pairs of values each representing a road (the number of cars on it and its name), construct an object whose turngreen method returns the name of the road with the most traffic at the moment of the method call, and clears that road from cars.

After both roads are clear of traffic, or if the number of cars on both roads is the same from the beginning, return an empty value instead.

Example
t = SmartTrafficLight([42, "27th ave"], [72, "3rd st"])
t.turngreen()  ==  "3rd st"
t.turngreen()  ==  "27th ave"
t.turngreen()  ==  null

t = SmartTrafficLight([10, "27th ave"], [10, "3rd st"])
t.turngreen()  ==  null
*/

class SmartTrafficLight {
    constructor(st1, st2) {
      this.road1 = {
        cars: st1[0],
        name: st1[1]
      }
      this.road2 = {
        cars: st2[0],
        name: st2[1]
      }
    }
    
    turngreen() {
        if(this.road1.cars > this.road2.cars){
            this.road1.cars = 0;
            return this.road1.name;
        }

        else if (this.road2.cars > this.road1.cars) {
            this.road2.cars = 0;            
            return this.road2.name;
        }
        
        else {
            return null;
        }
    }
}

const t = new SmartTrafficLight(
    [42, "27th ave"],
    [72, "3rd st"]
);
