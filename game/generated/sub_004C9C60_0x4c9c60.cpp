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

// Function: sub_004C9C60
// Address: 0x4c9c60 - 0x4c9e38
void sub_004C9C60_0x4c9c60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004C9C60_0x4c9c60");
#endif

    switch (ctx->pc) {
        case 0x4c9c68u: goto label_4c9c68;
        default: break;
    }

    ctx->pc = 0x4c9c60u;

    // 0x4c9c60: 0x3e00008  jr          $ra
    ctx->pc = 0x4C9C60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4C9C60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4C9C68u;
label_4c9c68:
    // 0x4c9c68: 0x80782d  daddu       $t7, $a0, $zero
    ctx->pc = 0x4c9c68u;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c9c6c: 0x3c06007f  lui         $a2, 0x7F
    ctx->pc = 0x4c9c6cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)127 << 16));
    // 0x4c9c70: 0x24c50f50  addiu       $a1, $a2, 0xF50
    ctx->pc = 0x4c9c70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 3920));
    // 0x4c9c74: 0x25eb0160  addiu       $t3, $t7, 0x160
    ctx->pc = 0x4c9c74u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 15), 352));
    // 0x4c9c78: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x4c9c78u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7F0F50u));
    // 0x4c9c7c: 0x3c08ffff  lui         $t0, 0xFFFF
    ctx->pc = 0x4c9c7cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)65535 << 16));
    // 0x4c9c80: 0x85620000  lh          $v0, 0x0($t3)
    ctx->pc = 0x4c9c80u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x4c9c84: 0x25e7015e  addiu       $a3, $t7, 0x15E
    ctx->pc = 0x4c9c84u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 15), 350));
    // 0x4c9c88: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4c9c88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4c9c8c: 0x481025  or          $v0, $v0, $t0
    ctx->pc = 0x4c9c8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
    // 0x4c9c90: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4c9c90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4c9c94: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x4c9c94u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x4c9c98: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4c9c98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4c9c9c: 0x84a20000  lh          $v0, 0x0($a1)
    ctx->pc = 0x4c9c9cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4c9ca0: 0x84e40000  lh          $a0, 0x0($a3)
    ctx->pc = 0x4c9ca0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4c9ca4: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x4c9ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x4c9ca8: 0x481025  or          $v0, $v0, $t0
    ctx->pc = 0x4c9ca8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
    // 0x4c9cac: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4c9cacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4c9cb0: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x4c9cb0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x4c9cb4: 0x84a20000  lh          $v0, 0x0($a1)
    ctx->pc = 0x4c9cb4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4c9cb8: 0x442000b  bltzl       $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x4C9CB8u;
    {
        const bool branch_taken_0x4c9cb8 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x4c9cb8) {
            ctx->pc = 0x4C9CBCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4C9CB8u;
            // 0x4c9cbc: 0x3462ffff  ori         $v0, $v1, 0xFFFF (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
            ctx->in_delay_slot = false;
            ctx->pc = 0x4C9CE8u;
            goto label_4c9ce8;
        }
    }
    ctx->pc = 0x4C9CC0u;
    // 0x4c9cc0: 0x2442fa00  addiu       $v0, $v0, -0x600
    ctx->pc = 0x4c9cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965760));
    // 0x4c9cc4: 0x442000d  bltzl       $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x4C9CC4u;
    {
        const bool branch_taken_0x4c9cc4 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x4c9cc4) {
            ctx->pc = 0x4C9CC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4C9CC4u;
            // 0x4c9cc8: 0x24c60f50  addiu       $a2, $a2, 0xF50 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 3920));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4C9CFCu;
            goto label_4c9cfc;
        }
    }
    ctx->pc = 0x4C9CCCu;
    // 0x4c9ccc: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x4c9cccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x4c9cd0: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4c9cd0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4c9cd4: 0x34420600  ori         $v0, $v0, 0x600
    ctx->pc = 0x4c9cd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1536);
    // 0x4c9cd8: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4c9cd8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4c9cdc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x4C9CDCu;
    {
        const bool branch_taken_0x4c9cdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C9CE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C9CDCu;
        // 0x4c9ce0: 0xaca30000  sw          $v1, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c9cdc) {
            ctx->pc = 0x4C9CF0u;
            goto label_4c9cf0;
        }
    }
    ctx->pc = 0x4C9CE4u;
    // 0x4c9ce4: 0x0  nop
    ctx->pc = 0x4c9ce4u;
    // NOP
label_4c9ce8:
    // 0x4c9ce8: 0x481024  and         $v0, $v0, $t0
    ctx->pc = 0x4c9ce8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 8));
    // 0x4c9cec: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x4c9cecu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
label_4c9cf0:
    // 0x4c9cf0: 0xa4e00000  sh          $zero, 0x0($a3)
    ctx->pc = 0x4c9cf0u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x4c9cf4: 0x24c60f50  addiu       $a2, $a2, 0xF50
    ctx->pc = 0x4c9cf4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 3920));
    // 0x4c9cf8: 0x3c08ffff  lui         $t0, 0xFFFF
    ctx->pc = 0x4c9cf8u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)65535 << 16));
label_4c9cfc:
    // 0x4c9cfc: 0x94c20000  lhu         $v0, 0x0($a2)
    ctx->pc = 0x4c9cfcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4c9d00: 0x3c09007f  lui         $t1, 0x7F
    ctx->pc = 0x4c9d00u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)127 << 16));
    // 0x4c9d04: 0x25290f54  addiu       $t1, $t1, 0xF54
    ctx->pc = 0x4c9d04u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 3924));
    // 0x4c9d08: 0x3c0a0054  lui         $t2, 0x54
    ctx->pc = 0x4c9d08u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)84 << 16));
    // 0x4c9d0c: 0xa5620000  sh          $v0, 0x0($t3)
    ctx->pc = 0x4c9d0cu;
    WRITE16(ADD32(GPR_U32(ctx, 11), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4c9d10: 0x3c0b007f  lui         $t3, 0x7F
    ctx->pc = 0x4c9d10u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)127 << 16));
    // 0x4c9d14: 0x254a7210  addiu       $t2, $t2, 0x7210
    ctx->pc = 0x4c9d14u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 29200));
    // 0x4c9d18: 0x3c07007f  lui         $a3, 0x7F
    ctx->pc = 0x4c9d18u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)127 << 16));
    // 0x4c9d1c: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x4c9d1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4c9d20: 0x24e70f58  addiu       $a3, $a3, 0xF58
    ctx->pc = 0x4c9d20u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 3928));
    // 0x4c9d24: 0x80c20001  lb          $v0, 0x1($a2)
    ctx->pc = 0x4c9d24u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 1)));
    // 0x4c9d28: 0x25ec0010  addiu       $t4, $t7, 0x10
    ctx->pc = 0x4c9d28u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 15), 16));
    // 0x4c9d2c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4c9d2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4c9d30: 0x8d240000  lw          $a0, 0x0($t1)
    ctx->pc = 0x4c9d30u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x7F0F54u));
    // 0x4c9d34: 0x481025  or          $v0, $v0, $t0
    ctx->pc = 0x4c9d34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
    // 0x4c9d38: 0x25ed0014  addiu       $t5, $t7, 0x14
    ctx->pc = 0x4c9d38u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 15), 20));
    // 0x4c9d3c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4c9d3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4c9d40: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4c9d40u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x4c9d44: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x4c9d44u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x4c9d48: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4c9d48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4c9d4c: 0x25ee0018  addiu       $t6, $t7, 0x18
    ctx->pc = 0x4c9d4cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 15), 24));
    // 0x4c9d50: 0x90c20000  lbu         $v0, 0x0($a2)
    ctx->pc = 0x4c9d50u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4c9d54: 0x481025  or          $v0, $v0, $t0
    ctx->pc = 0x4c9d54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
    // 0x4c9d58: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4c9d58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4c9d5c: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x4c9d5cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x4c9d60: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4c9d60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4c9d64: 0x85e201be  lh          $v0, 0x1BE($t7)
    ctx->pc = 0x4c9d64u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 15), 446)));
    // 0x4c9d68: 0x84c50000  lh          $a1, 0x0($a2)
    ctx->pc = 0x4c9d68u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4c9d6c: 0x481025  or          $v0, $v0, $t0
    ctx->pc = 0x4c9d6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
    // 0x4c9d70: 0xad6a0f5c  sw          $t2, 0xF5C($t3)
    ctx->pc = 0x4c9d70u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 3932), GPR_U32(ctx, 10));
    // 0x4c9d74: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x4c9d74u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x4c9d78: 0xad240000  sw          $a0, 0x0($t1)
    ctx->pc = 0x4c9d78u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 4));
    // 0x4c9d7c: 0x85220000  lh          $v0, 0x0($t1)
    ctx->pc = 0x4c9d7cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x4c9d80: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x4c9d80u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x4c9d84: 0x4a1021  addu        $v0, $v0, $t2
    ctx->pc = 0x4c9d84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x4c9d88: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x4c9d88u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4c9d8c: 0xa42821  addu        $a1, $a1, $a0
    ctx->pc = 0x4c9d8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x4c9d90: 0xa82825  or          $a1, $a1, $t0
    ctx->pc = 0x4c9d90u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 8));
    // 0x4c9d94: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x4c9d94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x4c9d98: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x4c9d98u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x4c9d9c: 0x94c20000  lhu         $v0, 0x0($a2)
    ctx->pc = 0x4c9d9cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4c9da0: 0xa5e2000c  sh          $v0, 0xC($t7)
    ctx->pc = 0x4c9da0u;
    WRITE16(ADD32(GPR_U32(ctx, 15), 12), (uint16_t)GPR_U32(ctx, 2));
    // 0x4c9da4: 0x8ce40000  lw          $a0, 0x0($a3)
    ctx->pc = 0x4c9da4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4c9da8: 0x95830000  lhu         $v1, 0x0($t4)
    ctx->pc = 0x4c9da8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x4c9dac: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x4c9dacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x4c9db0: 0x481024  and         $v0, $v0, $t0
    ctx->pc = 0x4c9db0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 8));
    // 0x4c9db4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x4c9db4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x4c9db8: 0xad830000  sw          $v1, 0x0($t4)
    ctx->pc = 0x4c9db8u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 3));
    // 0x4c9dbc: 0x8ce40000  lw          $a0, 0x0($a3)
    ctx->pc = 0x4c9dbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4c9dc0: 0x95a30000  lhu         $v1, 0x0($t5)
    ctx->pc = 0x4c9dc0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x4c9dc4: 0x8c820014  lw          $v0, 0x14($a0)
    ctx->pc = 0x4c9dc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x4c9dc8: 0x481024  and         $v0, $v0, $t0
    ctx->pc = 0x4c9dc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 8));
    // 0x4c9dcc: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x4c9dccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x4c9dd0: 0xada30000  sw          $v1, 0x0($t5)
    ctx->pc = 0x4c9dd0u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 0), GPR_U32(ctx, 3));
    // 0x4c9dd4: 0x8ce40000  lw          $a0, 0x0($a3)
    ctx->pc = 0x4c9dd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4c9dd8: 0x95c30000  lhu         $v1, 0x0($t6)
    ctx->pc = 0x4c9dd8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x4c9ddc: 0x8c820018  lw          $v0, 0x18($a0)
    ctx->pc = 0x4c9ddcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x4c9de0: 0x481024  and         $v0, $v0, $t0
    ctx->pc = 0x4c9de0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 8));
    // 0x4c9de4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x4c9de4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x4c9de8: 0xadc30000  sw          $v1, 0x0($t6)
    ctx->pc = 0x4c9de8u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 0), GPR_U32(ctx, 3));
    // 0x4c9dec: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x4c9decu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4c9df0: 0x94430022  lhu         $v1, 0x22($v0)
    ctx->pc = 0x4c9df0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 34)));
    // 0x4c9df4: 0xa5e30022  sh          $v1, 0x22($t7)
    ctx->pc = 0x4c9df4u;
    WRITE16(ADD32(GPR_U32(ctx, 15), 34), (uint16_t)GPR_U32(ctx, 3));
    // 0x4c9df8: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x4c9df8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4c9dfc: 0x94430024  lhu         $v1, 0x24($v0)
    ctx->pc = 0x4c9dfcu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x4c9e00: 0xa5e30024  sh          $v1, 0x24($t7)
    ctx->pc = 0x4c9e00u;
    WRITE16(ADD32(GPR_U32(ctx, 15), 36), (uint16_t)GPR_U32(ctx, 3));
    // 0x4c9e04: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x4c9e04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4c9e08: 0x94430026  lhu         $v1, 0x26($v0)
    ctx->pc = 0x4c9e08u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 38)));
    // 0x4c9e0c: 0xa5e30026  sh          $v1, 0x26($t7)
    ctx->pc = 0x4c9e0cu;
    WRITE16(ADD32(GPR_U32(ctx, 15), 38), (uint16_t)GPR_U32(ctx, 3));
    // 0x4c9e10: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x4c9e10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4c9e14: 0x94430028  lhu         $v1, 0x28($v0)
    ctx->pc = 0x4c9e14u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x4c9e18: 0xa5e30028  sh          $v1, 0x28($t7)
    ctx->pc = 0x4c9e18u;
    WRITE16(ADD32(GPR_U32(ctx, 15), 40), (uint16_t)GPR_U32(ctx, 3));
    // 0x4c9e1c: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x4c9e1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4c9e20: 0x9443002a  lhu         $v1, 0x2A($v0)
    ctx->pc = 0x4c9e20u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 42)));
    // 0x4c9e24: 0xa5e3002a  sh          $v1, 0x2A($t7)
    ctx->pc = 0x4c9e24u;
    WRITE16(ADD32(GPR_U32(ctx, 15), 42), (uint16_t)GPR_U32(ctx, 3));
    // 0x4c9e28: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x4c9e28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4c9e2c: 0x9443002c  lhu         $v1, 0x2C($v0)
    ctx->pc = 0x4c9e2cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x4c9e30: 0x3e00008  jr          $ra
    ctx->pc = 0x4C9E30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4C9E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C9E30u;
        // 0x4c9e34: 0xa5e3002c  sh          $v1, 0x2C($t7) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 15), 44), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4C9E30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4C9E38u;
}
