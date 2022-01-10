public class Person {
    String name = "uk";
    private int age = 0;
    int height = 0;

    Person(String name, int age, int height) {
        this.name = name;
        this.age = age;
        this.height = height;
    }

    public void speak() {
        System.out.println("Hello");
    }


    public void speak(String name) {
        System.out.println("eimai o " + name);
    }

    public void speak(String name, int age) {
        System.out.println("eimai o " + name + "kai eimai " + age + "xronon");
    }

    public void speak(String name, int age, int height) {
        System.out.println("eimai o " + name + "kai eimai " + age + "xronon kai exo  " + age + "ipsos");

    }

    public void setAge(int new_age) {
        age = new_age;
    }

    public int getAge() {
        return age;
    }

}


    int[][] array2D = new int[4][5];

    for(int i=0;i<array2D.length;i++){
        for(int j=0;j<array2D.length;j++){
        array[i][j]=0;
        }
        }
