public class Main {

    public static void main(String[] args) {

        System.out.println("Hello World!");

   /* example 1 :
        Video squidgame = new Video(" SquidGame ", 40, "FHD");
        System.out.println(squidgame.getCurrentTime());

            for (int i=0;  i<5; i++){
                squidgame.play(1);

            }

        System.out.println(squidgame.getCurrentTime());
    */
        //**************************
        Video squidgame = new Video("SquidGame", 40, "FHD"); // sketo video

        InstagramStory instaStory = new InstagramStory("johny", 5, "Medium", "instagram story"); //extend tou video to InstagramStory

        //*************************

        VideoManager manager = new VideoManager("FlashLight", 3, "the best video manager ever");

        //**************************
        //**************************

        manager.addVideo(squidgame);
        manager.addVideo(instaStory);

        manager.play(squidgame);
        manager.play(instaStory);

        manager.play("SquidGame");
        manager.play("instagram story");

        System.out.println("Remaining spaces" + manager.getRemainingSpace());

    }
}
