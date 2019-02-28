const slider = document.querySelector('#slider');
const images = document.getElementsByClassName('slider-img');

let currentSlideIdx = 0;
images[currentSlideIdx].classList.add("active");

const nextSlide = () => {
  images[currentSlideIdx].classList.remove("active");
  
  currentSlideIdx++;
  if(currentSlideIdx >= images.length) {
  	currentSlideIdx = 0;
  }
  
  images[currentSlideIdx].classList.add("active");
  
  window.setTimeout(nextSlide, 6000);
}

nextSlide();
