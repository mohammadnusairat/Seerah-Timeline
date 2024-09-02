#include <iostream>
#include <map>
#include <vector>
using namespace std;

/*
@description: program that displays to the user a timeline
of the events in the life of the Prophet Muhammad (SAW). 
@date: 9/2/2024
@author: Mohammad Nusairat
@important: Dates are in CE
*/

void PrintMenu() {
    cout << "[A] Print all events in the life of the Prophet Muhammad (SAW) from Birth to the Public Stage." << endl;
    cout << "[B] Print all events in the life of the Prophet Muhammad (SAW) from Public Stage to Migration." << endl;
    cout << "[C] Print all events in the life of the Prophet Muhammad (SAW) from Migration to Death." << endl;
    cout << "[D] Print all battles and expeditions during the time of the Prophet Muhammad (SAW) as the head of state in Madinah." << endl;
    cout << "[E] Quit the program." << endl;
}

map<int, string> LoadBirthToPublicStage() {
    map<int, string> m;
    m[570] = "Prophet Muhammad (SAW) is born.";
    m[571] = "Prophet Muhammad (SAW) is taken by wet nurse Halima as-Saadiyah.";
    m[575] = "Prophet Muhammad (SAW)'s chest is opened. His mother (Amina), passes away.";
    m[610] = "Prophet Muhammad (SAW) is given the first revelation from Angel Gabrial. Private Culturing continues until 613 CE.";
    return m;
}

map<int, string> LoadPublicStageToMigration() {
    map<int, string> m;
    m[613] = "Persecution of muslims begins.";
    m[614] = "Some muslims migrate to Abyssinia.";
    m[615] = "Hamza bin abdul-Mutallib (RA) and Umar ibn al-Khattab (RA) accept islam.";
    m[616] = "Muslims are boycotted for a duration of 3 years.";
    m[619] = "Both Abu Talib and Khadijah pass away.";
    m[620] = "Al-Israa' wal-Mi'raaj.";
    m[621] = "First Pledge of 'Aqabah.";
    m[622] = "Second Pledge of 'Aqabah.";
    return m;
}

map<int, string> LoadMigrationToDeath() {
    map<int, string> m;
    m[623] = "The migration to Madinah occurs.";
    m[624] = "Battle of Badr.";
    m[625] = "Expulsion of Banu Nadir.";
    m[627] = "Battle of Khandaq. Treaty of Hudaybiyah.";
    m[628] = "Battle of Khaybar.";
    m[629] = "Conquest of Makkah.";
    m[630] = "Battle of Tabuk.";
    m[632] = "Farewell Pilgrimage. Prophet Muhammad (SAW) passes away 633 CE.";
    return m;
}

map<int, string> LoadBattlesAndExpeditions() {
    map<int, string> m;
    m[623] += "Expedition of Hamza ibn 'Abdul-Muttalib.\n";
    m[623] += "Expedition of Ubaydah ibn al-Harith.\n";
    m[623] += "Expedition of al-Kharrar.\n";
    m[623] += "Patrol of Waddan (al-Abwa').\n";
    m[623] += "Patrol of Buwat.\n";
    m[623] += "First Expedition to Badr (Safwan).\n";
    m[623] += "Patrol of Zul Al-Ushairah.\n";
    m[624] += "Nakhla Raid.\n";
    m[624] += "Battle of Badr.\n";
    m[624] += "Invasion of Banu Qaynuqa.\n";
    m[624] += "Invasion of Sawiq.\n";
    m[624] += "Al Kudr Invasion.\n";
    m[624] += "Killing of Ka'b ibn al-Ashraf.\n";
    m[624] += "Dhu Amarr raid.\n";
    m[624] += "Invasion of Buhran.\n";
    m[624] += "Al-Qarada raid.\n";
    m[625] += "Battle of Uhud.\n";
    m[625] += "Battle of Hamra al-Asad.\n";
    m[625] += "Expedition of Qatan.\n";
    m[625] += "Expedition of Abdullah Ibn Unais.\n";
    m[625] += "Expedition of Al Raji.\n";
    m[625] += "Expedition of Bir Maona.\n";
    m[625] += "Invasion of Banu Nadir.\n";
    m[626] += "Expedition of Badr al-Maw'id.\n";
    m[626] += "Expedition of Dhat al-Riqa.\n";
    m[626] += "Expedition of Dumat al-Jandal.\n";
    m[627] += "Expedition of al-Muraysi'.\n";
    m[627] += "Battle of the Trench.\n";
    m[627] += "Invasion of Banu Qurayza.\n";
    m[627] += "Expedition of Muhammad ibn Maslamah.\n";
    m[627] += "Invasion of Banu Lahyan.\n";
    m[627] += "Expedition of Dhu Qarad.\n";
    m[627] += "Expedition of Ukasha bin Al-Mihsan.\n";
    m[627] += "First Raid on Banu Thalabah.\n";
    m[627] += "Second Raid on Banu Thalabah.\n";
    m[627] += "Expedition of Zaid ibn Haritha (Al-Jumum).\n";
    m[627] += "Expedition of Zaid ibn Haritha (Al-Is).\n";
    m[627] += "Third Raid on Banu Thalabah.\n";
    m[627] += "Expedition of Zayd ibn Harithah (Hisma).\n";
    m[627] += "Expedition of Zayd ibn Harithah (Wadi al-Qura).\n";
    m[627] += "Expedition of Abdur Rahman bin Auf.\n";
    m[627] += "Expedition of Fidak.\n";
    m[627] += "Second Expedition of Wadi al-Qura.\n";
    m[628] += "Expedition of Kurz bin Jabir Al-Fihri.\n";
    m[628] += "Expedition of Abdullah ibn Rawaha.\n";
    m[628] += "Treaty of Hudaybiyyah.\n";
    m[628] += "Conquest of Fidak.\n";
    m[628] += "Battle of Khaybar.\n";
    m[628] += "Third Expedition of Wadi al Qura.\n";
    m[628] += "Expedition of Umar ibn al-Khatab.\n";
    m[628] += "Expedition of Abu Bakr As-Siddiq.\n";
    m[628] += "Expedition of Bashir Ibn Sa’d al-Ansari (Fadak).\n";
    m[628] += "Expedition of Ghalib ibn Abdullah al-Laithi (Mayfah).\n";
    m[628] += "Expedition of Bashir Ibn Sa’d al-Ansari (Yemen).\n";
    m[629] += "Expedition of Ibn Abi Al-Awja Al-Sulami.\n";
    m[629] += "Expedition of Ghalib ibn Abdullah al-Laithi (Fadak).\n";
    m[629] += "Expedition of Ghalib ibn Abdullah al-Laithi (Al-Kadid).\n";
    m[629] += "Expedition of Shuja ibn Wahb al-Asadi.\n";
    m[629] += "Expedition of Ka’b ibn 'Umair al-Ghifari.\n";
    m[629] += "Battle of Mu'tah.\n";
    m[629] += "Expedition of Amr ibn al-As.\n";
    m[629] += "Expedition of Abu Ubaidah ibn al Jarrah.\n";
    m[629] += "Expedition of Abi Hadrad al-Aslami.\n";
    m[629] += "Expedition of Abu Qatadah ibn Rab'i al-Ansari (Khadirah).\n";
    m[629] += "Expedition of Abu Qatadah ibn Rab'i al-Ansari (Batn Edam).\n";
    m[630] += "Conquest of Mecca.\n";
    m[630] += "Expedition of Khalid ibn al-Walid (Nakhla).\n";
    m[630] += "Raid of Amr ibn al-As.\n";
    m[630] += "Raid of Sa'd ibn Zaid al-Ashhali.\n";
    m[630] += "Expedition of Khalid ibn al-Walid (Banu Jadhimah).\n";
    m[630] += "Battle of Hunayn.\n";
    m[630] += "Expedition of At-Tufail ibn 'Amr Ad-Dausi.\n";
    m[630] += "Battle of Autas.\n";
    m[630] += "Expedition of Abu Amir Al-Ashari.\n";
    m[630] += "Expedition of Abu Musa Al-Ashari.\n";
    m[630] += "Siege of Ta'if.\n";
    m[630] += "Expedition of Uyainah bin Hisn.\n";
    m[630] += "Expedition of Qutbah ibn Amir.\n";
    m[630] += "Expedition of Dahhak al-Kilabi.\n";
    m[630] += "Expedition of Alqammah bin Mujazziz.\n";
    m[630] += "Expedition of Ali ibn Abi Talib (Al-Fuls).\n";
    m[630] += "Expedition of Ukasha bin Al-Mihsan (Udhrah and Baliy).\n";
    m[630] += "Battle of Tabuk.\n";
    m[630] += "Expedition of Khalid ibn al-Walid (Dumatul Jandal).\n";
    m[630] += "Expedition of Abu Sufyan ibn Harb.\n";
    m[630] += "Demolition of Masjid al-Dirar.\n";
    m[631] += "Expedition of Khalid ibn al-Walid (2nd Dumatul Jandal).\n";
    m[631] += "Expedition of Surad ibn Abdullah.\n";
    m[631] += "Expedition of Khalid ibn al-Walid (Najran).\n";
    m[631] += "Expedition of Ali ibn Abi Talib (Mudhij).\n";
    m[631] += "Expedition of Ali ibn Abi Talib (Hamdan).\n";
    m[632] += "Demolition of Dhul Khalasa.\n";
    m[632] += "Expedition of Usama bin Zayd (Mu'tah).\n";
    return m;
}

int main() {
    // vectors of keys for maps with info
    const vector<int> BirthToPublicStageTimeline = {570, 571, 575, 610};
    const vector<int> PublicStageToMigrationTimeline = {613, 614, 615, 616, 619, 620, 621, 622};
    const vector<int> MigrationToDeathTimeline = {623, 624, 625, 627, 628, 629, 630, 632};
    const vector<int> BattlesAndExpeditionsTimeline = {623, 624, 625, 626, 627, 628, 629, 630, 631, 632};

    // maps of information of specific years
    map<int, string> BirthToPublicStageEvents = LoadBirthToPublicStage();
    map<int, string> PublicStageToMigrationEvents = LoadPublicStageToMigration();
    map<int, string> MigrationToDeathEvents = LoadMigrationToDeath();
    map<int, string> BattlesAndExpeditionsEvents = LoadBattlesAndExpeditions();

    string cmd = "";
    do {
        // output the menu
        PrintMenu();

        // ask for user input
        cin >> cmd;
        cout << endl;

        // execute user command
        if (cmd == "A") {
            for (int i = 0; i < BirthToPublicStageTimeline.size(); i++) {
                int year = BirthToPublicStageTimeline.at(i);
                string event = BirthToPublicStageEvents[year];
                cout << year << " CE: " << event << endl;
            }
            cout << endl;
        } else if (cmd == "B") {
            for (int i = 0; i < PublicStageToMigrationTimeline.size(); i++) {
                int year = PublicStageToMigrationTimeline.at(i);
                string event = PublicStageToMigrationEvents[year];
                cout << year << " CE: " << event << endl;
            }
            cout << endl;
        } else if (cmd == "C") {
            for (int i = 0; i < MigrationToDeathTimeline.size(); i++) {
                int year = MigrationToDeathTimeline.at(i);
                string event = MigrationToDeathEvents[year];
                cout << year << " CE: " << event << endl;
            }
            cout << endl;
        } else if (cmd == "D") {
            for (int i = 0; i < BattlesAndExpeditionsTimeline.size(); i++) {
                int year = BattlesAndExpeditionsTimeline.at(i);
                string event = BattlesAndExpeditionsEvents[year];
                cout << year << " CE:\n" << event << endl;
        }
            cout << endl;
        }
    } while (cmd != "E");
    
    
    return 0;
}
