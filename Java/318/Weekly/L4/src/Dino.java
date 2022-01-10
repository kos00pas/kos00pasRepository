public class Dino extends Animal {

    public Dino(String onoma, String color) {
        super(onoma, color, 20);
    }

    public void throwFire() {
        System.out.println("Fire Fire");
    }

    public void speak(String sound) {
        throwFire();
        super.speak(sound);
        throwFire();
    }

}
