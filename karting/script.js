let currentIndex = 0;

document.querySelector('.prev-button').addEventListener('click', () => {
   navigate(-1);
});

document.querySelector('.next-button').addEventListener('click', () => {
   navigate(1);
});

function navigate(direction) {
   const carruselContainer = document.querySelector('.carruselContainer');
   const totalImages = document.querySelectorAll('.carrusel-item').length;

   currentIndex = (currentIndex + direction + totalImages) % totalImages;
   const offset = -currentIndex * 100;

   carruselContainer.style.transform = `translateX(${offset}%)`;
}
