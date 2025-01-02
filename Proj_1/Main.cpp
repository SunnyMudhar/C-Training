#include <iostream>
#include "Log.h"
#include "Contact.h"

void addContact(Contact*& contacts, int& count)
{
    Contact* newContacts = new Contact[count + 1];

    for (int i = 0; i < count; i++)
    {
    }
}

void viewContacts(Contact* contacts, int count);

void searchContact(Contact* contacts, int count);

void editContact(Contact*& contacts, int count);

void deleteContact(Contact*& contacts, int& count);

int main()
{

    Log Console;

    Contact* contacts = nullptr;
    int contactCount = 0;
    int choice;

    Console.log(Log::LOG, "Welcome to Contact Manager C++!");

    do
    {
        std::cout << "1. Add Contact\n";
        std::cout << "2. View All Contacts\n";
        std::cout << "3. Search for a Contact\n";
        std::cout << "4. Edit a Contact\n";
        std::cout << "5. Delete a Contact\n";
        std::cout << "6. Exit\n";
        std::cout << "Enter your choice: ";
        std::cin >> choice;

        // Handle user choice
        switch (choice) {
        case 1:
            addContact(contacts, contactCount);
            break;
        case 2:
            viewContacts(contacts, contactCount);
            break;
        case 3:
            searchContact(contacts, contactCount);
            break;
        case 4:
            editContact(contacts, contactCount);
            break;
        case 5:
            deleteContact(contacts, contactCount);
            break;
        case 6:
            std::cout << "Exiting program...\n";
            break;
        default:
            std::cout << "Invalid choice. Please try again.\n";
        }
    } while (choice != 6);

    // Free allocated memory
    delete[] contacts;
}
