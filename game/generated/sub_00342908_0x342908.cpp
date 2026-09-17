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

// Function: sub_00342908
// Address: 0x342908 - 0x342958
void sub_00342908_0x342908(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00342908_0x342908");
#endif

    switch (ctx->pc) {
        case 0x34291cu: goto label_34291c;
        case 0x342924u: goto label_342924;
        case 0x34292cu: goto label_34292c;
        case 0x342934u: goto label_342934;
        case 0x34293cu: goto label_34293c;
        case 0x342944u: goto label_342944;
        default: break;
    }

    ctx->pc = 0x342908u;

    // 0x342908: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x342908u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x34290c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x34290cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x342910: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x342910u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x342914: 0xc0d093e  jal         func_3424F8
    ctx->pc = 0x342914u;
    SET_GPR_U32(ctx, 31, 0x34291Cu);
    ctx->pc = 0x342918u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x342914u;
    // 0x342918: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3424F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3424F8u, 0x342914u, 0x34291Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34291Cu;
label_34291c:
    // 0x34291c: 0xc0d076a  jal         func_341DA8
    ctx->pc = 0x34291Cu;
    SET_GPR_U32(ctx, 31, 0x342924u);
    ctx->pc = 0x342920u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34291Cu;
    // 0x342920: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x341DA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x341DA8u, 0x34291Cu, 0x342924u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x342924u;
label_342924:
    // 0x342924: 0xc0d094c  jal         func_342530
    ctx->pc = 0x342924u;
    SET_GPR_U32(ctx, 31, 0x34292Cu);
    ctx->pc = 0x342928u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x342924u;
    // 0x342928: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x342530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x342530u, 0x342924u, 0x34292Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34292Cu;
label_34292c:
    // 0x34292c: 0xc0d0958  jal         func_342560
    ctx->pc = 0x34292Cu;
    SET_GPR_U32(ctx, 31, 0x342934u);
    ctx->pc = 0x342930u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34292Cu;
    // 0x342930: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x342560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x342560u, 0x34292Cu, 0x342934u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x342934u;
label_342934:
    // 0x342934: 0xc0d0964  jal         func_342590
    ctx->pc = 0x342934u;
    SET_GPR_U32(ctx, 31, 0x34293Cu);
    ctx->pc = 0x342938u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x342934u;
    // 0x342938: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x342590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x342590u, 0x342934u, 0x34293Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34293Cu;
label_34293c:
    // 0x34293c: 0xc0d09ca  jal         func_342728
    ctx->pc = 0x34293Cu;
    SET_GPR_U32(ctx, 31, 0x342944u);
    ctx->pc = 0x342940u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34293Cu;
    // 0x342940: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x342728u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x342728u, 0x34293Cu, 0x342944u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x342944u;
label_342944:
    // 0x342944: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x342944u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x342948: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x342948u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x34294c: 0x3e00008  jr          $ra
    ctx->pc = 0x34294Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x342950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34294Cu;
        // 0x342950: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34294Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x342954u;
    // 0x342954: 0x0  nop
    ctx->pc = 0x342954u;
    // NOP
    ctx->pc = 0x342958u;
}
