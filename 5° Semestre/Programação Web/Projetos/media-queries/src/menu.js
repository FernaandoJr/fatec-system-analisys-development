document.addEventListener("DOMContentLoaded", function () {
	const menuToggle = document.querySelector(".menu-toggle")
	const navegacao = document.querySelector(".navegacao ul")

	if (menuToggle && navegacao) {
		function toggleMenu() {
			menuToggle.classList.toggle("ativo")
			navegacao.classList.toggle("ativo")
		}

		function closeMenu() {
			menuToggle.classList.remove("ativo")
			navegacao.classList.remove("ativo")
		}

		menuToggle.addEventListener("click", function (event) {
			event.stopPropagation()
			toggleMenu()
		})

		const links = navegacao.querySelectorAll("a")
		links.forEach((link) => {
			link.addEventListener("click", function () {
				closeMenu()
			})
		})

		document.addEventListener("click", function (event) {
			if (
				!menuToggle.contains(event.target) &&
				!navegacao.contains(event.target)
			) {
				closeMenu()
			}
		})

		window.addEventListener("resize", function () {
			if (window.innerWidth > 991) {
				closeMenu()
			}
		})

		document.addEventListener("keydown", function (event) {
			if (event.key === "Escape") {
				closeMenu()
			}
		})

		navegacao.addEventListener("transitionstart", function () {
			if (navegacao.classList.contains("ativo")) {
				document.body.style.overflow = "hidden"
			}
		})

		navegacao.addEventListener("transitionend", function () {
			if (!navegacao.classList.contains("ativo")) {
				document.body.style.overflow = ""
			}
		})
	}
})