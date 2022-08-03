// [Medium]
// I made two solutions
// the first one made with treemap
// the second made with linkedlist
// 1.
class MyCalendar {
    // variables
    // key: start, value: end
    private TreeMap<Integer, Integer> map;
    // functions
    public MyCalendar() {
        map = new TreeMap<>();
    }
    public boolean book(int start, int end) {
        Map.Entry<Integer, Integer> prevEvent = map.floorEntry(start);
        Map.Entry<Integer, Integer> nextEvent = map.ceilingEntry(start);
        if ((prevEvent == null || prevEvent.getValue() <= start) 
            && (nextEvent == null || nextEvent.getKey() >= end)) {
            map.put(start, end);
            return true;
        }
        return false;
    }
}
// 2.
import java.util.*;

class MyCalendar {
            // variables
             LinkedList<int[]> list;
            // functions
            public MyCalendar() {
                list = new LinkedList<>();
            }
            public boolean book(int start, int end) {
              int[] temp = {start,end};
                // else, not empty
                    for(int i = 0; i < list.size(); i++){
                     // save them
                        int[] arrayList = list.get(i);
                     // compare
                     if(
                             ((temp[0]>arrayList[0]) && (temp[0]<arrayList[1])) ||
                             ((temp[0]<=arrayList[0]) && (temp[1]>arrayList[0])) 
                     ){
                           return  false;
                     }
                    }
                   list.add(temp);
                    return  true;
            }
            
    }
