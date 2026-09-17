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

// Function: sub_004E6660
// Address: 0x4e6660 - 0x4e66e8
void sub_004E6660_0x4e6660(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E6660_0x4e6660");
#endif

    switch (ctx->pc) {
        case 0x4e6674u: goto label_4e6674;
        default: break;
    }

    ctx->pc = 0x4e6660u;

    // 0x4e6660: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4e6660u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4e6664: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4e6664u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4e6668: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x4e6668u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x4e666c: 0xc12b5dc  jal         func_4AD770
    ctx->pc = 0x4E666Cu;
    SET_GPR_U32(ctx, 31, 0x4E6674u);
    ctx->pc = 0x4E6670u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E666Cu;
    // 0x4e6670: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AD770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AD770u, 0x4E666Cu, 0x4E6674u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E6674u;
label_4e6674:
    // 0x4e6674: 0x24030092  addiu       $v1, $zero, 0x92
    ctx->pc = 0x4e6674u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 146));
    // 0x4e6678: 0x24460010  addiu       $a2, $v0, 0x10
    ctx->pc = 0x4e6678u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x4e667c: 0xa4430008  sh          $v1, 0x8($v0)
    ctx->pc = 0x4e667cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 8), (uint16_t)GPR_U32(ctx, 3));
    // 0x4e6680: 0x24470014  addiu       $a3, $v0, 0x14
    ctx->pc = 0x4e6680u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 20));
    // 0x4e6684: 0x24480018  addiu       $t0, $v0, 0x18
    ctx->pc = 0x4e6684u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
    // 0x4e6688: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x4e6688u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
    // 0x4e668c: 0x960301be  lhu         $v1, 0x1BE($s0)
    ctx->pc = 0x4e668cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 446)));
    // 0x4e6690: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x4e6690u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4e6694: 0xa44301be  sh          $v1, 0x1BE($v0)
    ctx->pc = 0x4e6694u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 446), (uint16_t)GPR_U32(ctx, 3));
    // 0x4e6698: 0x960401b8  lhu         $a0, 0x1B8($s0)
    ctx->pc = 0x4e6698u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 440)));
    // 0x4e669c: 0xa44401b8  sh          $a0, 0x1B8($v0)
    ctx->pc = 0x4e669cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 440), (uint16_t)GPR_U32(ctx, 4));
    // 0x4e66a0: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x4e66a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x4e66a4: 0x94c30000  lhu         $v1, 0x0($a2)
    ctx->pc = 0x4e66a4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4e66a8: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x4e66a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x4e66ac: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x4e66acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x4e66b0: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x4e66b0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x4e66b4: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x4e66b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x4e66b8: 0x94e30000  lhu         $v1, 0x0($a3)
    ctx->pc = 0x4e66b8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4e66bc: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x4e66bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x4e66c0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x4e66c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x4e66c4: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x4e66c4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
    // 0x4e66c8: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x4e66c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x4e66cc: 0x95030000  lhu         $v1, 0x0($t0)
    ctx->pc = 0x4e66ccu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4e66d0: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x4e66d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x4e66d4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4e66d4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4e66d8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x4e66d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x4e66dc: 0xad030000  sw          $v1, 0x0($t0)
    ctx->pc = 0x4e66dcu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 3));
    // 0x4e66e0: 0x3e00008  jr          $ra
    ctx->pc = 0x4E66E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4E66E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E66E0u;
        // 0x4e66e4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4E66E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4E66E8u;
}
