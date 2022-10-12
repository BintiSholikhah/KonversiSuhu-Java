import java.util.Scanner;
public class Main {
    public static void main(String[] args){
                                                            //BINTI SHOLIKHAH (2100018299)
        Scanner input = new Scanner(System.in);

        double celcius, fahrenheight, reamur, kelvin;
        int pilihan;

        System.out.print("Masukkan suhu CELCIUS: ");
        celcius = input.nextDouble();
        System.out.println("[1] Reamur      [2] Fahrenheight    [3] Kelvin");
        System.out.print("Masukkan pilihan konversi: ");
        pilihan = input.nextInt();
        if(pilihan == 1){
            reamur = (4.0/5.0)*celcius;
            System.out.println("Suhu dalam REAMUR: "+reamur);
        }else if (pilihan == 2) {
            fahrenheight = (9.0/5.0)*celcius+32;
            System.out.println("Suhu dalam FAHRENHEIGHT: " +fahrenheight);
        }else{
            kelvin=celcius+273.15;
            System.out.println("Suhu dalam KELVIN: "+kelvin);
        }
    }
}