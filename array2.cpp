#include <iostream>



If you put less elements than the amount specified in the declaration, the compiler
    //will automaticaly fill out those left out with 0 or '\0' is the array is of char.
    // Change the array to int house_block [] [5] [4], and because all inner arrays have 3,
    // elements, the fourth will be autofilled with 0.
    // Also remove some other elements, I chose the {4,5,6} array but you can add others 
    // when recording to make this a bit fun. The left out indexes will be auto filled with 
    // zeros
 
    int house_block2 [] [5] [4] {     // Try to make the last dimension 5 and show
                                    //that the compiler appends 2 zeros
        {{1,2,3},{4},{7,8,9},{10,11,12},{13,14,15}}  //The one element array will be autofilled,// with zeros to complete 4 elements,
        {{16,17,18},{19,20,21},{22,23,24},{25,26,27},{28,29,30}},
        {{ 31,32,33},{34,35,36},{37,38,39},{40,41,42},{43,44,45}},
        {{46,47,48},{49,50,51},{52,53,54},{55,56,57}}//,{58,59,60}  // The spots for {58,59,60
                                                                       // Will be autofilled with 0
        
          
    };