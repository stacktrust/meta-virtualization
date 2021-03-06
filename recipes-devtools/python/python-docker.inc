SUMMARY = "A Python library for the Docker Engine API."
HOMEPAGE = "https://github.com/docker/docker-py"
LICENSE = "Apache-2.0"
LIC_FILES_CHKSUM = "file://LICENSE;md5=34f3846f940453127309b920eeb89660"

SRC_URI[md5sum] = "02491d168c048cdb99cc20d0b352ea0f"
SRC_URI[sha256sum] = "e9cc39e24905e67ba9e2df14c94488f5cf030fb72ae1c60de505ce5ea90503f7"

RDEPENDS_${PN} += " \
	${PYTHON_PN}-misc \
	${PYTHON_PN}-six \
	${PYTHON_PN}-docker-pycreds \
	${PYTHON_PN}-requests \
	${PYTHON_PN}-websocket-client \
"
