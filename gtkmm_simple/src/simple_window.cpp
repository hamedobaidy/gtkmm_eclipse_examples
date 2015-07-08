/*
 * simple_window.cpp
 *
 *  Created on: Jul 8, 2015
 *      Author: hamed
 */

#include "simple_window.h"

SimpleWindow::SimpleWindow()
: label("Simple Gtkmm application!") {
	set_default_size(300, 200);

	add(label);

	show_all_children(true);
}

SimpleWindow::~SimpleWindow() {

}
