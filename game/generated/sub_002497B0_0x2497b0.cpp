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

// Function: sub_002497B0
// Address: 0x2497b0 - 0x249830
void sub_002497B0_0x2497b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002497B0_0x2497b0");
#endif

    switch (ctx->pc) {
        case 0x2497d4u: goto label_2497d4;
        case 0x2497e4u: goto label_2497e4;
        case 0x249800u: goto label_249800;
        case 0x249818u: goto label_249818;
        default: break;
    }

    ctx->pc = 0x2497b0u;

    // 0x2497b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2497b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2497b4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2497b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2497b8: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2497b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2497bc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2497bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2497c0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2497c0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2497c4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2497c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2497c8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2497c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2497cc: 0xc0d69fa  jal         func_35A7E8
    ctx->pc = 0x2497CCu;
    SET_GPR_U32(ctx, 31, 0x2497D4u);
    ctx->pc = 0x2497D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2497CCu;
    // 0x2497d0: 0x8e250010  lw          $a1, 0x10($s1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35A7E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35A7E8u, 0x2497CCu, 0x2497D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2497D4u;
label_2497d4:
    // 0x2497d4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2497D4u;
    {
        const bool branch_taken_0x2497d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2497D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2497D4u;
        // 0x2497d8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2497d4) {
            ctx->pc = 0x2497ECu;
            goto label_2497ec;
        }
    }
    ctx->pc = 0x2497DCu;
    // 0x2497dc: 0xc0d6a12  jal         func_35A848
    ctx->pc = 0x2497DCu;
    SET_GPR_U32(ctx, 31, 0x2497E4u);
    ctx->pc = 0x35A848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35A848u, 0x2497DCu, 0x2497E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2497E4u;
label_2497e4:
    // 0x2497e4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2497e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2497e8: 0xae23000c  sw          $v1, 0xC($s1)
    ctx->pc = 0x2497e8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 3));
label_2497ec:
    // 0x2497ec: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2497ecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2497f0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2497f0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2497f4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2497f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2497f8: 0x3e00008  jr          $ra
    ctx->pc = 0x2497F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2497FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2497F8u;
        // 0x2497fc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2497F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x249800u;
label_249800:
    // 0x249800: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x249800u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x249804: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x249804u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x249808: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x249808u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24980c: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x24980cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x249810: 0xc09251e  jal         func_249478
    ctx->pc = 0x249810u;
    SET_GPR_U32(ctx, 31, 0x249818u);
    ctx->pc = 0x249814u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x249810u;
    // 0x249814: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249478u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x249478u, 0x249810u, 0x249818u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x249818u;
label_249818:
    // 0x249818: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x249818u;
    {
        const bool branch_taken_0x249818 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x249818) {
            ctx->pc = 0x24981Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x249818u;
            // 0x24981c: 0xae00000c  sw          $zero, 0xC($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x249820u;
            goto label_249820;
        }
    }
    ctx->pc = 0x249820u;
label_249820:
    // 0x249820: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x249820u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x249824: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x249824u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x249828: 0x3e00008  jr          $ra
    ctx->pc = 0x249828u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24982Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249828u;
        // 0x24982c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x249828u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x249830u;
}
