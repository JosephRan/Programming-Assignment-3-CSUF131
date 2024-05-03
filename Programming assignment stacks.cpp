#include <iostream>
#include <stack>
#include <string>

bool StatementBalancedCheck(std::string statement) {
    std::stack<char> ParenthesesCheck;

    for (char parentheses : statement) {
        if (parentheses == '(') {
        // If an open parentheses is found, place it in the stack
            ParenthesesCheck.push(parentheses);
        }
        else if (parentheses == ')') {
            if (ParenthesesCheck.empty()) {
                return false;
        // If a close parentheses is found without an open parentheses in the stack, return that the statement is not balanced.
            }
            ParenthesesCheck.pop();
        // If a close parentheses is found with an open parentheses in the stack, pop the open parentheses from the stack.
        }
    }
    return ParenthesesCheck.empty();
}

int main() {
    std::string statement;
    std::cout << "Enter a statement to balance: ";
    std::cin >> statement;

    //Requests a string to check for balanced parentheses.

    if (StatementBalancedCheck(statement)) { // Checks if the provided sentence/string has a balanced amount of parentheses, then returns an output if it is or is not.
        std::cout << "Statement is balanced\n";
    }
    else {
        std::cout << "Statement is not balanced\n";
    }
}