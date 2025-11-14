const img = document.getElementById('frame') as HTMLImageElement;
const stats = document.getElementById('stats') as HTMLElement;
img.src = 'processed_sample.png';
stats.innerText = 'Resolution: 640x480 | FPS: N/A';
