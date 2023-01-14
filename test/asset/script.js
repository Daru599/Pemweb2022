// Seacrh Button
var body = document.getElementsByTagName("body");
var searchButton = document.getElementById("search-button");
var searchContent = document.getElementById("search-content");

searchButton.addEventListener("click", () => {
  if (searchContent.style.display != "block") {
    searchContent.style.display = "block";
  } else {
    searchContent.style.display = "none";
  }
});

// Detail Produk
var p1btn = document.getElementById("american-custom-detail-button");
var p2btn = document.getElementById("ancho-poblano-buram-detail-button");
var p3btn = document.getElementById("ltd-66-detail-button");
var p4btn = document.getElementById("ancho-poblano-strat-detail-button");
var p5btn = document.getElementById("sekrup-detail-button");
var p6btn = document.getElementById("topi-fender-detail-button");
var p7btn = document.getElementById("speaker-8-detail-button");
var p8btn = document.getElementById("fender-std-detail-button");

var p1buybtn = document.getElementById("american-custom-buy-button");
var p2buybtn = document.getElementById("ancho-poblano-buram-buy-button");
var p3buybtn = document.getElementById("ltd-66-buy-button");
var p4buybtn = document.getElementById("ancho-poblano-strat-buy-button");
var p5buybtn = document.getElementById("sekrup-buy-button");
var p6buybtn = document.getElementById("topi-fender-buy-button");
var p7buybtn = document.getElementById("speaker-8-buy-button");
var p8buybtn = document.getElementById("fender-std-buy-button");

var p1desc = document.getElementById("american-custom-desc");
var p2desc = document.getElementById("ancho-poblano-buram-desc");
var p3desc = document.getElementById("ltd-66-desc");
var p4desc = document.getElementById("ancho-poblano-strat-desc");
var p5desc = document.getElementById("sekrup-desc");
var p6desc = document.getElementById("topi-fender-desc");
var p7desc = document.getElementById("speaker-8-desc");
var p8desc = document.getElementById("fender-std-desc");

p1btn.addEventListener("click", () => {
  p1desc.style.display = "block";
  p1buybtn.style.display = "block";
  p1btn.style.display = "none";
});
p2btn.addEventListener("click", () => {
  p2desc.style.display = "block";
  p2buybtn.style.display = "block";
  p2btn.style.display = "none";
});
p3btn.addEventListener("click", () => {
  p3desc.style.display = "block";
  p3buybtn.style.display = "block";
  p3btn.style.display = "none";
});
p4btn.addEventListener("click", () => {
  p4desc.style.display = "block";
  p4buybtn.style.display = "block";
  p4btn.style.display = "none";
});
p5btn.addEventListener("click", () => {
  p5desc.style.display = "block";
  p5buybtn.style.display = "block";
  p5btn.style.display = "none";
});
p6btn.addEventListener("click", () => {
  p6desc.style.display = "block";
  p6buybtn.style.display = "block";
  p6btn.style.display = "none";
});
p7btn.addEventListener("click", () => {
  p7desc.style.display = "block";
  p7buybtn.style.display = "block";
  p7btn.style.display = "none";
});
p8btn.addEventListener("click", () => {
  p8desc.style.display = "block";
  p8buybtn.style.display = "block";
  p8btn.style.display = "none";
});
