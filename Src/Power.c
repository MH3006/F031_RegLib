/* CONSTANT DEFINITIONS **********************************************/

/* Base address of RCC registers */
#define PWR_BASE 0x40021000

/* Address offsets of RCC registers from base address */
#define PWR_CR_OFFSET 0x00  /* Control register */
#define PWR_CSR_OFFSET 0x04 /* Control/status register */

/* Register bit values/masks */

/* CR Register */

/* Low power deepsleep */
#define PWR_CR_LPDS_OFFSET 0
#define PWR_CR_LDPS (1 << PWR_CR_LDPS_OFFSET)

/* Power down deepsleep */
#define PWR_CR_PDDS_OFFSET 1
#define PWR_CR_PDDS (1 << PWR_CR_PDDS_OFFSET)

/* Clear wake up flag */
#define PWR_CR_CWUF_OFFSET 2
#define PWR_CR_CWIF (1 << PWR_CR_CWUF_OFFSET)

/* Clear standby flag */
#define PWR_CR_CSBF_OFFSET 3
#define PWR_CR_CSBF (1 << PWR_CR_CSBF_OFFSET)

/* Power voltage detector enable */
#define PWR_CR_PVDE_OFFSET 4
#define PWR_CR_PVDE (1 << PWR_CR_PVDE_OFFSET)

/* PVD level selection */
#define PWR_CR_PLS_OFFSET 5
#define PWR_CR_PLS_MASK (0x7 << PWR_CR_PLS_OFFSET)
#define PWR_CR_PLS_THRESHOLD0 (0x0 << PWR_CR_PLS_OFFSET)
#define PWR_CR_PLS_THRESHOLD1 (0x1 << PWR_CR_PLS_OFFSET)
#define PWR_CR_PLS_THRESHOLD2 (0x2 << PWR_CR_PLS_OFFSET)
#define PWR_CR_PLS_THRESHOLD3 (0x3 << PWR_CR_PLS_OFFSET)
#define PWR_CR_PLS_THRESHOLD4 (0x4 << PWR_CR_PLS_OFFSET)
#define PWR_CR_PLS_THRESHOLD5 (0x5 << PWR_CR_PLS_OFFSET)
#define PWR_CR_PLS_THRESHOLD6 (0x6 << PWR_CR_PLS_OFFSET)
#define PWR_CR_PLS_THRESHOLD7 (0x7 << PWR_CR_PLS_OFFSET)

/* Disable RTC domain write protection */
#define PWR_CR_DBP_OFFSET 8
#define PWR_CR_DBP (1 << PWR_CR_DBP_OFFSET)

/* CSR Register */

/* Wake up flag */
#define PWR_CSR_WUP_OFFSET 0
#define PWR_CSR_WUP (1 << PWR_CSR_WUP_OFFSET)

/* Standby flag */
#define PWR_CSR_SBF_OFFSET 1
#define PWR_CSR_SBF (1 << PWR_CSR_SBF_OFFSET)

/* PVD Output */
#define PWR_CSR_PVDO_OFFSET 2
#define PWR_CSR_PVDO (1 << PWR_CSR_PVDO_OFFSET)

/* VREFINT voltage reference ready */
#define PWR_CSR_VREFINTRDY_OFFSET 3
#define PWR_CSR_VREFINTRDY (1 << PWR_CSR_VREFINTRDY_OFFSET)

/* Enable WKUPx pin */
#define PWR_CSR_WUP1EN_OFFSET 8
#define PWR_CSR_WUP1EN (1 << PWR_CSR_WUP1EN_OFFSET)

#define PWR_CSR_WUP2EN_OFFSET 9
#define PWR_CSR_WUP2EN (1 << PWR_CSR_WUP2EN_OFFSET)

#define PWR_CSR_WUP3EN_OFFSET 10
#define PWR_CSR_WUP3EN (1 << PWR_CSR_WUP3EN_OFFSET)

#define PWR_CSR_WUP4EN_OFFSET 11
#define PWR_CSR_WUP4EN (1 << PWR_CSR_WUP4EN_OFFSET)

#define PWR_CSR_WUP5EN_OFFSET 12
#define PWR_CSR_WUP5EN (1 << PWR_CSR_WUP5EN_OFFSET)

#define PWR_CSR_WUP6EN_OFFSET 13
#define PWR_CSR_WUP6EN (1 << PWR_CSR_WUP6EN_OFFSET)

#define PWR_CSR_WUP7EN_OFFSET 14
#define PWR_CSR_WUP7EN (1 << PWR_CSR_WUP7EN_OFFSET)

#define PWR_CSR_WUP8EN_OFFSET 15
#define PWR_CSR_WUP8EN (1 << PWR_CSR_WUP8EN_OFFSET)

/* FUNCTION PROTOTYPES ********************************************/

/* FUNCTION DEFINITIONS *******************************************/


