<h1 align="center">Raytracer Project for RT @42</h1> 
<h4 align="center">Authors <a href="https://github.com/elopez17" target="blank">Eric Lopez</a> & <a href="https://github.com/obsaa" target="blank">Obsaa Abdalhalim</a></h4>


## What is is Raytracing
This is rendering technique used to generate a image by by tracing the path of light in an image plane and simulating the  effects of it sencounters with virtual objects. This raytracing project uses backward raytracing algorithms as a means of lowering the computational cost normally related at looking at everything a light ray touches in every direction. This method instead shoots rays from the camera view onto the object(s) and measure the distance to the light source.

## Make and Features

### Build Info
There definitely languages better than C to run a raytracer algorithm eficiently but part of the assignment is using C and C libraries [most notably C++]. In the confines of our school standards which require we have no function longer than 25 lines [which is the most imminent of the many requirements of the standard we call norm], our major library functions such as printf [inside of the src/libft/ folder]. This raytracer is multithreaded but the benefits of multithreading was not seismic due to using mutexes to let the image render properly. The benefits of multithreading can be seen with raytracers that don't require reflection since algorithms are run once without worrying about how pockets of pixels change due recursive calls made on each thread. Assignment Requirements [<a href="https://cdn.intra.42.fr/pdf/pdf/964/rt.en.pdf" target="blank">Link</a>]

#### Program Requirements && Running Executable
To be able to build and run this program you'll need a macbook, because I didn't make it portable for other systems. As for software Requirements, you'll need in order to compile:

* No specific versions. [Unless you are using a version llvm that shows error using -Werror at compile time, take off or add those flags out of the makefile as needed.] 
* GNU make
* GCC
* Built using the minilibx library instead of OpenGL graphics library.

1. Clone the repo.
2. Access the main folder with makefile with  `cd RT`.
3. Run  `make`.
4. Run  `./RT scenes/scene`[*number*]`.rt`

#### File Tree
```
RT/
├── src/
│   ├── includes/
│   │   ├─- ft_printf.h
│   │   ├── get_next_line.h
│   │   ├── libft.h
│   │   └── rt.h
│   ├── minilibx/
│   ├── libft/
│   └── src/
│       ├─- colors.c
│       ├── controls.c
│       ├── draw.c
│       ├─- error.c
│       ├── events.c
│       ├── intersect.c
│       ├─- intersect2.c
│       ├── light.c
│       ├── main.c
│       ├─- mod.c
│       ├── parse.c
│       ├── parse2.c
│       ├── parse3.c
│       ├─- putpixel.c
│       ├── scene.c
│       ├── threads.c
│       ├── vect.c
│       └── vect2.h
├── scenes/
│   ├── scene1.rt
│   ├── scene2.rt
│   ├── scene3.rt
│   ├── scene4.rt
│   ├── scene5.rt
│   ├── scene6.rt
│   ├── scene7.rt
│   └── scene8.rt
└── info/
    ├── backward_ray_tracing.gif
    ├── forward_ray_tracing.gif
    ├── box.ps
    └── rt.en.pdf
```

#### Features Outlined
Feautres are outlined in the first window upon execution of the any of the valid scenes. These features let you control the following:
* Translation/Rotation (Moving objects on the x, y, z plane)
	* (7/9[X-Axis] || 4/6[Y-Axis] || 1/3[Z-Axis] || 5[Toggle Trans/Rot])
* Zooming to Center [8 (INCREASE) || 2 (DECREASE)]
* Reflective Property of each object [Left (OFF) || Right (ON)]
* Size of Objects [Up Key (INCREASE) || Down Key (DECREASE)]
* Brightness [+ (INCREASE) || - (DECREASE)]
* Number of Light Sources and Location(Access through the [.eg]  `vim scenes/scene8.rt`)
* RGB values (Red [-E / R+], Green[-F / G+], Blue[-V / B+]) seperately.
* Specular Intensity [<a href="https://en.wikipedia.org/wiki/Specular_reflection" target="" ="blank">Link</a>]
* Diffuse Intensity [<a href="https://en.wikipedia.org/wiki/Diffuse_reflection" target="" ="blank">Link</a>]
* Gloss Intensity [<a href="http://www.raytracegroundup.com/downloads/Chapter25.pdf" target="" ="blank">Link</a>]
* Object Present : Cone, Cylinder, Sphere [Required] || Cube [Bonus]


### Algorithms and Resources
