class Human {
    // properties
    age = 13;   // public
    #wt = 80;  //private
    ht =  180;


    // behaviour
    walking(){
        console.log("I am Walking", this.#wt);
    }


    running(){
        console.log("I am running")
    }

    get fetchWeight(){
        return this.#wt;
    }

    set modifyweight(val){
        this.#wt = val;
    }
}
let obj = new Human();
console.log(obj.fetchWeight);  // since it is getter function no need to put as normal function.

obj.walking();