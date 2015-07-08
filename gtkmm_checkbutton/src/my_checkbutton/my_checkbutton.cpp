
/*
 * my_checkbutton.cpp
 *
 *  Created on: Jul 8, 2015
 *      Author: hamed
 */

#include <iostream>

#include "my_checkbutton.h"

MyCheckButton::MyCheckButton()
: m_check("Check Me!") {
	set_default_size(300, 200);
	set_title("CheckButton Example!");
	set_border_width(25);
	set_position(Gtk::WIN_POS_CENTER);

	m_check.signal_clicked().connect(sigc::mem_fun(*this, &MyCheckButton::on_button_clicked));

	add(m_check);

	m_check.show();
}

MyCheckButton::~MyCheckButton() {
}

void MyCheckButton::on_button_clicked() {
	if(m_check.get_active())
		std::cout << "CheckButton selected!\n";
	else
		std::cout << "CheckButton deselected!\n";
}

