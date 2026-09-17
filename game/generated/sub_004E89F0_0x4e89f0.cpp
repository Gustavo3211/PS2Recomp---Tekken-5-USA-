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

// Function: sub_004E89F0
// Address: 0x4e89f0 - 0x4e8a80
void sub_004E89F0_0x4e89f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E89F0_0x4e89f0");
#endif

    ctx->pc = 0x4e89f0u;

    // 0x4e89f0: 0x3c05007f  lui         $a1, 0x7F
    ctx->pc = 0x4e89f0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)127 << 16));
    // 0x4e89f4: 0x84820008  lh          $v0, 0x8($a0)
    ctx->pc = 0x4e89f4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x4e89f8: 0x24a511d0  addiu       $a1, $a1, 0x11D0
    ctx->pc = 0x4e89f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4560));
    // 0x4e89fc: 0x3c07ffff  lui         $a3, 0xFFFF
    ctx->pc = 0x4e89fcu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)65535 << 16));
    // 0x4e8a00: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x4e8a00u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7F11D0u));
    // 0x4e8a04: 0x2442ff6a  addiu       $v0, $v0, -0x96
    ctx->pc = 0x4e8a04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967146));
    // 0x4e8a08: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x4e8a08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x4e8a0c: 0x3c060073  lui         $a2, 0x73
    ctx->pc = 0x4e8a0cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)115 << 16));
    // 0x4e8a10: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4e8a10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4e8a14: 0x24c6d680  addiu       $a2, $a2, -0x2980
    ctx->pc = 0x4e8a14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294956672));
    // 0x4e8a18: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4e8a18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4e8a1c: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x4e8a1cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x4e8a20: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4e8a20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4e8a24: 0x84a40000  lh          $a0, 0x0($a1)
    ctx->pc = 0x4e8a24u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4e8a28: 0x41040  sll         $v0, $a0, 1
    ctx->pc = 0x4e8a28u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x4e8a2c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x4e8a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x4e8a30: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x4e8a30u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x4e8a34: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x4e8a34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x4e8a38: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4e8a38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4e8a3c: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x4e8a3cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x4e8a40: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x4e8a40u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4e8a44: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4e8a44u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4e8a48: 0x21443  sra         $v0, $v0, 17
    ctx->pc = 0x4e8a48u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 17));
    // 0x4e8a4c: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x4e8a4cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x4e8a50: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x4e8a50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x4e8a54: 0x24217f78  addiu       $at, $at, 0x7F78
    ctx->pc = 0x4e8a54u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), 32632));
    // 0x4e8a58: 0x221021  addu        $v0, $at, $v0
    ctx->pc = 0x4e8a58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
    // 0x4e8a5c: 0x94450000  lhu         $a1, 0x0($v0)
    ctx->pc = 0x4e8a5cu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4e8a60: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x4e8a60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x4e8a64: 0x94430002  lhu         $v1, 0x2($v0)
    ctx->pc = 0x4e8a64u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x4e8a68: 0x94440000  lhu         $a0, 0x0($v0)
    ctx->pc = 0x4e8a68u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4e8a6c: 0xa4c323c4  sh          $v1, 0x23C4($a2)
    ctx->pc = 0x4e8a6cu;
    WRITE16(ADD32(GPR_U32(ctx, 6), 9156), (uint16_t)GPR_U32(ctx, 3));
    // 0x4e8a70: 0xa4c5232c  sh          $a1, 0x232C($a2)
    ctx->pc = 0x4e8a70u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 9004), (uint16_t)GPR_U32(ctx, 5));
    // 0x4e8a74: 0x3e00008  jr          $ra
    ctx->pc = 0x4E8A74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4E8A78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E8A74u;
        // 0x4e8a78: 0xa4c4232e  sh          $a0, 0x232E($a2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 6), 9006), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4E8A74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4E8A7Cu;
    // 0x4e8a7c: 0x0  nop
    ctx->pc = 0x4e8a7cu;
    // NOP
    ctx->pc = 0x4e8a80u;
}
