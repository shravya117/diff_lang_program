// program16.js - Async function
async function fetchData() {
    console.log('Fetching data...');
    return 'Data received!';
}
fetchData().then(result => console.log(result));
