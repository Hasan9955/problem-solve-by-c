//find the most frequent element in an array

const array = [1, 2, 5, 8, 2, 4];

const freq = array.reduce((acc, n) => {
    acc[n] = (acc[n] || 0) + 1;
    return acc
}, {});

console.log(freq);