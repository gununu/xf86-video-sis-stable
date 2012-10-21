#ifndef _SHIT_H_
#define _SHIT_H_

#include "config.h"
#include "sis_config.h"
#include "sis.h"

#define SIS_PCI_READ_BYTE(pdev,off)	sisPciReadByte(pdev, off)
#define SIS_PCI_READ_WORD_PR(priv,off)	sisPciReadWord((priv)->pdev, off)
#define SIS_PCI_READ_LONG(pdev,off)	sisPciReadLong(pdev, off)
#define SIS_PCI_READ_LONG_PR(priv,off)	sisPciReadLong((priv)->pdev, off)
#define SIS_PCI_WRITE_BYTE_PR(priv,off,data)	sisPciWriteByte((priv)->pdev, off, data)
#define SIS_PCI_WRITE_LONG(pdev,off,data)	sisPciWriteLong(pdev, off, data)
#define SIS_PCI_WRITE_LONG_PR(priv,off,data)	sisPciWriteLong((priv)->pdev, off, data)

CARD8  sisPciReadByte(struct pci_device *pdev, int offset);
CARD16 sisPciReadWord(struct pci_device *pdev, int offset);
CARD32 sisPciReadLong(struct pci_device *pdev, int offset);
void sisPciWriteByte(struct pci_device *pdev, int offset, unsigned char data);
void sisPciWriteLong(struct pci_device *pdev, int offset, CARD32 data);

#endif
