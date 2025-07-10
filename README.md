# 🚨 Sensor Jarak Otomatis dengan LED menggunakan Arduino (HC-SR04 + LED)

Proyek ini mendemonstrasikan penggunaan **sensor ultrasonik HC-SR04** untuk membaca jarak benda, dan **mengaktifkan LED** secara otomatis jika benda berada lebih dekat dari jarak tertentu (misal < 20 cm).

## 🧩 Komponen yang Dibutuhkan

| No | Komponen               | Keterangan Singkat                        |
|----|------------------------|------------------------------------------|
| 1️⃣ | Arduino Uno           | Mikrokontroler utama                     |
| 2️⃣ | Breadboard            | Tempat menyusun rangkaian                |
| 3️⃣ | Sensor HC-SR04        | Untuk membaca jarak objek                |
| 4️⃣ | LED                   | Akan menyala jika objek dekat            |
| 5️⃣ | Resistor 220Ω         | Untuk membatasi arus ke LED              |
| 6️⃣ | Kabel jumper          | Untuk menghubungkan semua komponen       |


## 🔌 Rangkaian & Pengkabelan

### 📍 Sensor HC-SR04

| Pin HC-SR04 | Sambungkan ke Arduino |
|-------------|------------------------|
| VCC         | 5V                     |
| GND         | GND                    |
| TRIG        | Pin 6                  |
| ECHO        | Pin 7                  |


### 📍 LED + Resistor

| Komponen       | Sambungkan ke                |
|----------------|------------------------------|
| LED (+) anoda  | ➡️ Ke salah satu ujung resistor |
| Resistor       | ➡️ Ke pin 13 Arduino           |
| LED (–) katoda | ➡️ Ke GND (melalui breadboard) |

📌 **Catatan:**  
Pastikan LED terhubung **dengan polaritas benar** dan resistor berada **di antara pin 13 dan anoda (kaki panjang) LED**.
