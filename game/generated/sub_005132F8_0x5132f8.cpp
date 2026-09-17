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

// Function: sub_005132F8
// Address: 0x5132f8 - 0x513340
void sub_005132F8_0x5132f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_005132F8_0x5132f8");
#endif

    ctx->pc = 0x5132f8u;

    // 0x5132f8: 0x52c00  sll         $a1, $a1, 16
    ctx->pc = 0x5132f8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x5132fc: 0x24032000  addiu       $v1, $zero, 0x2000
    ctx->pc = 0x5132fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
    // 0x513300: 0x52c43  sra         $a1, $a1, 17
    ctx->pc = 0x513300u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 17));
    // 0x513304: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x513304u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x513308: 0x52840  sll         $a1, $a1, 1
    ctx->pc = 0x513308u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x51330c: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x51330cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x513310: 0xa42821  addu        $a1, $a1, $a0
    ctx->pc = 0x513310u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x513314: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x513314u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x513318: 0x84a40000  lh          $a0, 0x0($a1)
    ctx->pc = 0x513318u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x51331c: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x51331cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x513320: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x513320u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
    // 0x513324: 0x42023  negu        $a0, $a0
    ctx->pc = 0x513324u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 4)));
    // 0x513328: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x513328u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x51332c: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x51332cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x513330: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x513330u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x513334: 0x3e00008  jr          $ra
    ctx->pc = 0x513334u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x513338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x513334u;
        // 0x513338: 0x821024  and         $v0, $a0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x513334u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x51333Cu;
    // 0x51333c: 0x0  nop
    ctx->pc = 0x51333cu;
    // NOP
    ctx->pc = 0x513340u;
}
