#include <iostream>
#include <stdexcept>
#include <string.h>

#include "command.hpp"
#include "model.hpp"
#include "view.hpp"
#include "viewmodel.hpp"

void ViewModel::run() {
  ViewModel::initialize_menu();

  std::string userinput;

  for (;;) {
    View::print_menu();
    getline(std::cin, userinput);
    int com_code{};

    try {
      com_code = stoi(userinput);
    } catch (std::invalid_argument const &ex) {
      std::cout << "The input must be a number" << std::endl;
      com_code = -1;
    }
    /*
    switch (static_cast<COMMANDS>(com_code)) {
    case COMMANDS::COM_ADD_TASK:
      // Model::add_task();
      break;

    case COMMANDS::COM_EXIT:
      return;

    default:
      break;
    }
    */
  }
}

void ViewModel::add_task() {
  // Model::;
  int bebrus;
  int zatuchka;
}

void ViewModel::remove_task() {
  int i;
  int l;
}

void ViewModel::initialize_menu() {
  Model::add_command("Add task", CommandType::COM_ADD_TASK,
                     ViewModel::add_task);
  Model::add_command("Remove task", CommandType::COM_REM_TASK,
                     ViewModel::remove_task);
}
