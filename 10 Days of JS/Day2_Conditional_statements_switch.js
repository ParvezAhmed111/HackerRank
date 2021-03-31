'use strict';

process.stdin.resume();
process.stdin.setEncoding('utf-8');

let inputString = '';
let currentLine = 0;

process.stdin.on('data', inputStdin => {
    inputString += inputStdin;
});

process.stdin.on('end', _ => {
    inputString = inputString.trim().split('\n').map(string => {
        return string.trim();
    });
    
    main();    
});

function readLine() {
    return inputString[currentLine++];
}

function getLetter(s) {
    let letter;
    // Write your code here
    const s1="aeiou";
    const s2="bcdfg";
    const s3="hjklm";
    const s4="npqrstvwxyz";
    
    switch(true){
        case s1.includes(s[0]):
            letter='A';
            break;
        case s2.includes(s[0]):
            letter='B';
            break;
        case s3.includes(s[0]):
            letter='C';
            break;
        case s4.includes(s[0]):
            letter='D';
            break;
        default:
            break;
    }
    return letter;
}


function main() {
    const s = readLine();
    
    console.log(getLetter(s));
}
