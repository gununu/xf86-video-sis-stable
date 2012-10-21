#include "shit.h"

CARD8
sisPciReadByte(struct pci_device *pdev, int offset)
{
        uint8_t word;
        if (pci_device_cfg_read_u8(pdev, &word, offset) != 0)
                word = ~0;
        return word;
}

CARD16
sisPciReadWord(struct pci_device *pdev, int offset)
{
        uint16_t word;
        if (pci_device_cfg_read_u16(pdev, &word, offset) != 0)
                word = ~0;
        return word;
}

CARD32
sisPciReadLong(struct pci_device *pdev, int offset)
{
        uint32_t word;
        if (pci_device_cfg_read_u32(pdev, &word, offset) != 0)
                word = ~0;
        return word;
}

void
sisPciWriteByte(struct pci_device *pdev, int offset, unsigned char data)
{
        pci_device_cfg_write_u8(pdev, data, offset);
}

void
sisPciWriteLong(struct pci_device *pdev, int offset, CARD32 data)
{
        pci_device_cfg_write_u32(pdev, data, offset);
}
