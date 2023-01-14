var data = [
  [
    "AMERICAN CUSTOM BURAM MN NOS EBONY TRANSPARAN",
    "AMERICAN CUSTOM STRAT® MN – NOS, EBONY TRANSPARAN Seri : 2022 Custom Koleksi Warna : Ebony Transparan Berat : 8.12 lb <br /><b>Harga : Rp 65.000.000,00</b>",
    "asset/image/hei.jpg",
  ],
  [
    "ANCHO POBLANO PENINGGALAN BURAM 2-COLOR SUNBURST",
    "ANCHO POBLANO STRAT® – RELIC®, 2-COLOR SUNBURST Seri : Apac LTD Hits Terbesar Warna : 2-Warna Sunburst Berat : 7.25 lb <br /><b>Harga : Rp 1.400.000,00</b>",
    "asset/image/test.jpg",
  ],
  [
    "LTD EDISI '66 EDISI TERBATAS ’66 JAZZ BASS® – PENINGGALAN PEKERJA HARIAN ®, USIA PIRUS LAUT",
    "EDISI TERBATAS ’66 JAZZ BASS® – PENINGGALAN PEKERJA HARIAN ®, USIA PIRUS LAUT Seri : APAC Semi 2021 Favorite Warna : Pirus Laut Tua . <br /> <b>Harga : Rp 78.460.000,00</b>",
    "asset/image/923-1012-879.jpg",
  ],
  [
    "ANCHO POBLANO STRAT PENINGGALAN BURAM PUTIH BLONDE",
    "Ancho Poblano Strat® – Relic®, Opaque Putih Blonde Seri : Apac Ltd Hits Terbesar Warna : Opaque Putih Blonde Berat : 7.25 lb <br /><b>Harga : Rp 1.591.300,00</b>",
    "asset/image/155-8902-801.jpg",
  ],
];

// Wishlist
var imgWishlist = document.getElementById("img-wishlist");
var h1WishList = document.getElementById("h1-wishlist");
var pWishlist = document.getElementById("p-wishlist");
var pCP = document.getElementById("p-cp");

function changeImg(params) {
  imgWishlist.src = data[params][2];
  h1WishList.innerHTML = data[params][0];
  pWishlist.innerHTML = data[params][1];
}

function buyNow() {
  pCP.style.display = "block";
}
