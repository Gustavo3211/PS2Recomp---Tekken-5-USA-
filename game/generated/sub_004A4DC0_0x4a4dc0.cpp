#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004A4DC0
// Address: 0x4a4dc0 - 0x4a4fd8
void sub_004A4DC0_0x4a4dc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004A4DC0_0x4a4dc0");
#endif

    ctx->pc = 0x4a4dc0u;

    // 0x4a4dc0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4a4dc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4a4dc4: 0x3c03007f  lui         $v1, 0x7F
    ctx->pc = 0x4a4dc4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)127 << 16));
    // 0x4a4dc8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4a4dc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4a4dcc: 0x24100004  addiu       $s0, $zero, 0x4
    ctx->pc = 0x4a4dccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x4a4dd0: 0x24630c1c  addiu       $v1, $v1, 0xC1C
    ctx->pc = 0x4a4dd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3100));
    // 0x4a4dd4: 0x3c06ffff  lui         $a2, 0xFFFF
    ctx->pc = 0x4a4dd4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65535 << 16));
    // 0x4a4dd8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x4a4dd8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x7F0C1Cu));
    // 0x4a4ddc: 0x240500e2  addiu       $a1, $zero, 0xE2
    ctx->pc = 0x4a4ddcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 226));
    // 0x4a4de0: 0x3c0a007f  lui         $t2, 0x7F
    ctx->pc = 0x4a4de0u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)127 << 16));
    // 0x4a4de4: 0x24890010  addiu       $t1, $a0, 0x10
    ctx->pc = 0x4a4de4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x4a4de8: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x4a4de8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
    // 0x4a4dec: 0x3c0b007f  lui         $t3, 0x7F
    ctx->pc = 0x4a4decu;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)127 << 16));
    // 0x4a4df0: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x4a4df0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x4a4df4: 0x24880014  addiu       $t0, $a0, 0x14
    ctx->pc = 0x4a4df4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), 20));
    // 0x4a4df8: 0xa4850008  sh          $a1, 0x8($a0)
    ctx->pc = 0x4a4df8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 8), (uint16_t)GPR_U32(ctx, 5));
    // 0x4a4dfc: 0x24850018  addiu       $a1, $a0, 0x18
    ctx->pc = 0x4a4dfcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 24));
    // 0x4a4e00: 0x3c0c007f  lui         $t4, 0x7F
    ctx->pc = 0x4a4e00u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)127 << 16));
    // 0x4a4e04: 0x3c07007f  lui         $a3, 0x7F
    ctx->pc = 0x4a4e04u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)127 << 16));
    // 0x4a4e08: 0x95420c28  lhu         $v0, 0xC28($t2)
    ctx->pc = 0x4a4e08u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 10), 3112)));
    // 0x4a4e0c: 0x248a0124  addiu       $t2, $a0, 0x124
    ctx->pc = 0x4a4e0cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 4), 292));
    // 0x4a4e10: 0x8d230000  lw          $v1, 0x0($t1)
    ctx->pc = 0x4a4e10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x4a4e14: 0x24e70c3c  addiu       $a3, $a3, 0xC3C
    ctx->pc = 0x4a4e14u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 3132));
    // 0x4a4e18: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4a4e18u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4a4e1c: 0x248e0128  addiu       $t6, $a0, 0x128
    ctx->pc = 0x4a4e1cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 4), 296));
    // 0x4a4e20: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x4a4e20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x4a4e24: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4a4e24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4a4e28: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4a4e28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4a4e2c: 0x240d7fff  addiu       $t5, $zero, 0x7FFF
    ctx->pc = 0x4a4e2cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 32767));
    // 0x4a4e30: 0xad230000  sw          $v1, 0x0($t1)
    ctx->pc = 0x4a4e30u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 3));
    // 0x4a4e34: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x4a4e34u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4a4e38: 0x95620c2c  lhu         $v0, 0xC2C($t3)
    ctx->pc = 0x4a4e38u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 3116)));
    // 0x4a4e3c: 0x8d030000  lw          $v1, 0x0($t0)
    ctx->pc = 0x4a4e3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4a4e40: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4a4e40u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4a4e44: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x4a4e44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x4a4e48: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4a4e48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4a4e4c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4a4e4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4a4e50: 0xad030000  sw          $v1, 0x0($t0)
    ctx->pc = 0x4a4e50u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 3));
    // 0x4a4e54: 0x95820c30  lhu         $v0, 0xC30($t4)
    ctx->pc = 0x4a4e54u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 12), 3120)));
    // 0x4a4e58: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x4a4e58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4a4e5c: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4a4e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4a4e60: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x4a4e60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x4a4e64: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4a4e64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4a4e68: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4a4e68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4a4e6c: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x4a4e6cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x4a4e70: 0x8d220000  lw          $v0, 0x0($t1)
    ctx->pc = 0x4a4e70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x4a4e74: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x4a4e74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
    // 0x4a4e78: 0xad220000  sw          $v0, 0x0($t1)
    ctx->pc = 0x4a4e78u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 2));
    // 0x4a4e7c: 0x8d030000  lw          $v1, 0x0($t0)
    ctx->pc = 0x4a4e7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4a4e80: 0x661824  and         $v1, $v1, $a2
    ctx->pc = 0x4a4e80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
    // 0x4a4e84: 0xad030000  sw          $v1, 0x0($t0)
    ctx->pc = 0x4a4e84u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 3));
    // 0x4a4e88: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x4a4e88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4a4e8c: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x4a4e8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
    // 0x4a4e90: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x4a4e90u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x4a4e94: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x4a4e94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4a4e98: 0x94620008  lhu         $v0, 0x8($v1)
    ctx->pc = 0x4a4e98u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x4a4e9c: 0x8465000a  lh          $a1, 0xA($v1)
    ctx->pc = 0x4a4e9cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 10)));
    // 0x4a4ea0: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4a4ea0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4a4ea4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4a4ea4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4a4ea8: 0xa62825  or          $a1, $a1, $a2
    ctx->pc = 0x4a4ea8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 6));
    // 0x4a4eac: 0x461824  and         $v1, $v0, $a2
    ctx->pc = 0x4a4eacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
    // 0x4a4eb0: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4a4eb0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4a4eb4: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x4a4eb4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x4a4eb8: 0x661024  and         $v0, $v1, $a2
    ctx->pc = 0x4a4eb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
    // 0x4a4ebc: 0xa483011a  sh          $v1, 0x11A($a0)
    ctx->pc = 0x4a4ebcu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 282), (uint16_t)GPR_U32(ctx, 3));
    // 0x4a4ec0: 0x21402  srl         $v0, $v0, 16
    ctx->pc = 0x4a4ec0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 16));
    // 0x4a4ec4: 0x664025  or          $t0, $v1, $a2
    ctx->pc = 0x4a4ec4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x4a4ec8: 0xa4820118  sh          $v0, 0x118($a0)
    ctx->pc = 0x4a4ec8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 280), (uint16_t)GPR_U32(ctx, 2));
    // 0x4a4ecc: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x4a4eccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4a4ed0: 0x9462000c  lhu         $v0, 0xC($v1)
    ctx->pc = 0x4a4ed0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x4a4ed4: 0x8465000e  lh          $a1, 0xE($v1)
    ctx->pc = 0x4a4ed4u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 14)));
    // 0x4a4ed8: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4a4ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4a4edc: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4a4edcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4a4ee0: 0xa62825  or          $a1, $a1, $a2
    ctx->pc = 0x4a4ee0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 6));
    // 0x4a4ee4: 0x1021824  and         $v1, $t0, $v0
    ctx->pc = 0x4a4ee4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) & GPR_U64(ctx, 2));
    // 0x4a4ee8: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4a4ee8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4a4eec: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x4a4eecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x4a4ef0: 0x661024  and         $v0, $v1, $a2
    ctx->pc = 0x4a4ef0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
    // 0x4a4ef4: 0xa483011e  sh          $v1, 0x11E($a0)
    ctx->pc = 0x4a4ef4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 286), (uint16_t)GPR_U32(ctx, 3));
    // 0x4a4ef8: 0x21402  srl         $v0, $v0, 16
    ctx->pc = 0x4a4ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 16));
    // 0x4a4efc: 0x664025  or          $t0, $v1, $a2
    ctx->pc = 0x4a4efcu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x4a4f00: 0xa482011c  sh          $v0, 0x11C($a0)
    ctx->pc = 0x4a4f00u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 284), (uint16_t)GPR_U32(ctx, 2));
    // 0x4a4f04: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x4a4f04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4a4f08: 0x94620010  lhu         $v0, 0x10($v1)
    ctx->pc = 0x4a4f08u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x4a4f0c: 0x84650012  lh          $a1, 0x12($v1)
    ctx->pc = 0x4a4f0cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 18)));
    // 0x4a4f10: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4a4f10u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4a4f14: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4a4f14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4a4f18: 0xa62825  or          $a1, $a1, $a2
    ctx->pc = 0x4a4f18u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 6));
    // 0x4a4f1c: 0x1021824  and         $v1, $t0, $v0
    ctx->pc = 0x4a4f1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) & GPR_U64(ctx, 2));
    // 0x4a4f20: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4a4f20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4a4f24: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x4a4f24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x4a4f28: 0x661024  and         $v0, $v1, $a2
    ctx->pc = 0x4a4f28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
    // 0x4a4f2c: 0xa4830122  sh          $v1, 0x122($a0)
    ctx->pc = 0x4a4f2cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 290), (uint16_t)GPR_U32(ctx, 3));
    // 0x4a4f30: 0x21402  srl         $v0, $v0, 16
    ctx->pc = 0x4a4f30u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 16));
    // 0x4a4f34: 0xa4820120  sh          $v0, 0x120($a0)
    ctx->pc = 0x4a4f34u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 288), (uint16_t)GPR_U32(ctx, 2));
    // 0x4a4f38: 0x8ce50000  lw          $a1, 0x0($a3)
    ctx->pc = 0x4a4f38u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4a4f3c: 0x8d430000  lw          $v1, 0x0($t2)
    ctx->pc = 0x4a4f3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x4a4f40: 0x94a20014  lhu         $v0, 0x14($a1)
    ctx->pc = 0x4a4f40u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 20)));
    // 0x4a4f44: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x4a4f44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x4a4f48: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4a4f48u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4a4f4c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4a4f4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4a4f50: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4a4f50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4a4f54: 0xad430000  sw          $v1, 0x0($t2)
    ctx->pc = 0x4a4f54u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 3));
    // 0x4a4f58: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4a4f58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4a4f5c: 0x8ce50000  lw          $a1, 0x0($a3)
    ctx->pc = 0x4a4f5cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4a4f60: 0x84a20016  lh          $v0, 0x16($a1)
    ctx->pc = 0x4a4f60u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 22)));
    // 0x4a4f64: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x4a4f64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x4a4f68: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4a4f68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4a4f6c: 0xad430000  sw          $v1, 0x0($t2)
    ctx->pc = 0x4a4f6cu;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 3));
    // 0x4a4f70: 0x8ce50000  lw          $a1, 0x0($a3)
    ctx->pc = 0x4a4f70u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4a4f74: 0x8dc20000  lw          $v0, 0x0($t6)
    ctx->pc = 0x4a4f74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x4a4f78: 0x94a30018  lhu         $v1, 0x18($a1)
    ctx->pc = 0x4a4f78u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x4a4f7c: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x4a4f7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x4a4f80: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x4a4f80u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x4a4f84: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4a4f84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4a4f88: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4a4f88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x4a4f8c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4a4f8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4a4f90: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x4a4f90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
    // 0x4a4f94: 0xadc20000  sw          $v0, 0x0($t6)
    ctx->pc = 0x4a4f94u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 0), GPR_U32(ctx, 2));
    // 0x4a4f98: 0xac80012c  sw          $zero, 0x12C($a0)
    ctx->pc = 0x4a4f98u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 300), GPR_U32(ctx, 0));
    // 0x4a4f9c: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x4a4f9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4a4fa0: 0x9443001a  lhu         $v1, 0x1A($v0)
    ctx->pc = 0x4a4fa0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 26)));
    // 0x4a4fa4: 0xa490002e  sh          $s0, 0x2E($a0)
    ctx->pc = 0x4a4fa4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 46), (uint16_t)GPR_U32(ctx, 16));
    // 0x4a4fa8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4a4fa8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4a4fac: 0xa48f0030  sh          $t7, 0x30($a0)
    ctx->pc = 0x4a4facu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 48), (uint16_t)GPR_U32(ctx, 15));
    // 0x4a4fb0: 0xa4830130  sh          $v1, 0x130($a0)
    ctx->pc = 0x4a4fb0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 304), (uint16_t)GPR_U32(ctx, 3));
    // 0x4a4fb4: 0xa48d002c  sh          $t5, 0x2C($a0)
    ctx->pc = 0x4a4fb4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 44), (uint16_t)GPR_U32(ctx, 13));
    // 0x4a4fb8: 0xa4800022  sh          $zero, 0x22($a0)
    ctx->pc = 0x4a4fb8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 34), (uint16_t)GPR_U32(ctx, 0));
    // 0x4a4fbc: 0xa48d0024  sh          $t5, 0x24($a0)
    ctx->pc = 0x4a4fbcu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 36), (uint16_t)GPR_U32(ctx, 13));
    // 0x4a4fc0: 0xa4800026  sh          $zero, 0x26($a0)
    ctx->pc = 0x4a4fc0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 38), (uint16_t)GPR_U32(ctx, 0));
    // 0x4a4fc4: 0xa48d0028  sh          $t5, 0x28($a0)
    ctx->pc = 0x4a4fc4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 40), (uint16_t)GPR_U32(ctx, 13));
    // 0x4a4fc8: 0xa480002a  sh          $zero, 0x2A($a0)
    ctx->pc = 0x4a4fc8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 42), (uint16_t)GPR_U32(ctx, 0));
    // 0x4a4fcc: 0x3e00008  jr          $ra
    ctx->pc = 0x4A4FCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4A4FD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A4FCCu;
        // 0x4a4fd0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4A4FCCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4A4FD4u;
    // 0x4a4fd4: 0x0  nop
    ctx->pc = 0x4a4fd4u;
    // NOP
    ctx->pc = 0x4a4fd8u;
}
