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

// Function: sub_003628E8
// Address: 0x3628e8 - 0x362980
void sub_003628E8_0x3628e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003628E8_0x3628e8");
#endif

    switch (ctx->pc) {
        case 0x3628fcu: goto label_3628fc;
        case 0x362914u: goto label_362914;
        case 0x362928u: goto label_362928;
        case 0x362930u: goto label_362930;
        case 0x362938u: goto label_362938;
        case 0x362940u: goto label_362940;
        case 0x362948u: goto label_362948;
        case 0x36295cu: goto label_36295c;
        case 0x362964u: goto label_362964;
        case 0x36296cu: goto label_36296c;
        default: break;
    }

    ctx->pc = 0x3628e8u;

    // 0x3628e8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3628e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3628ec: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3628ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3628f0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x3628f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x3628f4: 0xc0d8ada  jal         func_362B68
    ctx->pc = 0x3628F4u;
    SET_GPR_U32(ctx, 31, 0x3628FCu);
    ctx->pc = 0x362B68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x362B68u, 0x3628F4u, 0x3628FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3628FCu;
label_3628fc:
    // 0x3628fc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3628fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x362900: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x362900u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x362904: 0x16000006  bnez        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x362904u;
    {
        const bool branch_taken_0x362904 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x362908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x362904u;
        // 0x362908: 0x248474d0  addiu       $a0, $a0, 0x74D0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 29904));
        ctx->in_delay_slot = false;
        if (branch_taken_0x362904) {
            ctx->pc = 0x362920u;
            goto label_362920;
        }
    }
    ctx->pc = 0x36290Cu;
    // 0x36290c: 0xc0d8b06  jal         func_362C18
    ctx->pc = 0x36290Cu;
    SET_GPR_U32(ctx, 31, 0x362914u);
    ctx->pc = 0x362C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x362C18u, 0x36290Cu, 0x362914u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x362914u;
label_362914:
    // 0x362914: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x362914u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x362918: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x362918u;
    {
        const bool branch_taken_0x362918 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x36291Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x362918u;
        // 0x36291c: 0x3442002a  ori         $v0, $v0, 0x2A (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)42);
        ctx->in_delay_slot = false;
        if (branch_taken_0x362918) {
            ctx->pc = 0x362970u;
            goto label_362970;
        }
    }
    ctx->pc = 0x362920u;
label_362920:
    // 0x362920: 0xc0d8b52  jal         func_362D48
    ctx->pc = 0x362920u;
    SET_GPR_U32(ctx, 31, 0x362928u);
    ctx->pc = 0x362D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x362D48u, 0x362920u, 0x362928u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x362928u;
label_362928:
    // 0x362928: 0xc0d6d20  jal         func_35B480
    ctx->pc = 0x362928u;
    SET_GPR_U32(ctx, 31, 0x362930u);
    ctx->pc = 0x35B480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35B480u, 0x362928u, 0x362930u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x362930u;
label_362930:
    // 0x362930: 0xc0d7758  jal         func_35DD60
    ctx->pc = 0x362930u;
    SET_GPR_U32(ctx, 31, 0x362938u);
    ctx->pc = 0x35DD60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35DD60u, 0x362930u, 0x362938u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x362938u;
label_362938:
    // 0x362938: 0xc0d70ee  jal         func_35C3B8
    ctx->pc = 0x362938u;
    SET_GPR_U32(ctx, 31, 0x362940u);
    ctx->pc = 0x35C3B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35C3B8u, 0x362938u, 0x362940u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x362940u;
label_362940:
    // 0x362940: 0xc0d629e  jal         func_358A78
    ctx->pc = 0x362940u;
    SET_GPR_U32(ctx, 31, 0x362948u);
    ctx->pc = 0x358A78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x358A78u, 0x362940u, 0x362948u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x362948u;
label_362948:
    // 0x362948: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x362948u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36294c: 0x16030003  bne         $s0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x36294Cu;
    {
        const bool branch_taken_0x36294c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 3));
        if (branch_taken_0x36294c) {
            ctx->pc = 0x36295Cu;
            goto label_36295c;
        }
    }
    ctx->pc = 0x362954u;
    // 0x362954: 0xc0d6ecc  jal         func_35BB30
    ctx->pc = 0x362954u;
    SET_GPR_U32(ctx, 31, 0x36295Cu);
    ctx->pc = 0x35BB30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35BB30u, 0x362954u, 0x36295Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36295Cu;
label_36295c:
    // 0x36295c: 0xc0d6cb8  jal         func_35B2E0
    ctx->pc = 0x36295Cu;
    SET_GPR_U32(ctx, 31, 0x362964u);
    ctx->pc = 0x35B2E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35B2E0u, 0x36295Cu, 0x362964u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x362964u;
label_362964:
    // 0x362964: 0xc0d89b6  jal         func_3626D8
    ctx->pc = 0x362964u;
    SET_GPR_U32(ctx, 31, 0x36296Cu);
    ctx->pc = 0x362968u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x362964u;
    // 0x362968: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3626D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3626D8u, 0x362964u, 0x36296Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36296Cu;
label_36296c:
    // 0x36296c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x36296cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_362970:
    // 0x362970: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x362970u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x362974: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x362974u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x362978: 0x3e00008  jr          $ra
    ctx->pc = 0x362978u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36297Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x362978u;
        // 0x36297c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x362978u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x362980u;
}
