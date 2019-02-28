document.querySelector("#main-section-btn").addEventListener("click", function () {
  scrollToSection('#main-section');
});
document.querySelector("#parameters-section-btn").addEventListener("click", function () {
  scrollToSection('#parameters-section');
});
document.querySelector("#gallery-section-btn").addEventListener("click", function () {
  scrollToSection('#gallery-section');
});
document.querySelector("#contact-section-btn").addEventListener("click", function () {
  scrollToSection('#contact-section');
});

const getMenuHeight = () => {
	return document.querySelector('#top-bar').clientHeight;
}

const scrollToSection = targetSection => {
  $.scrollTo($(targetSection).offset().top - getMenuHeight(), 500);
}
