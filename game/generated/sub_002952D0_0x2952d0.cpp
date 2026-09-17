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

// Function: sub_002952D0
// Address: 0x2952d0 - 0x295318
void sub_002952D0_0x2952d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002952D0_0x2952d0");
#endif

    ctx->pc = 0x2952d0u;

    // 0x2952d0: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x2952d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x2952d4: 0x2ca50005  sltiu       $a1, $a1, 0x5
    ctx->pc = 0x2952d4u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x2952d8: 0x10a0000c  beqz        $a1, . + 4 + (0xC << 2)
    ctx->pc = 0x2952D8u;
    {
        const bool branch_taken_0x2952d8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2952DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2952D8u;
        // 0x2952dc: 0x441021  addu        $v0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2952d8) {
            ctx->pc = 0x29530Cu;
            goto label_29530c;
        }
    }
    ctx->pc = 0x2952E0u;
    // 0x2952e0: 0x8c42015c  lw          $v0, 0x15C($v0)
    ctx->pc = 0x2952e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 348)));
    // 0x2952e4: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2952E4u;
    {
        const bool branch_taken_0x2952e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2952e4) {
            ctx->pc = 0x29530Cu;
            goto label_29530c;
        }
    }
    ctx->pc = 0x2952ECu;
    // 0x2952ec: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x2952ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2952f0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2952f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2952f4: 0x90830080  lbu         $v1, 0x80($a0)
    ctx->pc = 0x2952f4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x2952f8: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2952F8u;
    {
        const bool branch_taken_0x2952f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2952FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2952F8u;
        // 0x2952fc: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2952f8) {
            ctx->pc = 0x295308u;
            goto label_295308;
        }
    }
    ctx->pc = 0x295300u;
    // 0x295300: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x295300u;
    {
        const bool branch_taken_0x295300 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x295300) {
            ctx->pc = 0x29530Cu;
            goto label_29530c;
        }
    }
    ctx->pc = 0x295308u;
label_295308:
    // 0x295308: 0xe48c00cc  swc1        $f12, 0xCC($a0)
    ctx->pc = 0x295308u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 204), bits); }
label_29530c:
    // 0x29530c: 0x3e00008  jr          $ra
    ctx->pc = 0x29530Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29530Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x295314u;
    // 0x295314: 0x0  nop
    ctx->pc = 0x295314u;
    // NOP
    ctx->pc = 0x295318u;
}
