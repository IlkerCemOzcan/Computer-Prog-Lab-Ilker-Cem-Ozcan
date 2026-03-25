#include <iostream>

using namespace std;
Song* head;
Song* tail;
Song* current;

struct Song {
string title;
string artist;
int ratings[3];
Song* next;
Song* prev;
};



int addFunction(){

cout <<"Please enter the title of the song";
cin >> title;
cout << "Please enter the rating of the song";
cin >> ratings[3];

}
int nextFunction() {
 if(current != nullptr && current->next != nullptr) {

    current = current->next;
    cout << "next:" <<
    current->title << endl;
 }

}
int prevFunction() {
if(current != nullptr && current->prev != nullptr) {

    current = current->prev;
    cout << "prev:" <<
    current->title << endl;
}
else {
    cout << "You are at the first song" << endl;
}
}
int displayFunction() {
cout << "\nPlaylist:\n";
for(Song* temp = head; temp != nullptr; temp = temp->next){
    cout << temp->title << endl;
    if (Song = current){
    cout << "->" << endl;

    }
}

}
int deleteFunction() {
delete current;

}

int main()
{
int choice;
while(1){
cout << "Press 1 for adding song, 2 for deleting song, 3 for next song, 4 for prev song, 5 for displaying the playlist" << endl;
cin >> choice;

if (choice = 1){
    addFunction();
}
else if (choice = 2){
  deleteFunction();
}
else if (choice = 3){
    nextFunction();
}
else if (choice = 4){
    prevFunction();
}
else if (choice = 5){
    displayFunction();
}
else {
    cout<< "Invalid option" << endl;
}
}
}
