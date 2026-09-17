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

// Function: sub_0032A2F0
// Address: 0x32a2f0 - 0x32a330
void sub_0032A2F0_0x32a2f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0032A2F0_0x32a2f0");
#endif

    ctx->pc = 0x32a2f0u;

    // 0x32a2f0: 0x510c0  sll         $v0, $a1, 3
    ctx->pc = 0x32a2f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x32a2f4: 0x2ca50004  sltiu       $a1, $a1, 0x4
    ctx->pc = 0x32a2f4u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x32a2f8: 0x24830004  addiu       $v1, $a0, 0x4
    ctx->pc = 0x32a2f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x32a2fc: 0x244200a0  addiu       $v0, $v0, 0xA0
    ctx->pc = 0x32a2fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
    // 0x32a300: 0x623021  addu        $a2, $v1, $v0
    ctx->pc = 0x32a300u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x32a304: 0x10a00007  beqz        $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x32A304u;
    {
        const bool branch_taken_0x32a304 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x32A308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A304u;
        // 0x32a308: 0x822021  addu        $a0, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32a304) {
            ctx->pc = 0x32A324u;
            goto label_32a324;
        }
    }
    ctx->pc = 0x32A30Cu;
    // 0x32a30c: 0xe48c0000  swc1        $f12, 0x0($a0)
    ctx->pc = 0x32a30cu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x32a310: 0xe4cd0000  swc1        $f13, 0x0($a2)
    ctx->pc = 0x32a310u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
    // 0x32a314: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x32a314u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x32a318: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x32a318u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x32a31c: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x32a31cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x32a320: 0xac620010  sw          $v0, 0x10($v1)
    ctx->pc = 0x32a320u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 2));
label_32a324:
    // 0x32a324: 0x3e00008  jr          $ra
    ctx->pc = 0x32A324u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32A324u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32A32Cu;
    // 0x32a32c: 0x0  nop
    ctx->pc = 0x32a32cu;
    // NOP
    ctx->pc = 0x32a330u;
}
