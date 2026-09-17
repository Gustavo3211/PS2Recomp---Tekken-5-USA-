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

// Function: sub_002EF860
// Address: 0x2ef860 - 0x2ef8a0
void sub_002EF860_0x2ef860(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002EF860_0x2ef860");
#endif

    switch (ctx->pc) {
        case 0x2ef860u: goto label_2ef860;
        case 0x2ef864u: goto label_2ef864;
        case 0x2ef868u: goto label_2ef868;
        case 0x2ef86cu: goto label_2ef86c;
        case 0x2ef870u: goto label_2ef870;
        case 0x2ef874u: goto label_2ef874;
        case 0x2ef878u: goto label_2ef878;
        case 0x2ef87cu: goto label_2ef87c;
        case 0x2ef880u: goto label_2ef880;
        case 0x2ef884u: goto label_2ef884;
        case 0x2ef888u: goto label_2ef888;
        case 0x2ef88cu: goto label_2ef88c;
        case 0x2ef890u: goto label_2ef890;
        case 0x2ef894u: goto label_2ef894;
        case 0x2ef898u: goto label_2ef898;
        case 0x2ef89cu: goto label_2ef89c;
        default: break;
    }

    ctx->pc = 0x2ef860u;

label_2ef860:
    // 0x2ef860: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2ef860u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_2ef864:
    // 0x2ef864: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x2ef864u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2ef868:
    // 0x2ef868: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2ef868u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2ef86c:
    // 0x2ef86c: 0x3c030015  lui         $v1, 0x15
    ctx->pc = 0x2ef86cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)21 << 16));
label_2ef870:
    // 0x2ef870: 0x68654aaf  ldl         $a1, 0x4AAF($v1)
    ctx->pc = 0x2ef870u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 19119); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
label_2ef874:
    // 0x2ef874: 0x6c654aa8  ldr         $a1, 0x4AA8($v1)
    ctx->pc = 0x2ef874u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 19112); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_2ef878:
    // 0x2ef878: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x2ef878u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_2ef87c:
    // 0x2ef87c: 0x24420050  addiu       $v0, $v0, 0x50
    ctx->pc = 0x2ef87cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
label_2ef880:
    // 0x2ef880: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x2ef880u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_2ef884:
    // 0x2ef884: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x2ef884u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_2ef888:
    // 0x2ef888: 0x60f809  jalr        $v1
label_2ef88c:
    if (ctx->pc == 0x2EF88Cu) {
        ctx->pc = 0x2EF88Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF888u;
        // 0x2ef88c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EF890u;
        goto label_2ef890;
    }
    ctx->pc = 0x2EF888u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2EF890u);
        ctx->pc = 0x2EF88Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF888u;
        // 0x2ef88c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EF888u, 0x2EF890u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2EF890u;
label_2ef890:
    // 0x2ef890: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2ef890u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2ef894:
    // 0x2ef894: 0x3e00008  jr          $ra
label_2ef898:
    if (ctx->pc == 0x2EF898u) {
        ctx->pc = 0x2EF898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF894u;
        // 0x2ef898: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EF89Cu;
        goto label_2ef89c;
    }
    ctx->pc = 0x2EF894u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EF898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF894u;
        // 0x2ef898: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EF894u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2EF89Cu;
label_2ef89c:
    // 0x2ef89c: 0x0  nop
    ctx->pc = 0x2ef89cu;
    // NOP
    ctx->pc = 0x2ef8a0u;
}
