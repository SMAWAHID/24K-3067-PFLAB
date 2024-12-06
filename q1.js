// Importing the prompt-sync library
const prompt = require("prompt-sync")();

// Predefined product structure
const productTemplate = {
    name: "",
    price: 0,
    quantity: 0,
};

// Inventory array to store products
const inventory = [];

// Function to create a new product
function createProduct() {
    const name = prompt("Enter Product Name: ");
    const price = parseFloat(prompt("Enter Product Price: "));
    const quantity = parseInt(prompt("Enter Product Quantity: "), 10);

    const newProduct = {
        ...productTemplate,
        name,
        price,
        quantity,
    };

    inventory.push(newProduct);
    console.log("Product added successfully!");
}

// Function to list all products
function listProducts() {
    if (inventory.length === 0) {
        console.log("No products in the inventory.");
    } else {
        console.log("Inventory:");
        inventory.forEach((product, index) => {
            console.log(
                `${index + 1}. Name: ${product.name}, Price: $${product.price.toFixed(2)}, Quantity: ${product.quantity}`
            );
        });
    }
}

// Function to update a product quantity
function updateProductQuantity() {
    const name = prompt("Enter Product Name to update quantity: ");
    const product = inventory.find((p) => p.name === name);

    if (product) {
        const newQuantity = parseInt(prompt("Enter new quantity: "), 10);
        product.quantity = newQuantity;
        console.log("Quantity updated successfully!");
    } else {
        console.log("Product not found.");
    }
}

// Function to remove a product
function removeProduct() {
    const name = prompt("Enter Product Name to remove: ");
    const index = inventory.findIndex((p) => p.name === name);

    if (index !== -1) {
        inventory.splice(index, 1);
        console.log("Product removed successfully!");
    } else {
        console.log("Product not found.");
    }
}

// Main program
function main() {
    while (true) {
        console.log("\n1. Add Product");
        console.log("2. List Products");
        console.log("3. Update Product Quantity");
        console.log("4. Remove Product");
        console.log("5. Exit");

        const choice = prompt("Choose an option: ");
        switch (choice) {
            case "1":
                createProduct();
                break;
            case "2":
                listProducts();
                break;
            case "3":
                updateProductQuantity();
                break;
            case "4":
                removeProduct();
                break;
            case "5":
                console.log("Exiting program. Goodbye!");
                return;
            default:
                console.log("Invalid choice. Please try again.");
        }
    }
}

// Run the program
main();
