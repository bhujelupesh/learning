//even no of 0

#include <stdio.h>
#include <stdlib.h>

enum states {q0, q1};

enum states delta(enum states s, char ch) {
    switch (s) {
        case q0: return (ch == '0') ? q1 : q0;
        case q1: return (ch == '0') ? q0 : q1;
        default: return q0;
    }
}

int main() {
    char input[20];
    enum states curr_state = q0;
    
    printf("Enter the string: ");
    scanf("%s", input);
    
    for (int i = 0; input[i] != '\0'; i++) {
        curr_state = delta(curr_state, input[i]);
    }
    
    if (curr_state == q0)
        printf("Accepted\n");
    else
        printf("Rejected\n");
    
    return 0;
}
