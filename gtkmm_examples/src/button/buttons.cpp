/*
 ============================================================================
 Name        : gtkmm_button.cpp
 Author      : Hamed
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C++,
 ============================================================================
 */

#include "buttons.h"
#include <iostream>

Buttons::Buttons()
{
  m_button.add_pixlabel("info.xpm", "cool button");

  set_title("Pixmap'd buttons!");
  set_border_width(50);

  m_button.signal_clicked().connect( sigc::mem_fun(*this,
              &Buttons::on_button_clicked) );

  add(m_button);

  show_all_children();
}

Buttons::~Buttons()
{
}

void Buttons::on_button_clicked()
{
  std::cout << "The Button was clicked." << std::endl;
}
