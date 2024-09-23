# 1-d scalar PDE using DG

This uses nodal Lagrange basis either with Gauss-Legendre or Gauss-Lobatto-Legendre nodes; the same nodes are also used for all quadrature.

The code is very similar in many parts to the legendre code, you can see the differences like this

```shell
code -n -d ../1d_scalar_legendre/dg.h ./dg.h
```

To solve constant linear advection equation

```shell
cp ../1d_scalar_legendre/linadv/*.h .
```

To solve Burgers equation

```shell
cp ../1d_scalar_legendre/burgers/*.h .
```

Then, see the readme file in `1d_scalar_legendre` directory.

Select GL or GLL basis in `input.prm` file

```shell
set basis = gl | gll
```

## TODO: Implement strong form DG