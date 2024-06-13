//import java.util.ArrayList;
//import java.util.Random;
//import java.util.Scanner;
//
//public class Main {
//    public static void main(String[] args) {
//        GameBoard board = new GameBoard();
//        Scanner scanner = new Scanner(System.in);
//
//        System.out.println("Enter number of players (2-4): ");
//        int numPlayers = scanner.nextInt();
//        scanner.nextLine(); // consume the newline
//
//        ArrayList<Player> players = new ArrayList<>();
//        for (int i = 1; i <= numPlayers; i++) {
//            System.out.println("Enter name for player " + i + ": ");
//            String name = scanner.nextLine();
//            players.add(new Player(name));
//        }
//
//        boolean gameRunning = true;
//        Random random = new Random();
//
//        while (gameRunning) {
//            for (Player player : players) {
//                System.out.println(player.getName() + "'s turn. Press Enter to roll the die.");
//                scanner.nextLine();
//                int roll = random.nextInt(6) + 1;
//                System.out.println(player.getName() + " rolled a " + roll);
//                player.move(roll, board);
//                board.displayBoard(players);
//
//                // For simplicity, we assume the game ends when any player reaches position 100
//                if (player.getPosition() == 100) {
//                    System.out.println(player.getName() + " wins!");
//                    gameRunning = false;
//                    break;
//                }
//            }
//        }
//
//        scanner.close();
//    }
//}
//import java.util.HashMap;
//
//public class GameBoard {
//    private final int size = 100; // Board size
//    private final HashMap<Integer, Integer> snakes; // Positions of snakes
//    private final HashMap<Integer, Integer> ladders; // Positions of ladders
//
//    public GameBoard() {
//        snakes = new HashMap<>();
//        ladders = new HashMap<>();
//        initializeSnakes();
//        initializeLadders();
//    }
//
//    private void initializeSnakes() {
//        // Define snakes (head, tail)
//        snakes.put(16, 6);
//        snakes.put(47, 26);
//        snakes.put(49, 11);
//        snakes.put(56, 53);
//        snakes.put(62, 19);
//        snakes.put(64, 60);
//        snakes.put(87, 24);
//        snakes.put(93, 73);
//        snakes.put(95, 75);
//        snakes.put(98, 78);
//    }
//
//    private void initializeLadders() {
//        // Define ladders (bottom, top)
//        ladders.put(1, 38);
//        ladders.put(4, 14);
//        ladders.put(9, 31);
//        ladders.put(21, 42);
//        ladders.put(28, 84);
//        ladders.put(36, 44);
//        ladders.put(51, 67);
//        ladders.put(71, 91);
//        ladders.put(80, 100);
//    }
//
//    public int getSize() {
//        return size;
//    }
//
//    public int checkPosition(int position) {
//        if (snakes.containsKey(position)) {
//            System.out.println("Oops! Landed on a snake at " + position);
//            return snakes.get(position);
//        } else if (ladders.containsKey(position)) {
//            System.out.println("Yay! Climbed a ladder at " + position);
//            return ladders.get(position);
//        }
//        return position;
//    }
//
//    public void displayBoard(ArrayList<Player> players) {
//        System.out.println("Current positions:");
//        for (Player player : players) {
//            System.out.println(player.getName() + " is at position " + player.getPosition());
//        }
//    }
//}
//import java.util.HashMap;
//
//public class GameBoard {
//    private final int size = 100; // Board size
//    private final HashMap<Integer, Integer> snakes; // Positions of snakes
//    private final HashMap<Integer, Integer> ladders; // Positions of ladders
//
//    public GameBoard() {
//        snakes = new HashMap<>();
//        ladders = new HashMap<>();
//        initializeSnakes();
//        initializeLadders();
//    }
//
//    private void initializeSnakes() {
//        // Define snakes (head, tail)
//        snakes.put(16, 6);
//        snakes.put(47, 26);
//        snakes.put(49, 11);
//        snakes.put(56, 53);
//        snakes.put(62, 19);
//        snakes.put(64, 60);
//        snakes.put(87, 24);
//        snakes.put(93, 73);
//        snakes.put(95, 75);
//        snakes.put(98, 78);
//    }
//
//    private void initializeLadders() {
//        // Define ladders (bottom, top)
//        ladders.put(1, 38);
//        ladders.put(4, 14);
//        ladders.put(9, 31);
//        ladders.put(21, 42);
//        ladders.put(28, 84);
//        ladders.put(36, 44);
//        ladders.put(51, 67);
//        ladders.put(71, 91);
//        ladders.put(80, 100);
//    }
//
//    public int getSize() {
//        return size;
//    }
//
//    public int checkPosition(int position) {
//        if (snakes.containsKey(position)) {
//            System.out.println("Oops! Landed on a snake at " + position);
//            return snakes.get(position);
//        } else if (ladders.containsKey(position)) {
//            System.out.println("Yay! Climbed a ladder at " + position);
//            return ladders.get(position);
//        }
//        return position;
//    }
//
//    public void displayBoard(ArrayList<Player> players) {
//        System.out.println("Current positions:");
//        for (Player player : players) {
//            System.out.println(player.getName() + " is at position " + player.getPosition());
//        }
//    }
//}
//public class Player {
//    private String name;
//    private int position;
//
//    public Player(String name) {
//        this.name = name;
//        this.position = 0; // Starting position
//    }
//
//    public String getName() {
//        return name;
//    }
//
//    public int getPosition() {
//        return position;
//    }
//
//    public void move(int roll, GameBoard board) {
//        position += roll;
//        if (position > board.getSize()) {
//            position = board.getSize(); // Stay at final position if exceeding
//        }
//        position = board.checkPosition(position);
//        System.out.println(name + " moved to position " + position);
//    }
//}

