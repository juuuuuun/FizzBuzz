//
//  main.c
//  FizzBuzz
//
//  Created by Jun Oh on 2018-11-14.
//  Copyright © 2018 Jun Oh. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    for(int i=1; i<101; i++) {
        // If the number is multiple of 3, write Fizz
        // This condition comes before checking multiple of 5 since we want FizzBuzz
        if(i % 3 == 0) {
            printf("Fizz");
        }
        // If the number is multiple of 5, write Buzz
        // Buzz will be appended to Fizz if the number is both multiple of 3 and 5
        if(i % 5 == 0) {
            printf("Buzz");
        }
        // If the number is neither multiple of 3 nor 5, write the number
        if(i % 3 != 0 && i % 5 != 0) {
            printf("%d", i);
        }
        // After each number or Fizz/Buzz, add a new line
        printf("\n");
    }
    
    return 0;
    
}
