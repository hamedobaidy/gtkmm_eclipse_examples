/*
 * my_checkbutton.h
 *
 *  Created on: Jul 8, 2015
 *      Author: hamed
 */

#ifndef MY_CHECKBUTTON_H_
#define MY_CHECKBUTTON_H_


#include <gtkmm/window.h>
#include <gtkmm/checkbutton.h>

class MyCheckButton : public Gtk::Window {
public:
	MyCheckButton();
	virtual ~MyCheckButton();

protected:
	// signals
	void on_button_clicked();

	// member widgets
	Gtk::CheckButton m_check;
};


#endif /* MY_CHECKBUTTON_H_ */
