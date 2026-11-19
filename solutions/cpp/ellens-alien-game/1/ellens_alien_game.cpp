namespace targets {
class Alien {
    public:
        int x_coordinate;
        int y_coordinate;
        int health{3};
    
        Alien(int x, int y) {
            x_coordinate = x;
            y_coordinate = y;
        }
        
        int get_health() {
            return health;
        }

        bool hit() {
            if(is_alive())
            {
            health--;
            return true;
            }
            return false;
        }
        bool is_alive() {
            if(health > 0) {
                return true;   
            }
            return false;
        }
        bool teleport(int x_new, int y_new) {
            x_coordinate = x_new;
            y_coordinate = y_new;
            return true;
        }
        bool collision_detection(Alien another_alien) {
            if(another_alien.x_coordinate == x_coordinate and another_alien.y_coordinate == y_coordinate) {
                return true;
            }
            return false;
        }
    };
}  
