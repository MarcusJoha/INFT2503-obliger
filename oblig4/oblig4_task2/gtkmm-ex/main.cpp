#include <gtkmm.h>
#include <iostream>

class Window : public Gtk::Window {
public:
  Gtk::VBox vbox;
  Gtk::Entry firstname_entry;
  Gtk::Entry surname_entry;
  Gtk::Button button;
  Gtk::Label label;
  Gtk::Label first_label;
  Gtk::Label second_label;

  Window() {

    Gtk::Window::set_title("Oblig 4");

    vbox.pack_start(first_label);
    vbox.pack_start(firstname_entry); // Add the widget entry to vbox
    vbox.pack_start(second_label);
    vbox.pack_start(surname_entry);

    button.set_label("Combine names");
    button.set_sensitive(false);

    vbox.pack_start(button); // Add the widget button to vbox
    vbox.pack_start(label);  // Add the widget label to vbox

    add(vbox);  // Add vbox to window
    show_all(); // Show all widgets

    first_label.set_text("First Name:");
    second_label.set_text("Second Name:");

    // [] -> capture list, hva vi ønsker å overføre til funksjonen.
    //
    auto update = [this]() {
      button.set_sensitive(!firstname_entry.get_text().empty() && !surname_entry.get_text().empty());
    };

    firstname_entry.signal_changed().connect(update);

    surname_entry.signal_changed().connect(update);

    button.signal_clicked().connect([this]() {
      label.set_text("Names combined: " + firstname_entry.get_text() + " " + surname_entry.get_text());
    });
  }
};

int main() {
  Gtk::Main gtk_main;
  Window window;
  gtk_main.run(window);
}
