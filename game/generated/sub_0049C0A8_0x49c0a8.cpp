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

// Function: sub_0049C0A8
// Address: 0x49c0a8 - 0x49c360
void sub_0049C0A8_0x49c0a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0049C0A8_0x49c0a8");
#endif

    ctx->pc = 0x49c0a8u;

    // 0x49c0a8: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x49c0a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
    // 0x49c0ac: 0x244c0bac  addiu       $t4, $v0, 0xBAC
    ctx->pc = 0x49c0acu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 2), 2988));
    // 0x49c0b0: 0x8d830000  lw          $v1, 0x0($t4)
    ctx->pc = 0x49c0b0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7F0BACu));
    // 0x49c0b4: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x49c0b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x49c0b8: 0x84620000  lh          $v0, 0x0($v1)
    ctx->pc = 0x49c0b8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x49c0bc: 0x1440004a  bnez        $v0, . + 4 + (0x4A << 2)
    ctx->pc = 0x49C0BCu;
    {
        const bool branch_taken_0x49c0bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x49C0C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49C0BCu;
        // 0x49c0c0: 0x94640000  lhu         $a0, 0x0($v1) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49c0bc) {
            ctx->pc = 0x49C1E8u;
            goto label_49c1e8;
        }
    }
    ctx->pc = 0x49C0C4u;
    // 0x49c0c4: 0x2402003c  addiu       $v0, $zero, 0x3C
    ctx->pc = 0x49c0c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x49c0c8: 0x3c05007f  lui         $a1, 0x7F
    ctx->pc = 0x49c0c8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)127 << 16));
    // 0x49c0cc: 0xa4620000  sh          $v0, 0x0($v1)
    ctx->pc = 0x49c0ccu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x49c0d0: 0x24a50b84  addiu       $a1, $a1, 0xB84
    ctx->pc = 0x49c0d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2948));
    // 0x49c0d4: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x49c0d4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x49c0d8: 0x8d830000  lw          $v1, 0x0($t4)
    ctx->pc = 0x49c0d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x49c0dc: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x49c0dcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x49c0e0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x49c0e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x49c0e4: 0xa4620000  sh          $v0, 0x0($v1)
    ctx->pc = 0x49c0e4u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x49c0e8: 0x8d860000  lw          $a2, 0x0($t4)
    ctx->pc = 0x49c0e8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x49c0ec: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x49c0ecu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7F0B84u));
    // 0x49c0f0: 0x24c70012  addiu       $a3, $a2, 0x12
    ctx->pc = 0x49c0f0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), 18));
    // 0x49c0f4: 0x94e20000  lhu         $v0, 0x0($a3)
    ctx->pc = 0x49c0f4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x49c0f8: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x49c0f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x49c0fc: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x49c0fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x49c100: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x49c100u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x49c104: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x49c104u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x49c108: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x49c108u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x49c10c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x49c10cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x49c110: 0x84c20014  lh          $v0, 0x14($a2)
    ctx->pc = 0x49c110u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 20)));
    // 0x49c114: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x49c114u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x49c118: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x49c118u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x49c11c: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x49c11cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x49c120: 0x641024  and         $v0, $v1, $a0
    ctx->pc = 0x49c120u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x49c124: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x49c124u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x49c128: 0x21402  srl         $v0, $v0, 16
    ctx->pc = 0x49c128u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 16));
    // 0x49c12c: 0xa4e20000  sh          $v0, 0x0($a3)
    ctx->pc = 0x49c12cu;
    WRITE16(ADD32(GPR_U32(ctx, 7), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x49c130: 0x94a30000  lhu         $v1, 0x0($a1)
    ctx->pc = 0x49c130u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x49c134: 0x8d820000  lw          $v0, 0x0($t4)
    ctx->pc = 0x49c134u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x49c138: 0xa4430014  sh          $v1, 0x14($v0)
    ctx->pc = 0x49c138u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 20), (uint16_t)GPR_U32(ctx, 3));
    // 0x49c13c: 0x8d860000  lw          $a2, 0x0($t4)
    ctx->pc = 0x49c13cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x49c140: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x49c140u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x49c144: 0x24c70016  addiu       $a3, $a2, 0x16
    ctx->pc = 0x49c144u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), 22));
    // 0x49c148: 0x94e20000  lhu         $v0, 0x0($a3)
    ctx->pc = 0x49c148u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x49c14c: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x49c14cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x49c150: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x49c150u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x49c154: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x49c154u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x49c158: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x49c158u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x49c15c: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x49c15cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x49c160: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x49c160u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x49c164: 0x84c20018  lh          $v0, 0x18($a2)
    ctx->pc = 0x49c164u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 24)));
    // 0x49c168: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x49c168u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x49c16c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x49c16cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x49c170: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x49c170u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x49c174: 0x641024  and         $v0, $v1, $a0
    ctx->pc = 0x49c174u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x49c178: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x49c178u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x49c17c: 0x21402  srl         $v0, $v0, 16
    ctx->pc = 0x49c17cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 16));
    // 0x49c180: 0xa4e20000  sh          $v0, 0x0($a3)
    ctx->pc = 0x49c180u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x49c184: 0x94a30000  lhu         $v1, 0x0($a1)
    ctx->pc = 0x49c184u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x49c188: 0x8d820000  lw          $v0, 0x0($t4)
    ctx->pc = 0x49c188u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x49c18c: 0xa4430018  sh          $v1, 0x18($v0)
    ctx->pc = 0x49c18cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 24), (uint16_t)GPR_U32(ctx, 3));
    // 0x49c190: 0x8d860000  lw          $a2, 0x0($t4)
    ctx->pc = 0x49c190u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x49c194: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x49c194u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x49c198: 0x24c7001a  addiu       $a3, $a2, 0x1A
    ctx->pc = 0x49c198u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), 26));
    // 0x49c19c: 0x94e20000  lhu         $v0, 0x0($a3)
    ctx->pc = 0x49c19cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x49c1a0: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x49c1a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x49c1a4: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x49c1a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x49c1a8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x49c1a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x49c1ac: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x49c1acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x49c1b0: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x49c1b0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x49c1b4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x49c1b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x49c1b8: 0x84c2001c  lh          $v0, 0x1C($a2)
    ctx->pc = 0x49c1b8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 28)));
    // 0x49c1bc: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x49c1bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x49c1c0: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x49c1c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x49c1c4: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x49c1c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x49c1c8: 0x642024  and         $a0, $v1, $a0
    ctx->pc = 0x49c1c8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x49c1cc: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x49c1ccu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x49c1d0: 0x42402  srl         $a0, $a0, 16
    ctx->pc = 0x49c1d0u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 16));
    // 0x49c1d4: 0xa4e40000  sh          $a0, 0x0($a3)
    ctx->pc = 0x49c1d4u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 0), (uint16_t)GPR_U32(ctx, 4));
    // 0x49c1d8: 0x8d830000  lw          $v1, 0x0($t4)
    ctx->pc = 0x49c1d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x49c1dc: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x49c1dcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x49c1e0: 0x1000005c  b           . + 4 + (0x5C << 2)
    ctx->pc = 0x49C1E0u;
    {
        const bool branch_taken_0x49c1e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x49C1E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49C1E0u;
        // 0x49c1e4: 0xa462001c  sh          $v0, 0x1C($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 28), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49c1e0) {
            ctx->pc = 0x49C354u;
            goto label_49c354;
        }
    }
    ctx->pc = 0x49C1E8u;
label_49c1e8:
    // 0x49c1e8: 0x2482ffff  addiu       $v0, $a0, -0x1
    ctx->pc = 0x49c1e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x49c1ec: 0x3c08007f  lui         $t0, 0x7F
    ctx->pc = 0x49c1ecu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)127 << 16));
    // 0x49c1f0: 0xa4620000  sh          $v0, 0x0($v1)
    ctx->pc = 0x49c1f0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x49c1f4: 0x25080b84  addiu       $t0, $t0, 0xB84
    ctx->pc = 0x49c1f4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 2948));
    // 0x49c1f8: 0x3c06ffff  lui         $a2, 0xFFFF
    ctx->pc = 0x49c1f8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65535 << 16));
    // 0x49c1fc: 0x8d830000  lw          $v1, 0x0($t4)
    ctx->pc = 0x49c1fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x49c200: 0x8d040000  lw          $a0, 0x0($t0)
    ctx->pc = 0x49c200u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x7F0B84u));
    // 0x49c204: 0x94620016  lhu         $v0, 0x16($v1)
    ctx->pc = 0x49c204u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 22)));
    // 0x49c208: 0x24670006  addiu       $a3, $v1, 0x6
    ctx->pc = 0x49c208u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 6));
    // 0x49c20c: 0x862025  or          $a0, $a0, $a2
    ctx->pc = 0x49c20cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 6));
    // 0x49c210: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x49c210u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x49c214: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x49c214u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x49c218: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x49c218u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x49c21c: 0xad040000  sw          $a0, 0x0($t0)
    ctx->pc = 0x49c21cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 4));
    // 0x49c220: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x49c220u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x49c224: 0x84620018  lh          $v0, 0x18($v1)
    ctx->pc = 0x49c224u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x49c228: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x49c228u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x49c22c: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x49c22cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x49c230: 0xad040000  sw          $a0, 0x0($t0)
    ctx->pc = 0x49c230u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 4));
    // 0x49c234: 0x94e20000  lhu         $v0, 0x0($a3)
    ctx->pc = 0x49c234u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x49c238: 0x84650008  lh          $a1, 0x8($v1)
    ctx->pc = 0x49c238u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x49c23c: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x49c23cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x49c240: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x49c240u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x49c244: 0xa62825  or          $a1, $a1, $a2
    ctx->pc = 0x49c244u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 6));
    // 0x49c248: 0x465824  and         $t3, $v0, $a2
    ctx->pc = 0x49c248u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
    // 0x49c24c: 0x3563ffff  ori         $v1, $t3, 0xFFFF
    ctx->pc = 0x49c24cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 11) | (uint64_t)(uint16_t)65535);
    // 0x49c250: 0x655824  and         $t3, $v1, $a1
    ctx->pc = 0x49c250u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x49c254: 0x1645821  addu        $t3, $t3, $a0
    ctx->pc = 0x49c254u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 4)));
    // 0x49c258: 0x1661024  and         $v0, $t3, $a2
    ctx->pc = 0x49c258u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 11) & GPR_U64(ctx, 6));
    // 0x49c25c: 0x1665025  or          $t2, $t3, $a2
    ctx->pc = 0x49c25cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 11) | GPR_U64(ctx, 6));
    // 0x49c260: 0x21402  srl         $v0, $v0, 16
    ctx->pc = 0x49c260u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 16));
    // 0x49c264: 0xa4e20000  sh          $v0, 0x0($a3)
    ctx->pc = 0x49c264u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x49c268: 0x8d830000  lw          $v1, 0x0($t4)
    ctx->pc = 0x49c268u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x49c26c: 0xa46b0008  sh          $t3, 0x8($v1)
    ctx->pc = 0x49c26cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 8), (uint16_t)GPR_U32(ctx, 11));
    // 0x49c270: 0x8d870000  lw          $a3, 0x0($t4)
    ctx->pc = 0x49c270u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x49c274: 0x8d040000  lw          $a0, 0x0($t0)
    ctx->pc = 0x49c274u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x49c278: 0x94e20016  lhu         $v0, 0x16($a3)
    ctx->pc = 0x49c278u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 22)));
    // 0x49c27c: 0x24e9000a  addiu       $t1, $a3, 0xA
    ctx->pc = 0x49c27cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 7), 10));
    // 0x49c280: 0x862025  or          $a0, $a0, $a2
    ctx->pc = 0x49c280u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 6));
    // 0x49c284: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x49c284u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x49c288: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x49c288u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x49c28c: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x49c28cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x49c290: 0xad040000  sw          $a0, 0x0($t0)
    ctx->pc = 0x49c290u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 4));
    // 0x49c294: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x49c294u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x49c298: 0x84e20018  lh          $v0, 0x18($a3)
    ctx->pc = 0x49c298u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x49c29c: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x49c29cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x49c2a0: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x49c2a0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x49c2a4: 0xad040000  sw          $a0, 0x0($t0)
    ctx->pc = 0x49c2a4u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 4));
    // 0x49c2a8: 0x95220000  lhu         $v0, 0x0($t1)
    ctx->pc = 0x49c2a8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x49c2ac: 0x84e5000c  lh          $a1, 0xC($a3)
    ctx->pc = 0x49c2acu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x49c2b0: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x49c2b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x49c2b4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x49c2b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x49c2b8: 0xa62825  or          $a1, $a1, $a2
    ctx->pc = 0x49c2b8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 6));
    // 0x49c2bc: 0x1425824  and         $t3, $t2, $v0
    ctx->pc = 0x49c2bcu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 10) & GPR_U64(ctx, 2));
    // 0x49c2c0: 0x3563ffff  ori         $v1, $t3, 0xFFFF
    ctx->pc = 0x49c2c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 11) | (uint64_t)(uint16_t)65535);
    // 0x49c2c4: 0x655824  and         $t3, $v1, $a1
    ctx->pc = 0x49c2c4u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x49c2c8: 0x1645821  addu        $t3, $t3, $a0
    ctx->pc = 0x49c2c8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 4)));
    // 0x49c2cc: 0x1661024  and         $v0, $t3, $a2
    ctx->pc = 0x49c2ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 11) & GPR_U64(ctx, 6));
    // 0x49c2d0: 0x1665025  or          $t2, $t3, $a2
    ctx->pc = 0x49c2d0u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 11) | GPR_U64(ctx, 6));
    // 0x49c2d4: 0x21402  srl         $v0, $v0, 16
    ctx->pc = 0x49c2d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 16));
    // 0x49c2d8: 0xa5220000  sh          $v0, 0x0($t1)
    ctx->pc = 0x49c2d8u;
    WRITE16(ADD32(GPR_U32(ctx, 9), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x49c2dc: 0x8d830000  lw          $v1, 0x0($t4)
    ctx->pc = 0x49c2dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x49c2e0: 0xa46b000c  sh          $t3, 0xC($v1)
    ctx->pc = 0x49c2e0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 12), (uint16_t)GPR_U32(ctx, 11));
    // 0x49c2e4: 0x8d870000  lw          $a3, 0x0($t4)
    ctx->pc = 0x49c2e4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x49c2e8: 0x8d040000  lw          $a0, 0x0($t0)
    ctx->pc = 0x49c2e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x49c2ec: 0x94e2001a  lhu         $v0, 0x1A($a3)
    ctx->pc = 0x49c2ecu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 26)));
    // 0x49c2f0: 0x24e9000e  addiu       $t1, $a3, 0xE
    ctx->pc = 0x49c2f0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 7), 14));
    // 0x49c2f4: 0x862025  or          $a0, $a0, $a2
    ctx->pc = 0x49c2f4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 6));
    // 0x49c2f8: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x49c2f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x49c2fc: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x49c2fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x49c300: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x49c300u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x49c304: 0xad040000  sw          $a0, 0x0($t0)
    ctx->pc = 0x49c304u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 4));
    // 0x49c308: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x49c308u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x49c30c: 0x84e2001c  lh          $v0, 0x1C($a3)
    ctx->pc = 0x49c30cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 28)));
    // 0x49c310: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x49c310u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x49c314: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x49c314u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x49c318: 0xad040000  sw          $a0, 0x0($t0)
    ctx->pc = 0x49c318u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 4));
    // 0x49c31c: 0x95220000  lhu         $v0, 0x0($t1)
    ctx->pc = 0x49c31cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x49c320: 0x84e50010  lh          $a1, 0x10($a3)
    ctx->pc = 0x49c320u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x49c324: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x49c324u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x49c328: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x49c328u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x49c32c: 0xa62825  or          $a1, $a1, $a2
    ctx->pc = 0x49c32cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 6));
    // 0x49c330: 0x1425824  and         $t3, $t2, $v0
    ctx->pc = 0x49c330u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 10) & GPR_U64(ctx, 2));
    // 0x49c334: 0x3563ffff  ori         $v1, $t3, 0xFFFF
    ctx->pc = 0x49c334u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 11) | (uint64_t)(uint16_t)65535);
    // 0x49c338: 0x655824  and         $t3, $v1, $a1
    ctx->pc = 0x49c338u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x49c33c: 0x1645821  addu        $t3, $t3, $a0
    ctx->pc = 0x49c33cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 4)));
    // 0x49c340: 0x1663024  and         $a2, $t3, $a2
    ctx->pc = 0x49c340u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 11) & GPR_U64(ctx, 6));
    // 0x49c344: 0x63402  srl         $a2, $a2, 16
    ctx->pc = 0x49c344u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), 16));
    // 0x49c348: 0xa5260000  sh          $a2, 0x0($t1)
    ctx->pc = 0x49c348u;
    WRITE16(ADD32(GPR_U32(ctx, 9), 0), (uint16_t)GPR_U32(ctx, 6));
    // 0x49c34c: 0x8d820000  lw          $v0, 0x0($t4)
    ctx->pc = 0x49c34cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x49c350: 0xa44b0010  sh          $t3, 0x10($v0)
    ctx->pc = 0x49c350u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 16), (uint16_t)GPR_U32(ctx, 11));
label_49c354:
    // 0x49c354: 0x3e00008  jr          $ra
    ctx->pc = 0x49C354u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x49C358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49C354u;
        // 0x49c358: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x49C354u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x49C35Cu;
    // 0x49c35c: 0x0  nop
    ctx->pc = 0x49c35cu;
    // NOP
    ctx->pc = 0x49c360u;
}
