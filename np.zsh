#!/usr/bin/zsh

# Define the usage function to display usage instructions.
function show_usage {
    echo "Usage: new-problem -n|--name <directory_name>"
    echo "       -n, --name: Specify the name of the new problem directory to create."
    echo "Example: new-problem -n reverse-linked-list"
}

# Check if no arguments were provided, or the help flag was specified.
size_argv=$#
if [[ $size_argv -eq 0 ]]; then
    echo "No arguments provided"
    show_usage
    exit 1
fi

# Parse the command-line arguments
name=""
for ((i=1; i<=$#; i++)); do
    case $argv[$i] in
        -n|--name)
            ((i++))
            name=$argv[$i]
            break;;
    esac
done

# If the 'name' flag is missing or empty, show usage and exit.
if [[ -z "$name" ]]; then
    echo "Name flag is missing"
    show_usage
    exit 1
fi

# Copy the sample files to the new directory
cp -r contest-sample/A $name

# Inform the user that the process is complete.
echo "New problem created in ./$name."
