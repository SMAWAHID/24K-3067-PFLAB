let products = {
    name : "",
    price: 0.00, 
    quantity: 0
};

let product = [];

function add(naem, price){
    let newProduct = {...products, name: naem, price: price};
    product.push(newProduct);
    console.log("product added: ", newProduct);
}

function list(name, price, quantity){
    if(product.length ===0){
        console.log("Empty")
    }
    else{
        console.log("Products:");
        product.forEach((product) => {
            console.log(`Name: ${name}, Price: ${price}, Quantity: ${quantity}`);
        });
    }
}

function updateQuantity(name, quantity){
    const product = inventory.find((p) => p.name === name);
    if(product){
        product.quantity = quantity;
    }
    else{
        console.log("product not found");
    }
}

function remove(name){
    const index = inventory.findIndex((p) => p.name === name);
    if(index !== -1){
        product.splice(index, 1);
        console.log("removed");
    }
    else{
        console.log("notfound");
    }
}
