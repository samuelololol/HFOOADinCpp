package chapter1;

public class Guitar {
    private String serialNumber;
    private String builder;
    private String model;
    private String backWood;
    private String topWood;
    private String type;

    public double getPrice() {
        return price;
    }

    private double price;

    public String getSerialNumber() {
        return this.serialNumber;
    }

    public String getBuilder() {
        return this.builder;
    }


    public String getModel() {
        return this.model;
    }

    public String getBackWood() {
        return this.backWood;
    }

    public void setPrice(double price) {
        this.price = price;
    }

    public String getTopWood() {
        return this.topWood;
    }

    public String getType() {
        return this.type;
    }


    public Guitar(String serialNumber, double price,
                  String builder, String model, String type,
                  String backWood, String topWood) {
        this.serialNumber = serialNumber;
        this.price = price;
        this.builder = builder;
        this.model = model;
        this.type = type;
        this.backWood = backWood;
        this.topWood = topWood;
    }

}