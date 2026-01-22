let a =  {
    car : 'honda',
    wheel : 6,
    speed : 100
};

// console.log(a);
// a.fuel = 10
// console.log(a);
let v = a;
let b = {...a};    // deep copy, pass by  value....
a.speed = 500;
console.log(b);
console.log(a);
console.log(v);    // shallow copy, pass by reference
    

//  another deep copy
let c = Object.assign({},a);
a.color = 'blue';
console.log(a);
console.log(c);