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

// Function: sub_0022C060
// Address: 0x22c060 - 0x22c0e8
void sub_0022C060_0x22c060(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022C060_0x22c060");
#endif

    ctx->pc = 0x22c060u;

    // 0x22c060: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x22c060u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x22c064: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x22c064u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x22c068: 0x8c88003c  lw          $t0, 0x3C($a0)
    ctx->pc = 0x22c068u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 60)));
    // 0x22c06c: 0x8c860034  lw          $a2, 0x34($a0)
    ctx->pc = 0x22c06cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
    // 0x22c070: 0x8c890044  lw          $t1, 0x44($a0)
    ctx->pc = 0x22c070u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 68)));
    // 0x22c074: 0x1048021  addu        $s0, $t0, $a0
    ctx->pc = 0x22c074u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
    // 0x22c078: 0x8c87004c  lw          $a3, 0x4C($a0)
    ctx->pc = 0x22c078u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 76)));
    // 0x22c07c: 0x208400b  movn        $t0, $s0, $t0
    ctx->pc = 0x22c07cu;
    if (GPR_U64(ctx, 8) != 0) SET_GPR_VEC(ctx, 8, GPR_VEC(ctx, 16));
    // 0x22c080: 0x8c850054  lw          $a1, 0x54($a0)
    ctx->pc = 0x22c080u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 84)));
    // 0x22c084: 0xc47821  addu        $t7, $a2, $a0
    ctx->pc = 0x22c084u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x22c088: 0x8c83005c  lw          $v1, 0x5C($a0)
    ctx->pc = 0x22c088u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 92)));
    // 0x22c08c: 0x1247021  addu        $t6, $t1, $a0
    ctx->pc = 0x22c08cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 4)));
    // 0x22c090: 0x8c820064  lw          $v0, 0x64($a0)
    ctx->pc = 0x22c090u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 100)));
    // 0x22c094: 0xe46821  addu        $t5, $a3, $a0
    ctx->pc = 0x22c094u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
    // 0x22c098: 0xa45821  addu        $t3, $a1, $a0
    ctx->pc = 0x22c098u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x22c09c: 0x646021  addu        $t4, $v1, $a0
    ctx->pc = 0x22c09cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x22c0a0: 0x445021  addu        $t2, $v0, $a0
    ctx->pc = 0x22c0a0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x22c0a4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x22c0a4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22c0a8: 0x1e6300b  movn        $a2, $t7, $a2
    ctx->pc = 0x22c0a8u;
    if (GPR_U64(ctx, 6) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 15));
    // 0x22c0ac: 0x1c9480b  movn        $t1, $t6, $t1
    ctx->pc = 0x22c0acu;
    if (GPR_U64(ctx, 9) != 0) SET_GPR_VEC(ctx, 9, GPR_VEC(ctx, 14));
    // 0x22c0b0: 0x1a7380b  movn        $a3, $t5, $a3
    ctx->pc = 0x22c0b0u;
    if (GPR_U64(ctx, 7) != 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 13));
    // 0x22c0b4: 0x165280b  movn        $a1, $t3, $a1
    ctx->pc = 0x22c0b4u;
    if (GPR_U64(ctx, 5) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 11));
    // 0x22c0b8: 0x183180b  movn        $v1, $t4, $v1
    ctx->pc = 0x22c0b8u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 12));
    // 0x22c0bc: 0x142100b  movn        $v0, $t2, $v0
    ctx->pc = 0x22c0bcu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 10));
    // 0x22c0c0: 0xac860034  sw          $a2, 0x34($a0)
    ctx->pc = 0x22c0c0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 52), GPR_U32(ctx, 6));
    // 0x22c0c4: 0xac820064  sw          $v0, 0x64($a0)
    ctx->pc = 0x22c0c4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 100), GPR_U32(ctx, 2));
    // 0x22c0c8: 0xac88003c  sw          $t0, 0x3C($a0)
    ctx->pc = 0x22c0c8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 60), GPR_U32(ctx, 8));
    // 0x22c0cc: 0xac890044  sw          $t1, 0x44($a0)
    ctx->pc = 0x22c0ccu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 68), GPR_U32(ctx, 9));
    // 0x22c0d0: 0xac87004c  sw          $a3, 0x4C($a0)
    ctx->pc = 0x22c0d0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 76), GPR_U32(ctx, 7));
    // 0x22c0d4: 0xac850054  sw          $a1, 0x54($a0)
    ctx->pc = 0x22c0d4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 84), GPR_U32(ctx, 5));
    // 0x22c0d8: 0xac83005c  sw          $v1, 0x5C($a0)
    ctx->pc = 0x22c0d8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 92), GPR_U32(ctx, 3));
    // 0x22c0dc: 0x3e00008  jr          $ra
    ctx->pc = 0x22C0DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22C0E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C0DCu;
        // 0x22c0e0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22C0DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22C0E4u;
    // 0x22c0e4: 0x0  nop
    ctx->pc = 0x22c0e4u;
    // NOP
    ctx->pc = 0x22c0e8u;
}
