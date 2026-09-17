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

// Function: sub_002EF8E0
// Address: 0x2ef8e0 - 0x2ef920
void sub_002EF8E0_0x2ef8e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002EF8E0_0x2ef8e0");
#endif

    switch (ctx->pc) {
        case 0x2ef8e0u: goto label_2ef8e0;
        case 0x2ef8e4u: goto label_2ef8e4;
        case 0x2ef8e8u: goto label_2ef8e8;
        case 0x2ef8ecu: goto label_2ef8ec;
        case 0x2ef8f0u: goto label_2ef8f0;
        case 0x2ef8f4u: goto label_2ef8f4;
        case 0x2ef8f8u: goto label_2ef8f8;
        case 0x2ef8fcu: goto label_2ef8fc;
        case 0x2ef900u: goto label_2ef900;
        case 0x2ef904u: goto label_2ef904;
        case 0x2ef908u: goto label_2ef908;
        case 0x2ef90cu: goto label_2ef90c;
        case 0x2ef910u: goto label_2ef910;
        case 0x2ef914u: goto label_2ef914;
        case 0x2ef918u: goto label_2ef918;
        case 0x2ef91cu: goto label_2ef91c;
        default: break;
    }

    ctx->pc = 0x2ef8e0u;

label_2ef8e0:
    // 0x2ef8e0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2ef8e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_2ef8e4:
    // 0x2ef8e4: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x2ef8e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2ef8e8:
    // 0x2ef8e8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2ef8e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2ef8ec:
    // 0x2ef8ec: 0x3c030015  lui         $v1, 0x15
    ctx->pc = 0x2ef8ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)21 << 16));
label_2ef8f0:
    // 0x2ef8f0: 0x68654abf  ldl         $a1, 0x4ABF($v1)
    ctx->pc = 0x2ef8f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 19135); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
label_2ef8f4:
    // 0x2ef8f4: 0x6c654ab8  ldr         $a1, 0x4AB8($v1)
    ctx->pc = 0x2ef8f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 19128); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_2ef8f8:
    // 0x2ef8f8: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x2ef8f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_2ef8fc:
    // 0x2ef8fc: 0x24420050  addiu       $v0, $v0, 0x50
    ctx->pc = 0x2ef8fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
label_2ef900:
    // 0x2ef900: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x2ef900u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_2ef904:
    // 0x2ef904: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x2ef904u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_2ef908:
    // 0x2ef908: 0x60f809  jalr        $v1
label_2ef90c:
    if (ctx->pc == 0x2EF90Cu) {
        ctx->pc = 0x2EF90Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF908u;
        // 0x2ef90c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EF910u;
        goto label_2ef910;
    }
    ctx->pc = 0x2EF908u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2EF910u);
        ctx->pc = 0x2EF90Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF908u;
        // 0x2ef90c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EF908u, 0x2EF910u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2EF910u;
label_2ef910:
    // 0x2ef910: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2ef910u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2ef914:
    // 0x2ef914: 0x3e00008  jr          $ra
label_2ef918:
    if (ctx->pc == 0x2EF918u) {
        ctx->pc = 0x2EF918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF914u;
        // 0x2ef918: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EF91Cu;
        goto label_2ef91c;
    }
    ctx->pc = 0x2EF914u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EF918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF914u;
        // 0x2ef918: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EF914u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2EF91Cu;
label_2ef91c:
    // 0x2ef91c: 0x0  nop
    ctx->pc = 0x2ef91cu;
    // NOP
    ctx->pc = 0x2ef920u;
}
