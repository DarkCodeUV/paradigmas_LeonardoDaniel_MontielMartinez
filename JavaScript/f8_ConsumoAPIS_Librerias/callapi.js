function getMyIp(){
    $.getJSON("https://api.ipify.org?format=json",
        function(json){
            console.log(json);
            $('#resultado').text(JSON.stringify(json));
    })

}

function getMyData(randomNumber){
    $.getJSON("https://randomuser.me/api/?results="+randomNumber,
    function(json){
        console.log(json.results);
        $('#resultado').text(JSON.stringify(json.results));
    }
    );
}