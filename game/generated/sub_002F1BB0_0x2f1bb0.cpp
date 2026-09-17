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

// Function: sub_002F1BB0
// Address: 0x2f1bb0 - 0x2f1c10
void sub_002F1BB0_0x2f1bb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F1BB0_0x2f1bb0");
#endif

    switch (ctx->pc) {
        case 0x2f1bccu: goto label_2f1bcc;
        case 0x2f1bd8u: goto label_2f1bd8;
        case 0x2f1bf8u: goto label_2f1bf8;
        default: break;
    }

    ctx->pc = 0x2f1bb0u;

    // 0x2f1bb0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2f1bb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2f1bb4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2f1bb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2f1bb8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2f1bb8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1bbc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2f1bbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2f1bc0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2f1bc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2f1bc4: 0xc0404b8  jal         func_1012E0
    ctx->pc = 0x2F1BC4u;
    SET_GPR_U32(ctx, 31, 0x2F1BCCu);
    ctx->pc = 0x2F1BC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F1BC4u;
    // 0x2f1bc8: 0x2404002c  addiu       $a0, $zero, 0x2C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1012E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1012E0u, 0x2F1BC4u, 0x2F1BCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F1BCCu;
label_2f1bcc:
    // 0x2f1bcc: 0x2404002d  addiu       $a0, $zero, 0x2D
    ctx->pc = 0x2f1bccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    // 0x2f1bd0: 0xc0404b8  jal         func_1012E0
    ctx->pc = 0x2F1BD0u;
    SET_GPR_U32(ctx, 31, 0x2F1BD8u);
    ctx->pc = 0x2F1BD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F1BD0u;
    // 0x2f1bd4: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1012E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1012E0u, 0x2F1BD0u, 0x2F1BD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F1BD8u;
label_2f1bd8:
    // 0x2f1bd8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2f1bd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1bdc: 0x3c094000  lui         $t1, 0x4000
    ctx->pc = 0x2f1bdcu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)16384 << 16));
    // 0x2f1be0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2f1be0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1be4: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2f1be4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1be8: 0x24070400  addiu       $a3, $zero, 0x400
    ctx->pc = 0x2f1be8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x2f1bec: 0x240800f2  addiu       $t0, $zero, 0xF2
    ctx->pc = 0x2f1becu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 242));
    // 0x2f1bf0: 0xc0a5adc  jal         func_296B70
    ctx->pc = 0x2F1BF0u;
    SET_GPR_U32(ctx, 31, 0x2F1BF8u);
    ctx->pc = 0x2F1BF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F1BF0u;
    // 0x2f1bf4: 0x35290880  ori         $t1, $t1, 0x880 (Delay Slot)
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)2176);
    ctx->in_delay_slot = false;
    ctx->pc = 0x296B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296B70u, 0x2F1BF0u, 0x2F1BF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F1BF8u;
label_2f1bf8:
    // 0x2f1bf8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2f1bf8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f1bfc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2f1bfcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2f1c00: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2f1c00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f1c04: 0x3e00008  jr          $ra
    ctx->pc = 0x2F1C04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F1C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1C04u;
        // 0x2f1c08: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F1C04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F1C0Cu;
    // 0x2f1c0c: 0x0  nop
    ctx->pc = 0x2f1c0cu;
    // NOP
    ctx->pc = 0x2f1c10u;
}
