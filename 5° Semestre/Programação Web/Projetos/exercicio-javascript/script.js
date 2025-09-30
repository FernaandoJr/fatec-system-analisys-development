// Menu Mobile Toggle
document.addEventListener("DOMContentLoaded", function () {
	// Criar botão do menu mobile
	const header = document.querySelector(".header")
	const nav = document.querySelector(".header ul")

	// Criar botão hamburger
	const menuToggle = document.createElement("div")
	menuToggle.className = "menu-toggle"
	menuToggle.innerHTML = `
        <span></span>
        <span></span>
        <span></span>
    `

	// Inserir o botão antes da nav
	header.insertBefore(menuToggle, nav)

	// Toggle do menu mobile
	menuToggle.addEventListener("click", function () {
		nav.classList.toggle("nav-open")
		menuToggle.classList.toggle("active")
	})

	// Fechar menu ao clicar em um link (mobile)
	const navLinks = document.querySelectorAll(".header ul li a")
	navLinks.forEach((link) => {
		link.addEventListener("click", () => {
			nav.classList.remove("nav-open")
			menuToggle.classList.remove("active")
		})
	})

	// Fechar menu ao redimensionar para desktop
	window.addEventListener("resize", function () {
		if (window.innerWidth > 768) {
			nav.classList.remove("nav-open")
			menuToggle.classList.remove("active")
		}
	})
})

// Validação e Feedback do Formulário de Contato
function initContactForm() {
	const form = document.querySelector("form")
	if (!form) return

	form.addEventListener("submit", function (e) {
		e.preventDefault()

		const firstName = document.getElementById("fname")
		const lastName = document.getElementById("lname")
		const email = document.getElementById("E-mail")

		// Limpar mensagens de erro anteriores
		clearErrors()

		let isValid = true

		// Validar primeiro nome
		if (!firstName.value.trim()) {
			showError(firstName, "Primeiro nome é obrigatório")
			isValid = false
		} else if (firstName.value.trim().length < 2) {
			showError(
				firstName,
				"Primeiro nome deve ter pelo menos 2 caracteres"
			)
			isValid = false
		}

		// Validar sobrenome
		if (!lastName.value.trim()) {
			showError(lastName, "Sobrenome é obrigatório")
			isValid = false
		} else if (lastName.value.trim().length < 2) {
			showError(lastName, "Sobrenome deve ter pelo menos 2 caracteres")
			isValid = false
		}

		// Validar email
		const emailRegex = /^[^\s@]+@[^\s@]+\.[^\s@]+$/
		if (!email.value.trim()) {
			showError(email, "E-mail é obrigatório")
			isValid = false
		} else if (!emailRegex.test(email.value.trim())) {
			showError(email, "Por favor, insira um e-mail válido")
			isValid = false
		}

		if (isValid) {
			showSuccessMessage()
			form.reset()
		}
	})
}

// Mostrar erro no campo
function showError(input, message) {
	input.classList.add("error")

	const errorDiv = document.createElement("div")
	errorDiv.className = "error-message"
	errorDiv.textContent = message

	input.parentNode.insertBefore(errorDiv, input.nextSibling)
}

// Limpar erros
function clearErrors() {
	const errorInputs = document.querySelectorAll(".error")
	const errorMessages = document.querySelectorAll(".error-message")

	errorInputs.forEach((input) => input.classList.remove("error"))
	errorMessages.forEach((message) => message.remove())
}

// Mostrar mensagem de sucesso
function showSuccessMessage() {
	const successDiv = document.createElement("div")
	successDiv.className = "success-message"
	successDiv.innerHTML = `
        <div class="alert alert-success">
            <span class="alert-icon">✓</span>
            <span class="alert-text">Formulário enviado com sucesso! Entraremos em contato em breve.</span>
            <button class="alert-close" onclick="this.parentElement.parentElement.remove()">×</button>
        </div>
    `

	const form = document.querySelector("form")
	form.parentNode.insertBefore(successDiv, form)

	// Auto remover após 5 segundos
	setTimeout(() => {
		if (successDiv.parentNode) {
			successDiv.remove()
		}
	}, 5000)
}

// Interações da página de informações/cardápio
function initProductInteractions() {
	const productItems = document.querySelectorAll(".product-item")

	productItems.forEach((item, index) => {
		// Adicionar animação de entrada
		item.style.opacity = "0"
		item.style.transform = "translateY(30px)"

		setTimeout(() => {
			item.style.transition = "all 0.6s ease"
			item.style.opacity = "1"
			item.style.transform = "translateY(0)"
		}, index * 200)

		// Adicionar interação de clique
		item.addEventListener("click", function () {
			const productName = this.querySelector("h3").textContent
			showProductAlert(productName)
		})
	})

	// Adicionar filtro de produtos (se necessário)
	addProductFilter()
}

// Mostrar alerta do produto
function showProductAlert(productName) {
	const alertDiv = document.createElement("div")
	alertDiv.className = "product-alert"
	alertDiv.innerHTML = `
        <div class="alert alert-info">
            <span class="alert-icon">ℹ</span>
            <span class="alert-text">Você selecionou: <strong>${productName}</strong></span>
            <button class="alert-close" onclick="this.parentElement.parentElement.remove()">×</button>
        </div>
    `

	document.body.appendChild(alertDiv)

	// Auto remover após 3 segundos
	setTimeout(() => {
		if (alertDiv.parentNode) {
			alertDiv.remove()
		}
	}, 3000)
}

// Adicionar filtro de produtos
function addProductFilter() {
	const productsSection = document.querySelector(".products-section")
	if (!productsSection) return

	const filterDiv = document.createElement("div")
	filterDiv.className = "product-filter"
	filterDiv.innerHTML = `
        <button class="filter-btn active" data-filter="all">Todos</button>
        <button class="filter-btn" data-filter="premium">Premium</button>
        <button class="filter-btn" data-filter="regular">Regular</button>
    `

	const title = productsSection.querySelector("h1")
	title.parentNode.insertBefore(filterDiv, title.nextSibling)

	// Adicionar funcionalidade do filtro
	const filterButtons = filterDiv.querySelectorAll(".filter-btn")
	filterButtons.forEach((btn) => {
		btn.addEventListener("click", function () {
			// Remover classe active de todos os botões
			filterButtons.forEach((b) => b.classList.remove("active"))
			// Adicionar classe active ao botão clicado
			this.classList.add("active")

			const filter = this.getAttribute("data-filter")
			filterProducts(filter)
		})
	})
}

// Filtrar produtos
function filterProducts(filter) {
	const products = document.querySelectorAll(".product-item")

	products.forEach((product) => {
		const productName = product
			.querySelector("h3")
			.textContent.toLowerCase()
		let show = true

		if (filter === "premium") {
			show =
				productName.includes("labubu") ||
				productName.includes("morango")
		} else if (filter === "regular") {
			show =
				productName.includes("pistache") ||
				productName.includes("ninho")
		}

		if (show) {
			product.style.display = "flex"
			product.style.animation = "fadeIn 0.5s ease"
		} else {
			product.style.display = "none"
		}
	})
}

// Adicionar animações suaves ao scroll
function initScrollAnimations() {
	const observerOptions = {
		threshold: 0.1,
		rootMargin: "0px 0px -50px 0px",
	}

	const observer = new IntersectionObserver((entries) => {
		entries.forEach((entry) => {
			if (entry.isIntersecting) {
				entry.target.classList.add("animate-in")
			}
		})
	}, observerOptions)

	// Observar elementos para animação
	const animateElements = document.querySelectorAll(
		".description-item, table, .product-item"
	)
	animateElements.forEach((el) => observer.observe(el))
}

// Inicializar todas as funcionalidades
document.addEventListener("DOMContentLoaded", function () {
	initContactForm()
	initProductInteractions()
	initScrollAnimations()

	// Adicionar classe para indicar que JS está carregado
	document.body.classList.add("js-loaded")
})

// Utilitário para mostrar notificações gerais
function showNotification(message, type = "info") {
	const notification = document.createElement("div")
	notification.className = `notification notification-${type}`
	notification.innerHTML = `
        <div class="notification-content">
            <span class="notification-icon">${
				type === "success" ? "✓" : type === "error" ? "✗" : "ℹ"
			}</span>
            <span class="notification-text">${message}</span>
            <button class="notification-close" onclick="this.parentElement.parentElement.remove()">×</button>
        </div>
    `

	document.body.appendChild(notification)

	// Animação de entrada
	setTimeout(() => notification.classList.add("show"), 100)

	// Auto remover após 4 segundos
	setTimeout(() => {
		notification.classList.remove("show")
		setTimeout(() => {
			if (notification.parentNode) {
				notification.remove()
			}
		}, 300)
	}, 4000)
}
