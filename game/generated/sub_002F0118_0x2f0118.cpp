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

// Function: sub_002F0118
// Address: 0x2f0118 - 0x2f0158
void sub_002F0118_0x2f0118(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F0118_0x2f0118");
#endif

    switch (ctx->pc) {
        case 0x2f0118u: goto label_2f0118;
        case 0x2f011cu: goto label_2f011c;
        case 0x2f0120u: goto label_2f0120;
        case 0x2f0124u: goto label_2f0124;
        case 0x2f0128u: goto label_2f0128;
        case 0x2f012cu: goto label_2f012c;
        case 0x2f0130u: goto label_2f0130;
        case 0x2f0134u: goto label_2f0134;
        case 0x2f0138u: goto label_2f0138;
        case 0x2f013cu: goto label_2f013c;
        case 0x2f0140u: goto label_2f0140;
        case 0x2f0144u: goto label_2f0144;
        case 0x2f0148u: goto label_2f0148;
        case 0x2f014cu: goto label_2f014c;
        case 0x2f0150u: goto label_2f0150;
        case 0x2f0154u: goto label_2f0154;
        default: break;
    }

    ctx->pc = 0x2f0118u;

label_2f0118:
    // 0x2f0118: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2f0118u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_2f011c:
    // 0x2f011c: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x2f011cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2f0120:
    // 0x2f0120: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2f0120u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2f0124:
    // 0x2f0124: 0x3c030015  lui         $v1, 0x15
    ctx->pc = 0x2f0124u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)21 << 16));
label_2f0128:
    // 0x2f0128: 0x68654ac7  ldl         $a1, 0x4AC7($v1)
    ctx->pc = 0x2f0128u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 19143); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
label_2f012c:
    // 0x2f012c: 0x6c654ac0  ldr         $a1, 0x4AC0($v1)
    ctx->pc = 0x2f012cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 19136); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_2f0130:
    // 0x2f0130: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x2f0130u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_2f0134:
    // 0x2f0134: 0x24420050  addiu       $v0, $v0, 0x50
    ctx->pc = 0x2f0134u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
label_2f0138:
    // 0x2f0138: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x2f0138u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_2f013c:
    // 0x2f013c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x2f013cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_2f0140:
    // 0x2f0140: 0x60f809  jalr        $v1
label_2f0144:
    if (ctx->pc == 0x2F0144u) {
        ctx->pc = 0x2F0144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0140u;
        // 0x2f0144: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F0148u;
        goto label_2f0148;
    }
    ctx->pc = 0x2F0140u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2F0148u);
        ctx->pc = 0x2F0144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0140u;
        // 0x2f0144: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F0140u, 0x2F0148u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2F0148u;
label_2f0148:
    // 0x2f0148: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2f0148u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2f014c:
    // 0x2f014c: 0x3e00008  jr          $ra
label_2f0150:
    if (ctx->pc == 0x2F0150u) {
        ctx->pc = 0x2F0150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F014Cu;
        // 0x2f0150: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F0154u;
        goto label_2f0154;
    }
    ctx->pc = 0x2F014Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F0150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F014Cu;
        // 0x2f0150: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F014Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F0154u;
label_2f0154:
    // 0x2f0154: 0x0  nop
    ctx->pc = 0x2f0154u;
    // NOP
    ctx->pc = 0x2f0158u;
}
