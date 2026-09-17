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

// Function: sub_002B62F8
// Address: 0x2b62f8 - 0x2b6350
void sub_002B62F8_0x2b62f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B62F8_0x2b62f8");
#endif

    switch (ctx->pc) {
        case 0x2b6320u: goto label_2b6320;
        case 0x2b632cu: goto label_2b632c;
        case 0x2b6338u: goto label_2b6338;
        default: break;
    }

    ctx->pc = 0x2b62f8u;

label_2b62f8:
    // 0x2b62f8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2b62f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2b62fc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2b62fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2b6300: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2b6300u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b6304: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2b6304u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2b6308: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2b6308u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b630c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2b630cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2b6310: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2B6310u;
    {
        const bool branch_taken_0x2b6310 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B6314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6310u;
        // 0x2b6314: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6310) {
            ctx->pc = 0x2B6338u;
            goto label_2b6338;
        }
    }
    ctx->pc = 0x2B6318u;
    // 0x2b6318: 0xc0abac8  jal         func_2AEB20
    ctx->pc = 0x2B6318u;
    SET_GPR_U32(ctx, 31, 0x2B6320u);
    ctx->pc = 0x2AEB20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AEB20u, 0x2B6318u, 0x2B6320u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B6320u;
label_2b6320:
    // 0x2b6320: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2b6320u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b6324: 0xc0ad8be  jal         func_2B62F8
    ctx->pc = 0x2B6324u;
    SET_GPR_U32(ctx, 31, 0x2B632Cu);
    ctx->pc = 0x2B6328u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B6324u;
    // 0x2b6328: 0x8e050074  lw          $a1, 0x74($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B62F8u;
    goto label_2b62f8;
    ctx->pc = 0x2B632Cu;
label_2b632c:
    // 0x2b632c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2b632cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b6330: 0xc0ad8be  jal         func_2B62F8
    ctx->pc = 0x2B6330u;
    SET_GPR_U32(ctx, 31, 0x2B6338u);
    ctx->pc = 0x2B6334u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B6330u;
    // 0x2b6334: 0x8e050070  lw          $a1, 0x70($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B62F8u;
    goto label_2b62f8;
    ctx->pc = 0x2B6338u;
label_2b6338:
    // 0x2b6338: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2b6338u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b633c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2b633cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b6340: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2b6340u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b6344: 0x3e00008  jr          $ra
    ctx->pc = 0x2B6344u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B6348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6344u;
        // 0x2b6348: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B6344u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B634Cu;
    // 0x2b634c: 0x0  nop
    ctx->pc = 0x2b634cu;
    // NOP
    ctx->pc = 0x2b6350u;
}
