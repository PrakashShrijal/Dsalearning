// let vehicle = {
//     name  : 'car',
//     power : 100,
//     wheel : 6,
//     start : function(){
//         console.log("I am ready!");
//     }


// };
// //console.log(vehicle)
// vehicle.start();
// console.log(vehicle.name);
// vehicle.name = 'bike';
// console.log(vehicle.name);


// let a = { x : 10}
// let  b = a;   // Objects are reference types
// b.x = 20;
// console.log(a.x);


// array
let arr =[ 10,20, 30, 40];
let brr = ['prakash', 'Aman', 'Mohit'];
let crr = ["prakash", "Aman", " Mohit"];  // quotation single or double doesn't matter, it is always string.
console.log(brr[0]);


arr.push(100);
arr.push(5);
console.log(arr[0]);
brr.pop();
crr.shift();
crr.unshift("hero");
console.log(crr);
console.log(arr);
console.log(brr);
let drr= arr.slice();
console.log(drr);

console.log(crr.slice(2));

brr.splice(1,'great');


let nums = [1, 2, 3];

let doubled = nums.map(function (n) {
  return n * 2;
});

console.log(doubled);
