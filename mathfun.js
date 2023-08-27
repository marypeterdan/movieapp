// write a function to get the sum of the two numbers
// and return the result
// call the function with 2 numbers and print the result
// call the function with 2 different numbers and print the result
// call the function with 2 different numbers and print the result


function sum(a, b) {
    return a + b;
}

// write a callback function to access the sum function
// and print the result
function callback(a, b, cb) {
    console.log(cb(a, b));
}   

callback(10, 20, sum);