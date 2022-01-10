
public class Video {

    String quality = "";
    String resolution = "";
    double duration = 0;
    String title = "";
    String description = "";
    String[] cast;
    double rating;
    int year = 0;
    String genre;
    String country;
    private double currentTime = 0;
    double defaultspeed = 1;


    public Video(String title, double duration, String quality) {

        this.title = title;
        this.duration = duration;
        this.quality = quality;

    }

    public double play(double speed) {
        currentTime = currentTime + speed;
        System.out.println("playing... " + title + " " + currentTime);
        return currentTime;
    }

    public void stop() {
        currentTime = 0;

    }

    public void restart() {
        stop();
        play(defaultspeed);
    }

    public double getCurrentTime() {

        return currentTime;
    }

    public void addtoCurrentTime() {
        currentTime++;

    }
}
