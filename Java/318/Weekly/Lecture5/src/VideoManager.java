import java.util.HashSet;
import java.util.Set;

public class VideoManager {
    String name;
    int capacity;
    String description;

    Set<Video> availableVideos = new HashSet<Video>();// prosekse to Set<Video>

    public VideoManager(String name, int capacity, String description) {
        this.name = name;
        this.capacity = capacity;
        this.description = description;
    }

    public void play(String title) {
        for (Video v : availableVideos) {
            if (v.title.equals(title)) {
                v.play(1);
                break;
            }
        }

    }


    public void play(Video video) {

        video.play(1);
    }

    public int getRemainingSpace() {

        return capacity - availableVideos.size();
    }

    public void addVideo(Video video) {

        //check if the size of the set ,is less than capacity
        if (availableVideos.size() < capacity) {
            availableVideos.add(video);
            System.out.println("Video " + video.title + " was added");
        } else {
            System.out.println("The videomanager is full");
        }

    }

}
