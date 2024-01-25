var tablinks=document.getElementsByClassName('tab-links');
var tabcontents=document.getElementsByClassName('tab-contents');
var a=console.log('hh');

function opentab(tabname){
  for(tablink of tablinks){
    tablink.classList.remove('active-link');
  }
  for(tabcontent of tabcontents){
    tabcontent.classList.remove('active-tab');
  }
}
