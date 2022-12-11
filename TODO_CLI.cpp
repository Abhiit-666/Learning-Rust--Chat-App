#include <iostream>
#include <string>
#include <vector>

// Define a Task structure to store information about a single task
struct Task
{
  std::string description;
  bool is_complete;
};

int main()
{
  std::vector<Task> tasks;

  // Print instructions
  std::cout << "TODO CLI Tool\n"
            << "============\n"
            << "Commands:\n"
            << "  add <task description>  Add a new task\n"
            << "  ls                     List all tasks\n"
            << "  done <task index>      Mark a task as complete\n"
            << "  q                      Quit the program\n"
            << std::endl;

  // Main loop
  while (true)
  {
    // Print the prompt
    std::cout << "Enter a command: ";

    // Read the command
    std::string command;
    std::cin >> command;

    // Handle the 'add' command
    if (command == "add")
    {
      std::string description;
      std::getline(std::cin, description); // Read the description (everything after the "add" command)

      // Create a new task with the given description and mark it as incomplete
      Task task = {description, false};
      tasks.push_back(task);
    }
    // Handle the 'ls' command
    else if (command == "ls")
    {
      // Print a header
      std::cout << "\nTasks:\n";

      // Loop through all tasks and print their descriptions
      for (int i = 0; i < tasks.size(); ++i)
      {
        std::cout << "  " << i << ": " << tasks[i].description << (tasks[i].is_complete ? " (complete)" : "") << "\n";
      }

      std::cout << std::endl;
   
    }
  }
}