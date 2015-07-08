/*
 ============================================================================
 Name        : gtkmm_button.cpp
 Author      : Hamed
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C++,
 ============================================================================
 */

#include "my_button.h"

#include <iostream>

#include <gtkmm/messagedialog.h>

MyButton::MyButton() {
	set_default_size(300, 200);
	set_position(Gtk::WIN_POS_CENTER);
	m_button.add_pixlabel("info.xpm", "Button Example!");

	set_title("Pixmap'd buttons!");
	set_border_width(25);

	m_button.signal_clicked().connect(
			sigc::mem_fun(*this, &MyButton::on_button_clicked));

	m_button.signal_pressed().connect(
			sigc::mem_fun(*this, &MyButton::on_button_pressed));

	m_button.signal_released().connect(
			sigc::mem_fun(*this, &MyButton::on_button_released));

	m_button.signal_enter().connect(sigc::mem_fun(*this, &MyButton::on_button_enter));

	m_button.signal_leave().connect(sigc::mem_fun(*this, &MyButton::on_button_leave));

	add(m_button);

	show_all_children();
}

MyButton::~MyButton() {
}

void MyButton::on_button_clicked() {
	Gtk::MessageDialog message("Button Clicked!");
	message.run();
}

void MyButton::on_button_pressed() {
	std::cout << "Button pressed!\n";
}

void MyButton::on_button_released() {
	std::cout << "Button released!\n";
}

void MyButton::on_button_enter() {
	std::cout << "Mouse entered!\n";
}

void MyButton::on_button_leave() {
	std::cout << "Mouse leaved!\n";
}
