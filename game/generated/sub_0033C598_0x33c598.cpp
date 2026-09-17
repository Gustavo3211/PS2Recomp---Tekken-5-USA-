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

// Function: sub_0033C598
// Address: 0x33c598 - 0x33c618
void sub_0033C598_0x33c598(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0033C598_0x33c598");
#endif

    switch (ctx->pc) {
        case 0x33c598u: goto label_33c598;
        case 0x33c59cu: goto label_33c59c;
        case 0x33c5a0u: goto label_33c5a0;
        case 0x33c5a4u: goto label_33c5a4;
        case 0x33c5a8u: goto label_33c5a8;
        case 0x33c5acu: goto label_33c5ac;
        case 0x33c5b0u: goto label_33c5b0;
        case 0x33c5b4u: goto label_33c5b4;
        case 0x33c5b8u: goto label_33c5b8;
        case 0x33c5bcu: goto label_33c5bc;
        case 0x33c5c0u: goto label_33c5c0;
        case 0x33c5c4u: goto label_33c5c4;
        case 0x33c5c8u: goto label_33c5c8;
        case 0x33c5ccu: goto label_33c5cc;
        case 0x33c5d0u: goto label_33c5d0;
        case 0x33c5d4u: goto label_33c5d4;
        case 0x33c5d8u: goto label_33c5d8;
        case 0x33c5dcu: goto label_33c5dc;
        case 0x33c5e0u: goto label_33c5e0;
        case 0x33c5e4u: goto label_33c5e4;
        case 0x33c5e8u: goto label_33c5e8;
        case 0x33c5ecu: goto label_33c5ec;
        case 0x33c5f0u: goto label_33c5f0;
        case 0x33c5f4u: goto label_33c5f4;
        case 0x33c5f8u: goto label_33c5f8;
        case 0x33c5fcu: goto label_33c5fc;
        case 0x33c600u: goto label_33c600;
        case 0x33c604u: goto label_33c604;
        case 0x33c608u: goto label_33c608;
        case 0x33c60cu: goto label_33c60c;
        case 0x33c610u: goto label_33c610;
        case 0x33c614u: goto label_33c614;
        default: break;
    }

    ctx->pc = 0x33c598u;

label_33c598:
    // 0x33c598: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x33c598u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_33c59c:
    // 0x33c59c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x33c59cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_33c5a0:
    // 0x33c5a0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x33c5a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_33c5a4:
    // 0x33c5a4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x33c5a4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_33c5a8:
    // 0x33c5a8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x33c5a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_33c5ac:
    // 0x33c5ac: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x33c5acu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_33c5b0:
    // 0x33c5b0: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x33c5b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_33c5b4:
    // 0x33c5b4: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x33c5b4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_33c5b8:
    // 0x33c5b8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x33c5b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_33c5bc:
    // 0x33c5bc: 0xc0cf1c2  jal         func_33C708
label_33c5c0:
    if (ctx->pc == 0x33C5C0u) {
        ctx->pc = 0x33C5C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33C5BCu;
        // 0x33c5c0: 0x8c840018  lw          $a0, 0x18($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33C5C4u;
        goto label_33c5c4;
    }
    ctx->pc = 0x33C5BCu;
    SET_GPR_U32(ctx, 31, 0x33C5C4u);
    ctx->pc = 0x33C5C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33C5BCu;
    // 0x33c5c0: 0x8c840018  lw          $a0, 0x18($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33C708u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33C708u, 0x33C5BCu, 0x33C5C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33C5C4u;
label_33c5c4:
    // 0x33c5c4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x33c5c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_33c5c8:
    // 0x33c5c8: 0x8e03002c  lw          $v1, 0x2C($s0)
    ctx->pc = 0x33c5c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
label_33c5cc:
    // 0x33c5cc: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x33c5ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
label_33c5d0:
    // 0x33c5d0: 0x84640000  lh          $a0, 0x0($v1)
    ctx->pc = 0x33c5d0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_33c5d4:
    // 0x33c5d4: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x33c5d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_33c5d8:
    // 0x33c5d8: 0x40f809  jalr        $v0
label_33c5dc:
    if (ctx->pc == 0x33C5DCu) {
        ctx->pc = 0x33C5DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33C5D8u;
        // 0x33c5dc: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33C5E0u;
        goto label_33c5e0;
    }
    ctx->pc = 0x33C5D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x33C5E0u);
        ctx->pc = 0x33C5DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33C5D8u;
        // 0x33c5dc: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33C5D8u, 0x33C5E0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x33C5E0u;
label_33c5e0:
    // 0x33c5e0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x33c5e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_33c5e4:
    // 0x33c5e4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x33c5e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_33c5e8:
    // 0x33c5e8: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x33c5e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_33c5ec:
    // 0x33c5ec: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x33c5ecu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_33c5f0:
    // 0x33c5f0: 0xc0cfaac  jal         func_33EAB0
label_33c5f4:
    if (ctx->pc == 0x33C5F4u) {
        ctx->pc = 0x33C5F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33C5F0u;
        // 0x33c5f4: 0x40402d  daddu       $t0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33C5F8u;
        goto label_33c5f8;
    }
    ctx->pc = 0x33C5F0u;
    SET_GPR_U32(ctx, 31, 0x33C5F8u);
    ctx->pc = 0x33C5F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33C5F0u;
    // 0x33c5f4: 0x40402d  daddu       $t0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33EAB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33EAB0u, 0x33C5F0u, 0x33C5F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33C5F8u;
label_33c5f8:
    // 0x33c5f8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x33c5f8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_33c5fc:
    // 0x33c5fc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x33c5fcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_33c600:
    // 0x33c600: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x33c600u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_33c604:
    // 0x33c604: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x33c604u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_33c608:
    // 0x33c608: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x33c608u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_33c60c:
    // 0x33c60c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x33c60cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_33c610:
    // 0x33c610: 0x3e00008  jr          $ra
label_33c614:
    if (ctx->pc == 0x33C614u) {
        ctx->pc = 0x33C614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33C610u;
        // 0x33c614: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33C618u;
        goto label_fallthrough_0x33c610;
    }
    ctx->pc = 0x33C610u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33C614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33C610u;
        // 0x33c614: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33C610u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x33c610:
    ctx->pc = 0x33C618u;
}
