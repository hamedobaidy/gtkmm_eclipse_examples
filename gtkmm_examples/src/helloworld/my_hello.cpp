/*
 * my_hello.cpp
 *
 *  Created on: Jul 8, 2015
 *      Author: hamed
 */

#include <gtkmm/messagedialog.h>

#include "my_hello.h"

MyHello::MyHello()
: m_button("Click Me!") {
	// Sets the border width of the window.
	set_border_width(25);

	// set the window default size
	set_default_size(300, 200);

	// set window title
	set_title("Gtkmm Hello Application!");

	// set window position to center
	set_position(Gtk::WIN_POS_CENTER);

	// When the button receives the "clicked" signal, it will call the
	// on_button_clicked() method defined below.
	m_button.signal_clicked().connect(sigc::mem_fun(*this,&MyHello::on_button_clicked));

	// This packs the button into the Window (a container).
	add(m_button);

	// The final step is to display this newly created widget...
	m_button.show();
}

MyHello::~MyHello() {

}

void MyHello::on_button_clicked() {
	Gtk::MessageDialog message("Hello, World!");
	message.run();
}

