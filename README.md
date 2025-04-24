1	Ohjelman rakenne

Ohjelma koostuu pääohjelmasta ja 8 aliohjelmasta. 

Ensimmäisenä pääohjelmassa on ohjelman yksinkertaisin toiminto. Tämän suorittaakseen ohjelma käynnistetään komentoriviltä antamalla ainoastaan ohjelman nimi. Kun ohjelma käynnistyy, käyttäjä antaa merkkijonon, josta haetaan käyttäjän antamaa toista merkkijonoa. Pääohjelma palauttaa sitten indeksin, josta haettu merkkijono löytyy. Jos merkkijonoa ei löydy ohjelmasta, ohjelma ilmoittaa tämän käyttäjälle. 

Pääohjelmassa tapahtuu valinta siitä, montaako argumenttia ohjelmaa suorittaessa käytetään. Jokainen optio on jaettu suoritettaviin lohkoihin sen perusteella montako argumenttia ja mitä optioita käyttäjä antaa ohjelmalle.

Kun pääohjelmassa tapahtunut valinta on tehty, siirrytään aliohjelmiin. Jokai-nen eri optio on jaettu erilliseen aliohjelmaan.

1.1	Aliohjelmien toiminnasta

readFile-aliohjelma suoritetaan, kun käyttäjä antaa kolme argumenttia ohjelmalle muodossa: MyGrep.exe <Haettava merkkijono> <Tiedosto, josta merkkijonoa haetaan>. Jos ohjelma ei löydä haettua merkkijonoa tiedostosta, ohjelmaa ilmoittaa tämän käyttäjälle. Jos tiedoston aukaisu ei onnistu, ohjelma palauttaa virheilmoituksen. Nämä kaksi edeltävää toimintoa on jokaisessa aliohjelmassa, joten tästä edespäin niitä ei ole erikseen listattu. Alla kuvakaappaus oikeanlaisesta toiminnasta. Ohjelma palauttaa rivit, joista löytyy merkkijono ”following”.

![kuva](https://github.com/user-attachments/assets/2a2e9ac9-f775-4b3b-a9cc-bba669ba927e)

Kuva 1. readFile-aliohjelman toiminta.


readFileAndReturnLine-aliohjelma suoritetaan, jos käyttäjä antaa neljä argumenttia ohjelmalle muodossa: MyGrep.exe <-ol> <Haettava merkkijono> <Tiedosto>.  Aliohjelma tulostaa rivit, joilta kysytty merkkijono löytyy. 

![kuva](https://github.com/user-attachments/assets/f360fc32-3939-4c00-9a86-29db3ff5ea53)

Kuva 2. readFileAndReturnLine-aliohjelman toiminta.


readFileAndReturnLineAmount-aliohjelma suoritetaan, jos käyttäjä antaa neljä argumenttia ohjelmalle muodossa:
MyGrep.exe <-oo> <Haettava merkkijono> <Tiedosto>. Tämä aliohjelma palauttaa numeron, joka osoittaa kuinka monta kertaa käyttäjän antama merkkijono löydettiin annetusta tiedostosta.

![kuva](https://github.com/user-attachments/assets/5361547c-8746-4277-8f20-2a0a33d37f77)

Kuva 3. readFileAndReturnLineAmount-aliohjelman toiminta.

readFileAndReturnLineAndOcc-aliohjelma suoritetaan, jos käyttäjä antaa neljä argumenttia ohjelmalle muodossa: MyGrep.exe <-olo> <Haettava merkki-jono> <Tiedosto>. Aliohjelma palauttaa sekä rivit, joilta merkkijono löytyi, että merkkijonojen kokonaismäärän.

![kuva](https://github.com/user-attachments/assets/41e0b79c-2d39-446a-911c-876a3579e0cc)

Kuva 4. readFileAndReturnLineAndOcc-aliohjelman toiminta.

readFileAndReverseSearch-aliohjelma suoritetaan käyttäjän antaessa neljä argumenttia ohjelmalla seuraavassa muodossa: MyGrep.exe <-or> <Haettava merkkijono> <Tiedosto>. Tämä aliohjelma tekee käänteishaun annetulle merkkijonolle eli palauttaa kaikki rivit, joilla ei ole argumentiksi annettua merkkijonoa. 

![kuva](https://github.com/user-attachments/assets/686d7d7a-fd7a-4c29-b6f5-29253ed18286)

Kuva 5. readFileAndReverseSearch-aliohjelman toiminta.

toLowerCase-aliohjelma on aliohjelma, joka muuntaa kaikki kirjaimet pieniksi kirjaimiksi. Tätä aliohjelmaa kutsutaan ignoreCase- ja allOptions-aliohjelmissa.

ignoreCase-aliohjelma suoritetaan, kun käyttäjä antaa neljä argumenttia ohjelmalla seuraavassa muodossa: MyGrep.exe <-oi> <Haettava merkkijono> <Tiedosto>. Tämän aliohjelman tarkoitus on löytää tiedostosta käyttäjän antama merkkijono, riippumatta siitä onko se syötetty pienillä tai isoilla kirjaimilla. 

![kuva](https://github.com/user-attachments/assets/dadd7937-cd10-468b-8e28-7661783de901)

Kuva 6. ignoreCase-aliohjelman toiminta.

allOptions-aliohjelma suoritetaan, kun käyttäjä antaa neljä argumenttia ohjelmalla seuraavassa muodossa: MyGrep.exe <-olori> <Haettava merkkijono> <Tiedosto>. Tämä aliohjelma suorittaa kaikkien muiden optioiden toiminnot kerralla. Kuvassa rivinumerot, käänteishaku ”folloWING”-merkkijonolle, rivien määrä, jolta merkkijono löytyi. Ohjelma ottaa myös vastaan erikokoiset kirjaimet.

![kuva](https://github.com/user-attachments/assets/9301c03e-6a9a-4031-8903-b0bebfe42492)
![kuva](https://github.com/user-attachments/assets/e0bca343-1914-40ce-8929-91275ba2e597)

Kuva 7. allOptions-aliohjelman toiminta.


1.1.1	Poikkeuskäsittelyt ohjelmassa

Kun tiedostoa ei pystytä avaamaan syystä tai toisesta, ohjelma palauttaa virheilmoituksen. 

![kuva](https://github.com/user-attachments/assets/d3c7ee5c-055d-4c39-94a7-a57a5eef5012)

Kuva 8. Virheilmoitus ohjelmassa.













