!define LANG "SVENSKA"

!insertmacro LANG_STRING PRODUCT_NAME "Firefly Media Server"

; Install strings
!insertmacro LANG_STRING STRING_BONJOUR_ERROR "Bonjour f�r Windows tj�nsten kan inte hittas.  Var v�nlig installera Apple's Bonjour f�r Windows."
!insertmacro LANG_STRING STRING_STOPPING_SERVICE "Stannar tj�nsten..."
!insertmacro LANG_STRING STRING_WAITING_FOR_STOP "V�ntar p� att tj�nsten ska stanna ($9)"

; Strings for the application install directory panel
!insertmacro LANG_STRING STRING_DESTFOLDER "Destination"
!insertmacro LANG_STRING STRING_DESTDETAIL "Installations programmet kommer installera ${PRODUCT_NAME} i f�ljande mapp.$\r$\n$\r$\nF�r att installera i en annan map, klicka Bl�ddra och v�lj en annan map. Klicka p� N�sta f�r att forts�tta."

; Strings for the music path directory panel
!insertmacro LANG_STRING STRING_MUSICTITLE "V�lj musik mapp"
!insertmacro LANG_STRING STRING_MUSICHEADER "V�lj mappen som inneh�ller musik att dela ut."
!insertmacro LANG_STRING STRING_MUSICFOLDER "Musik Mapp"
!insertmacro LANG_STRING STRING_MUSICDETAIL "Installationen kommer dela ut musiken i f�ljande mapp.$\r$\n$\r$\nF�r att dela ut en annan mapp, klicka Bl�ddra och v�lj en annan mapp. Klicka Installera f�r att starta installationen."

; These are for the startmenu shortcuts
!insertmacro LANG_BOTHSTRING STRING_WEBSITE "Websida"
!insertmacro LANG_BOTHSTRING STRING_UNINSTALL "Avinstallera"
!insertmacro LANG_BOTHSTRING STRING_DEBUG_MODE "Debug L�ge"
!insertmacro LANG_BOTHSTRING STRING_FF_CONFIGURATION "Firefly Konfiguration"
!insertmacro LANG_BOTHSTRING STRING_ADV_CONFIG "Avancerad Konfiguration"

; Uninstall Strings
!insertmacro LANG_UNSTRING STRING_UNINSTALLED "$(^Name) �r fullst�ndigt avinstallerad fr�n din dator."
!insertmacro LANG_UNSTRING STRING_AREYOUSURE "�r du s�ker p� att du vill avinstallera $(^Name) och alla dess komponenter?"
