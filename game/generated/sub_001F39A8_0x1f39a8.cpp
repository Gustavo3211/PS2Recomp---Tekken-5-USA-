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

// Function: sub_001F39A8
// Address: 0x1f39a8 - 0x1f3a20
void sub_001F39A8_0x1f39a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F39A8_0x1f39a8");
#endif

    switch (ctx->pc) {
        case 0x1f39bcu: goto label_1f39bc;
        case 0x1f39d0u: goto label_1f39d0;
        case 0x1f39e4u: goto label_1f39e4;
        case 0x1f39f4u: goto label_1f39f4;
        case 0x1f3a08u: goto label_1f3a08;
        default: break;
    }

    ctx->pc = 0x1f39a8u;

    // 0x1f39a8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1f39a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1f39ac: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1f39acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1f39b0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1f39b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1f39b4: 0xc07e29a  jal         func_1F8A68
    ctx->pc = 0x1F39B4u;
    SET_GPR_U32(ctx, 31, 0x1F39BCu);
    ctx->pc = 0x1F8A68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F8A68u, 0x1F39B4u, 0x1F39BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F39BCu;
label_1f39bc:
    // 0x1f39bc: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x1f39bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x1f39c0: 0x8c4323b4  lw          $v1, 0x23B4($v0)
    ctx->pc = 0x1f39c0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3B23B4u));
    // 0x1f39c4: 0x8c64001c  lw          $a0, 0x1C($v1)
    ctx->pc = 0x1f39c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x1f39c8: 0xc07e232  jal         func_1F88C8
    ctx->pc = 0x1F39C8u;
    SET_GPR_U32(ctx, 31, 0x1F39D0u);
    ctx->pc = 0x1F39CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F39C8u;
    // 0x1f39cc: 0xaf849740  sw          $a0, -0x68C0($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294940480), GPR_U32(ctx, 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F88C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F88C8u, 0x1F39C8u, 0x1F39D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F39D0u;
label_1f39d0:
    // 0x1f39d0: 0x2c500001  sltiu       $s0, $v0, 0x1
    ctx->pc = 0x1f39d0u;
    SET_GPR_U64(ctx, 16, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x1f39d4: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x1f39d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x1f39d8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f39d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f39dc: 0xc082ef8  jal         func_20BBE0
    ctx->pc = 0x1F39DCu;
    SET_GPR_U32(ctx, 31, 0x1F39E4u);
    ctx->pc = 0x1F39E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F39DCu;
    // 0x1f39e0: 0xac5088b0  sw          $s0, -0x7750($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294936752), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20BBE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20BBE0u, 0x1F39DCu, 0x1F39E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F39E4u;
label_1f39e4:
    // 0x1f39e4: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1F39E4u;
    {
        const bool branch_taken_0x1f39e4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F39E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F39E4u;
        // 0x1f39e8: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f39e4) {
            ctx->pc = 0x1F3A00u;
            goto label_1f3a00;
        }
    }
    ctx->pc = 0x1F39ECu;
    // 0x1f39ec: 0xc0c6946  jal         func_31A518
    ctx->pc = 0x1F39ECu;
    SET_GPR_U32(ctx, 31, 0x1F39F4u);
    ctx->pc = 0x1F39F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F39ECu;
    // 0x1f39f0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31A518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31A518u, 0x1F39ECu, 0x1F39F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F39F4u;
label_1f39f4:
    // 0x1f39f4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1F39F4u;
    {
        const bool branch_taken_0x1f39f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F39F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F39F4u;
        // 0x1f39f8: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f39f4) {
            ctx->pc = 0x1F3A0Cu;
            goto label_1f3a0c;
        }
    }
    ctx->pc = 0x1F39FCu;
    // 0x1f39fc: 0x0  nop
    ctx->pc = 0x1f39fcu;
    // NOP
label_1f3a00:
    // 0x1f3a00: 0xc0c6946  jal         func_31A518
    ctx->pc = 0x1F3A00u;
    SET_GPR_U32(ctx, 31, 0x1F3A08u);
    ctx->pc = 0x1F3A04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F3A00u;
    // 0x1f3a04: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31A518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31A518u, 0x1F3A00u, 0x1F3A08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F3A08u;
label_1f3a08:
    // 0x1f3a08: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1f3a08u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1f3a0c:
    // 0x1f3a0c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1f3a0cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f3a10: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1f3a10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1f3a14: 0x3e00008  jr          $ra
    ctx->pc = 0x1F3A14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F3A18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3A14u;
        // 0x1f3a18: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F3A14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F3A1Cu;
    // 0x1f3a1c: 0x0  nop
    ctx->pc = 0x1f3a1cu;
    // NOP
    ctx->pc = 0x1f3a20u;
}
