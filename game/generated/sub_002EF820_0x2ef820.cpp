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

// Function: sub_002EF820
// Address: 0x2ef820 - 0x2ef860
void sub_002EF820_0x2ef820(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002EF820_0x2ef820");
#endif

    switch (ctx->pc) {
        case 0x2ef820u: goto label_2ef820;
        case 0x2ef824u: goto label_2ef824;
        case 0x2ef828u: goto label_2ef828;
        case 0x2ef82cu: goto label_2ef82c;
        case 0x2ef830u: goto label_2ef830;
        case 0x2ef834u: goto label_2ef834;
        case 0x2ef838u: goto label_2ef838;
        case 0x2ef83cu: goto label_2ef83c;
        case 0x2ef840u: goto label_2ef840;
        case 0x2ef844u: goto label_2ef844;
        case 0x2ef848u: goto label_2ef848;
        case 0x2ef84cu: goto label_2ef84c;
        case 0x2ef850u: goto label_2ef850;
        case 0x2ef854u: goto label_2ef854;
        case 0x2ef858u: goto label_2ef858;
        case 0x2ef85cu: goto label_2ef85c;
        default: break;
    }

    ctx->pc = 0x2ef820u;

label_2ef820:
    // 0x2ef820: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2ef820u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_2ef824:
    // 0x2ef824: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x2ef824u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2ef828:
    // 0x2ef828: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2ef828u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2ef82c:
    // 0x2ef82c: 0x3c030015  lui         $v1, 0x15
    ctx->pc = 0x2ef82cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)21 << 16));
label_2ef830:
    // 0x2ef830: 0x68654aa7  ldl         $a1, 0x4AA7($v1)
    ctx->pc = 0x2ef830u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 19111); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
label_2ef834:
    // 0x2ef834: 0x6c654aa0  ldr         $a1, 0x4AA0($v1)
    ctx->pc = 0x2ef834u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 19104); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_2ef838:
    // 0x2ef838: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x2ef838u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_2ef83c:
    // 0x2ef83c: 0x24420050  addiu       $v0, $v0, 0x50
    ctx->pc = 0x2ef83cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
label_2ef840:
    // 0x2ef840: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x2ef840u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_2ef844:
    // 0x2ef844: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x2ef844u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_2ef848:
    // 0x2ef848: 0x60f809  jalr        $v1
label_2ef84c:
    if (ctx->pc == 0x2EF84Cu) {
        ctx->pc = 0x2EF84Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF848u;
        // 0x2ef84c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EF850u;
        goto label_2ef850;
    }
    ctx->pc = 0x2EF848u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2EF850u);
        ctx->pc = 0x2EF84Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF848u;
        // 0x2ef84c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EF848u, 0x2EF850u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2EF850u;
label_2ef850:
    // 0x2ef850: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2ef850u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2ef854:
    // 0x2ef854: 0x3e00008  jr          $ra
label_2ef858:
    if (ctx->pc == 0x2EF858u) {
        ctx->pc = 0x2EF858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF854u;
        // 0x2ef858: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EF85Cu;
        goto label_2ef85c;
    }
    ctx->pc = 0x2EF854u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EF858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF854u;
        // 0x2ef858: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EF854u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2EF85Cu;
label_2ef85c:
    // 0x2ef85c: 0x0  nop
    ctx->pc = 0x2ef85cu;
    // NOP
    ctx->pc = 0x2ef860u;
}
