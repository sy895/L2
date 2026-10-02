public class Premiere {
    private String message = "Bonjour le monde!";
    
    public void affiche() {
        System.out.println(message);
    }
    
    public String getMessage() {
        return message;
    }
    
    public void setMessage(String message) {
        this.message = message;
    }
}