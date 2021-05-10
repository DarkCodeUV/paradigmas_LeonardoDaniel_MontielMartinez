function getMyIpHttp(){
    var request = new XMLHttpRequest();

    //Open a new connection, using the GET request on the URL endPoint

    request.open('GET', 'http://api.ipify.org?format=json', true)
    request.onload = function(resp){
        console.log(resp);
        console.log(resp.target.response);
    }

    request.send();
}

function getMyIpFetch(){

    //Create request object

    var request = new Request('https://randomuser.me/api/?results=3',{
        method: 'GET',
        headers: new Headers({ 'content-Type': 'application/json'})
    });

    //Now use it to
    fetch(request)
    .then(function(response){
        response.json().then(function(respjson){
            console.log(respjson.result);
        });
    })
    .catch(err => {
        console.log(err);
    });

}