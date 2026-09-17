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

// Function: sub_002EF8A0
// Address: 0x2ef8a0 - 0x2ef8e0
void sub_002EF8A0_0x2ef8a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002EF8A0_0x2ef8a0");
#endif

    switch (ctx->pc) {
        case 0x2ef8a0u: goto label_2ef8a0;
        case 0x2ef8a4u: goto label_2ef8a4;
        case 0x2ef8a8u: goto label_2ef8a8;
        case 0x2ef8acu: goto label_2ef8ac;
        case 0x2ef8b0u: goto label_2ef8b0;
        case 0x2ef8b4u: goto label_2ef8b4;
        case 0x2ef8b8u: goto label_2ef8b8;
        case 0x2ef8bcu: goto label_2ef8bc;
        case 0x2ef8c0u: goto label_2ef8c0;
        case 0x2ef8c4u: goto label_2ef8c4;
        case 0x2ef8c8u: goto label_2ef8c8;
        case 0x2ef8ccu: goto label_2ef8cc;
        case 0x2ef8d0u: goto label_2ef8d0;
        case 0x2ef8d4u: goto label_2ef8d4;
        case 0x2ef8d8u: goto label_2ef8d8;
        case 0x2ef8dcu: goto label_2ef8dc;
        default: break;
    }

    ctx->pc = 0x2ef8a0u;

label_2ef8a0:
    // 0x2ef8a0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2ef8a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_2ef8a4:
    // 0x2ef8a4: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x2ef8a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2ef8a8:
    // 0x2ef8a8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2ef8a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2ef8ac:
    // 0x2ef8ac: 0x3c030015  lui         $v1, 0x15
    ctx->pc = 0x2ef8acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)21 << 16));
label_2ef8b0:
    // 0x2ef8b0: 0x68654ab7  ldl         $a1, 0x4AB7($v1)
    ctx->pc = 0x2ef8b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 19127); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
label_2ef8b4:
    // 0x2ef8b4: 0x6c654ab0  ldr         $a1, 0x4AB0($v1)
    ctx->pc = 0x2ef8b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 19120); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_2ef8b8:
    // 0x2ef8b8: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x2ef8b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_2ef8bc:
    // 0x2ef8bc: 0x24420050  addiu       $v0, $v0, 0x50
    ctx->pc = 0x2ef8bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
label_2ef8c0:
    // 0x2ef8c0: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x2ef8c0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_2ef8c4:
    // 0x2ef8c4: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x2ef8c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_2ef8c8:
    // 0x2ef8c8: 0x60f809  jalr        $v1
label_2ef8cc:
    if (ctx->pc == 0x2EF8CCu) {
        ctx->pc = 0x2EF8CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF8C8u;
        // 0x2ef8cc: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EF8D0u;
        goto label_2ef8d0;
    }
    ctx->pc = 0x2EF8C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2EF8D0u);
        ctx->pc = 0x2EF8CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF8C8u;
        // 0x2ef8cc: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EF8C8u, 0x2EF8D0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2EF8D0u;
label_2ef8d0:
    // 0x2ef8d0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2ef8d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2ef8d4:
    // 0x2ef8d4: 0x3e00008  jr          $ra
label_2ef8d8:
    if (ctx->pc == 0x2EF8D8u) {
        ctx->pc = 0x2EF8D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF8D4u;
        // 0x2ef8d8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EF8DCu;
        goto label_2ef8dc;
    }
    ctx->pc = 0x2EF8D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EF8D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF8D4u;
        // 0x2ef8d8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EF8D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2EF8DCu;
label_2ef8dc:
    // 0x2ef8dc: 0x0  nop
    ctx->pc = 0x2ef8dcu;
    // NOP
    ctx->pc = 0x2ef8e0u;
}
