/*
 * my_hello.h
 *
 *  Created on: Jul 8, 2015
 *      Author: hamed
 */

#ifndef MY_HELLO_H_
#define MY_HELLO_H_


#include <gtkmm/window.h>
#include <gtkmm/button.h>

class MyHello : public Gtk::Window {
public:
	MyHello();
	~MyHello();

protected:
	// Signal handlers
	void on_button_clicked();

	// Member widgets
	Gtk::Button m_button;
};


#endif /* MY_HELLO_H_ */
