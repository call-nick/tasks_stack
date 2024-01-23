#pragma once

class ViewModel {
  ViewModel() = delete;

  static void initialize_menu();
  static void add_task();
  static void remove_task();

public:
  static void run();
};
