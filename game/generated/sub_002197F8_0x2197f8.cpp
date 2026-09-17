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

// Function: sub_002197F8
// Address: 0x2197f8 - 0x219848
void sub_002197F8_0x2197f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002197F8_0x2197f8");
#endif

    switch (ctx->pc) {
        case 0x21980cu: goto label_21980c;
        default: break;
    }

    ctx->pc = 0x2197f8u;

    // 0x2197f8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2197f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2197fc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2197fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x219800: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x219800u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x219804: 0xc08661c  jal         func_219870
    ctx->pc = 0x219804u;
    SET_GPR_U32(ctx, 31, 0x21980Cu);
    ctx->pc = 0x219808u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x219804u;
    // 0x219808: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x219870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x219870u, 0x219804u, 0x21980Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21980Cu;
label_21980c:
    // 0x21980c: 0x102100  sll         $a0, $s0, 4
    ctx->pc = 0x21980cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x219810: 0x1018c0  sll         $v1, $s0, 3
    ctx->pc = 0x219810u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x219814: 0x3c05003f  lui         $a1, 0x3F
    ctx->pc = 0x219814u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
    // 0x219818: 0xa42821  addu        $a1, $a1, $a0
    ctx->pc = 0x219818u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x21981c: 0x8ca5f624  lw          $a1, -0x9DC($a1)
    ctx->pc = 0x21981cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294964772)));
    // 0x219820: 0x701823  subu        $v1, $v1, $s0
    ctx->pc = 0x219820u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x219824: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x219824u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x219828: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x219828u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x21982c: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x21982cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x219830: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x219830u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x219834: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x219834u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x219838: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x219838u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x21983c: 0x3e00008  jr          $ra
    ctx->pc = 0x21983Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x219840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21983Cu;
        // 0x219840: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21983Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x219844u;
    // 0x219844: 0x0  nop
    ctx->pc = 0x219844u;
    // NOP
    ctx->pc = 0x219848u;
}
