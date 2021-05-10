var operation ;
var result;
var area;
 
                 

function calculateSum(){
    var operationElement = document.getElementById("insertOperation");
    operation = operationElement.value;
    operationElement.value= operation+"+";
}

function calculateSubtration(){
    var operationElement = document.getElementById("insertOperation");
    operation = operationElement.value;
    operationElement.value= operation+"-";
}

function calculateMultiplication(){
    var operationElement = document.getElementById("insertOperation");
    operation = operationElement.value;
    operationElement.value= operation+"*";
}

function calculateDivision(){
    var operationElement = document.getElementById("insertOperation");
    operation = operationElement.value;
    operationElement.value= operation+"/";
}

function calculateSquaredValueTwo(){
    var operationElement = document.getElementById("insertOperation");
    operation = operationElement.value;
    operationElement.value= operation+"²";
}

//Falta hacer que se coloque la raiz
function calculateSquare(){
    var operationElement = document.getElementById("insertOperation");
    operation = operationElement.value;
    operationElement.value= operation+"raiz";
}

function calculatePow(){
    var operationElement = document.getElementById("insertOperation");
    operation = operationElement.value;
    operationElement.value= operation+"^";
}


function clearAll(){
    var operationElement = document.getElementById("insertOperation");
    operation = operationElement.value;
    operationElement.value= "";
}


//Falta hacer que se resuelva
function equal(){
    var operationElement = document.getElementById("insertOperation");
    operation = operationElement.value;
    operationElement.value= "";
}