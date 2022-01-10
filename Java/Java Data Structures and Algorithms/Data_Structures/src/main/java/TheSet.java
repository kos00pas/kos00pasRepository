import java.util.HashSet;
import java.util.Objects;
import java.util.Set;

public class TheSet {
    public static void main(String[] args){
        Set<Ball> balls =new HashSet<>();
        balls.add(new Ball("blue")); balls.add(new Ball("blue")); balls.add(new Ball("green ")); balls.add(new Ball("red"));
        System.out.println(balls.size());
/*_*/                                                                                                                   System.out.println();
        balls.forEach(System.out::println);
 /*_*/                                                                                                                   System.out.println();
        balls.remove(new Ball("red"));
        System.out.println(balls.size());
        balls.forEach(System.out::println);



    }
  static class Ball{
        String color;
        public Ball(String color){
            this.color=color;
        }
        //eq- και πατώ (βλέπε φώτο)
        @Override
        public boolean equals(Object o) {
            if (this == o) return true;
            if (o == null || getClass() != o.getClass()) return false;
            Ball ball = (Ball) o;
            return Objects.equals(color, ball.color);
        }
        @Override
        public int hashCode() {
            return Objects.hash(color);
        }
    }


}
