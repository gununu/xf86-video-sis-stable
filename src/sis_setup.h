unsigned int sis_pci_read_device_u32(int device, int offset);
unsigned char sis_pci_read_device_u8(int device, int offset);
void sis_pci_write_host_bridge_u32(int offset, unsigned int value);
void sis_pci_write_host_bridge_u8(int offset, unsigned char value);

unsigned int sis_pci_read_host_bridge_u32(int offset);
unsigned char sis_pci_read_host_bridge_u8(int offset);
