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

// Function: sub_002A7348
// Address: 0x2a7348 - 0x2a7398
void sub_002A7348_0x2a7348(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A7348_0x2a7348");
#endif

    switch (ctx->pc) {
        case 0x2a7368u: goto label_2a7368;
        case 0x2a7370u: goto label_2a7370;
        case 0x2a7378u: goto label_2a7378;
        case 0x2a7380u: goto label_2a7380;
        default: break;
    }

    ctx->pc = 0x2a7348u;

    // 0x2a7348: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2a7348u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2a734c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2a734cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2a7350: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2a7350u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a7354: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2a7354u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2a7358: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2a7358u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a735c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2a735cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2a7360: 0xc0cb244  jal         func_32C910
    ctx->pc = 0x2A7360u;
    SET_GPR_U32(ctx, 31, 0x2A7368u);
    ctx->pc = 0x2A7364u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A7360u;
    // 0x2a7364: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32C910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32C910u, 0x2A7360u, 0x2A7368u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A7368u;
label_2a7368:
    // 0x2a7368: 0xc0c828a  jal         func_320A28
    ctx->pc = 0x2A7368u;
    SET_GPR_U32(ctx, 31, 0x2A7370u);
    ctx->pc = 0x2A736Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A7368u;
    // 0x2a736c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x320A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x320A28u, 0x2A7368u, 0x2A7370u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A7370u;
label_2a7370:
    // 0x2a7370: 0xc0c8dfe  jal         func_3237F8
    ctx->pc = 0x2A7370u;
    SET_GPR_U32(ctx, 31, 0x2A7378u);
    ctx->pc = 0x2A7374u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A7370u;
    // 0x2a7374: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3237F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3237F8u, 0x2A7370u, 0x2A7378u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A7378u;
label_2a7378:
    // 0x2a7378: 0xc0c828a  jal         func_320A28
    ctx->pc = 0x2A7378u;
    SET_GPR_U32(ctx, 31, 0x2A7380u);
    ctx->pc = 0x2A737Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A7378u;
    // 0x2a737c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x320A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x320A28u, 0x2A7378u, 0x2A7380u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A7380u;
label_2a7380:
    // 0x2a7380: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2a7380u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a7384: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2a7384u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2a7388: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2a7388u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a738c: 0x3e00008  jr          $ra
    ctx->pc = 0x2A738Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A7390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A738Cu;
        // 0x2a7390: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A738Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A7394u;
    // 0x2a7394: 0x0  nop
    ctx->pc = 0x2a7394u;
    // NOP
    ctx->pc = 0x2a7398u;
}
