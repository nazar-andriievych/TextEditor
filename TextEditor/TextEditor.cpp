#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_COMMAND_LENGTH 256

void print_help() {
    printf("Text Editor Commands:\n");
    printf("1         - Append text symbols to the end\n");
    printf("2         - Start the new line\n");
    printf("3         - Saving the information to a file\n");
    printf("4         - Load information from a file\n");
    printf("5         - Print the current text to console\n");
    printf("6         - Insert the text by line and symbol index\n");
    printf("7         - Text search\n");
    printf("8         - Delete\n");
    printf("9         - Undo\n");
    printf("10        - Redo\n");
    printf("11        - Cut\n");
    printf("12        - Copy\n");
    printf("13        - Paste\n");
    printf("14        - Insert with replacement\n");
    printf("The command is not implemented yet!\n");
}

static void process_command(const char* command) {
    if (command == NULL) {
        return;
    }

    switch (command[0]) {
    case 'h':
        if (strcmp(command, "help") == 0) {
            print_help();
            break;
        }
    case 'q':
        if (strcmp(command, "quit") == 0) {
            printf("Exiting the text editor.\n");
            exit(0);
        }
    case '1':
    case '2':
    case '3': 
    case '4': 
    case '5': 
    case '6': 
    case '7':
    case '8':
    case '9':
    case '10':
    case '11':
    case '12':
    case '13':
    case '14':
    default:
        printf("The command '%s' is not implemented.\n", command);
        break;
    }
}

int main() {
    char input[MAX_COMMAND_LENGTH];

    while (1) {
        printf("Enter a command: ");

        fgets(input, MAX_COMMAND_LENGTH, stdin);

        input[strcspn(input, "\n")] = '\0';

        process_command(input);
    }

    return 0;
}
