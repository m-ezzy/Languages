Object.values(document.getElementsByClassName("prev")).forEach((v) => {
    v.addEventListener("click", (e) => {
        console.log(e)
        reset()
        e.target.style.backgroundColor = "rgb(180, 180, 180)"
    })
})

let reset = () => {
    Object.values(document.getElementsByClassName("prev")).forEach((v) => {
        v.style.backgroundColor = "rgb(233, 233, 109)"
    })
}
