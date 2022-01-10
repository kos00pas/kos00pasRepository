import java.util.HashSet;
import java.util.Set;

public class InstagramStory extends Video {

    Set<InstaEffect> effectSet = new HashSet<InstaEffect>();
    Set<InstaFilters> filters = new HashSet<InstaFilters>();

    double maxduration = 15; //in seconds
    String creator = "";

    public InstagramStory(String creator, int duration, String quality, String title) {

        super(title, duration, quality); //************************** 1 tropos g to extend

        this.creator = creator;
        super.resolution = "1080 x 1920"; //************************** 2 tropos g to extend
    }

    public double playonInstagram() {
        addtoCurrentTime();
        System.out.println("play on instagram " + title);
        return super.getCurrentTime();  //**************************
    }

    public double play(double speed) {
        playonInstagram();
        return 0;
    }

}
