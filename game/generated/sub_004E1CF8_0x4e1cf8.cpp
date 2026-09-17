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

// Function: sub_004E1CF8
// Address: 0x4e1cf8 - 0x4e1d98
void sub_004E1CF8_0x4e1cf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E1CF8_0x4e1cf8");
#endif

    ctx->pc = 0x4e1cf8u;

    // 0x4e1cf8: 0x3c05007f  lui         $a1, 0x7F
    ctx->pc = 0x4e1cf8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)127 << 16));
    // 0x4e1cfc: 0x84820008  lh          $v0, 0x8($a0)
    ctx->pc = 0x4e1cfcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x4e1d00: 0x24a51168  addiu       $a1, $a1, 0x1168
    ctx->pc = 0x4e1d00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4456));
    // 0x4e1d04: 0x3c06ffff  lui         $a2, 0xFFFF
    ctx->pc = 0x4e1d04u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65535 << 16));
    // 0x4e1d08: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x4e1d08u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7F1168u));
    // 0x4e1d0c: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x4e1d0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x4e1d10: 0x3c070073  lui         $a3, 0x73
    ctx->pc = 0x4e1d10u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)115 << 16));
    // 0x4e1d14: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4e1d14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4e1d18: 0x24e7d680  addiu       $a3, $a3, -0x2980
    ctx->pc = 0x4e1d18u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294956672));
    // 0x4e1d1c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4e1d1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4e1d20: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x4e1d20u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x4e1d24: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4e1d24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4e1d28: 0x84a20000  lh          $v0, 0x0($a1)
    ctx->pc = 0x4e1d28u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4e1d2c: 0x2442ff8d  addiu       $v0, $v0, -0x73
    ctx->pc = 0x4e1d2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967181));
    // 0x4e1d30: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x4e1d30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x4e1d34: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4e1d34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4e1d38: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x4e1d38u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x4e1d3c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4e1d3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4e1d40: 0x84a40000  lh          $a0, 0x0($a1)
    ctx->pc = 0x4e1d40u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4e1d44: 0x41040  sll         $v0, $a0, 1
    ctx->pc = 0x4e1d44u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x4e1d48: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x4e1d48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x4e1d4c: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x4e1d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x4e1d50: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x4e1d50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x4e1d54: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4e1d54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4e1d58: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x4e1d58u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x4e1d5c: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x4e1d5cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4e1d60: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4e1d60u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4e1d64: 0x21443  sra         $v0, $v0, 17
    ctx->pc = 0x4e1d64u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 17));
    // 0x4e1d68: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x4e1d68u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x4e1d6c: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x4e1d6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x4e1d70: 0x24217cd8  addiu       $at, $at, 0x7CD8
    ctx->pc = 0x4e1d70u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), 31960));
    // 0x4e1d74: 0x221021  addu        $v0, $at, $v0
    ctx->pc = 0x4e1d74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
    // 0x4e1d78: 0x94450000  lhu         $a1, 0x0($v0)
    ctx->pc = 0x4e1d78u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4e1d7c: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x4e1d7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x4e1d80: 0x94430002  lhu         $v1, 0x2($v0)
    ctx->pc = 0x4e1d80u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x4e1d84: 0x94440000  lhu         $a0, 0x0($v0)
    ctx->pc = 0x4e1d84u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4e1d88: 0xa4e323c4  sh          $v1, 0x23C4($a3)
    ctx->pc = 0x4e1d88u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 9156), (uint16_t)GPR_U32(ctx, 3));
    // 0x4e1d8c: 0xa4e5232c  sh          $a1, 0x232C($a3)
    ctx->pc = 0x4e1d8cu;
    WRITE16(ADD32(GPR_U32(ctx, 7), 9004), (uint16_t)GPR_U32(ctx, 5));
    // 0x4e1d90: 0x3e00008  jr          $ra
    ctx->pc = 0x4E1D90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4E1D94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E1D90u;
        // 0x4e1d94: 0xa4e4232e  sh          $a0, 0x232E($a3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 7), 9006), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4E1D90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4E1D98u;
}
