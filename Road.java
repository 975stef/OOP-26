public class Road {
    private String type;
    private double length;
    private int speedLimit;

    public Road(String type, double length, int speedLimit) {
        this.type = type;
        this.length = length;
        this.speedLimit = speedLimit;
    }

    public String getType() { return type; }
    public void setType(String type) { this.type = type; }

    public double getLength() { return length; }
    public void setLength(double length) { this.length = length; }

    public int getSpeedLimit() { return speedLimit; }
    public void setSpeedLimit(int speedLimit) { this.speedLimit = speedLimit; }

    @Override
    public String toString() {
        return "Road{" + "type='" + type + '\'' + ", length=" + length + 
               ", speedLimit=" + speedLimit + '}';
    }
}