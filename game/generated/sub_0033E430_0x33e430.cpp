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

// Function: sub_0033E430
// Address: 0x33e430 - 0x33e4c8
void sub_0033E430_0x33e430(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0033E430_0x33e430");
#endif

    switch (ctx->pc) {
        case 0x33e430u: goto label_33e430;
        case 0x33e434u: goto label_33e434;
        case 0x33e438u: goto label_33e438;
        case 0x33e43cu: goto label_33e43c;
        case 0x33e440u: goto label_33e440;
        case 0x33e444u: goto label_33e444;
        case 0x33e448u: goto label_33e448;
        case 0x33e44cu: goto label_33e44c;
        case 0x33e450u: goto label_33e450;
        case 0x33e454u: goto label_33e454;
        case 0x33e458u: goto label_33e458;
        case 0x33e45cu: goto label_33e45c;
        case 0x33e460u: goto label_33e460;
        case 0x33e464u: goto label_33e464;
        case 0x33e468u: goto label_33e468;
        case 0x33e46cu: goto label_33e46c;
        case 0x33e470u: goto label_33e470;
        case 0x33e474u: goto label_33e474;
        case 0x33e478u: goto label_33e478;
        case 0x33e47cu: goto label_33e47c;
        case 0x33e480u: goto label_33e480;
        case 0x33e484u: goto label_33e484;
        case 0x33e488u: goto label_33e488;
        case 0x33e48cu: goto label_33e48c;
        case 0x33e490u: goto label_33e490;
        case 0x33e494u: goto label_33e494;
        case 0x33e498u: goto label_33e498;
        case 0x33e49cu: goto label_33e49c;
        case 0x33e4a0u: goto label_33e4a0;
        case 0x33e4a4u: goto label_33e4a4;
        case 0x33e4a8u: goto label_33e4a8;
        case 0x33e4acu: goto label_33e4ac;
        case 0x33e4b0u: goto label_33e4b0;
        case 0x33e4b4u: goto label_33e4b4;
        case 0x33e4b8u: goto label_33e4b8;
        case 0x33e4bcu: goto label_33e4bc;
        case 0x33e4c0u: goto label_33e4c0;
        case 0x33e4c4u: goto label_33e4c4;
        default: break;
    }

    ctx->pc = 0x33e430u;

label_33e430:
    // 0x33e430: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x33e430u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_33e434:
    // 0x33e434: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x33e434u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_33e438:
    // 0x33e438: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x33e438u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_33e43c:
    // 0x33e43c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x33e43cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_33e440:
    // 0x33e440: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x33e440u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_33e444:
    // 0x33e444: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x33e444u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_33e448:
    // 0x33e448: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x33e448u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_33e44c:
    // 0x33e44c: 0xc0c7978  jal         func_31E5E0
label_33e450:
    if (ctx->pc == 0x33E450u) {
        ctx->pc = 0x33E450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33E44Cu;
        // 0x33e450: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33E454u;
        goto label_33e454;
    }
    ctx->pc = 0x33E44Cu;
    SET_GPR_U32(ctx, 31, 0x33E454u);
    ctx->pc = 0x33E450u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33E44Cu;
    // 0x33e450: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31E5E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E5E0u, 0x33E44Cu, 0x33E454u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33E454u;
label_33e454:
    // 0x33e454: 0x8e020060  lw          $v0, 0x60($s0)
    ctx->pc = 0x33e454u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
label_33e458:
    // 0x33e458: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x33e458u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_33e45c:
    // 0x33e45c: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
label_33e460:
    if (ctx->pc == 0x33E460u) {
        ctx->pc = 0x33E464u;
        goto label_33e464;
    }
    ctx->pc = 0x33E45Cu;
    {
        const bool branch_taken_0x33e45c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x33e45c) {
            ctx->pc = 0x33E4A8u;
            goto label_33e4a8;
        }
    }
    ctx->pc = 0x33E464u;
label_33e464:
    // 0x33e464: 0x8e03002c  lw          $v1, 0x2C($s0)
    ctx->pc = 0x33e464u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
label_33e468:
    // 0x33e468: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x33e468u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_33e46c:
    // 0x33e46c: 0x24630080  addiu       $v1, $v1, 0x80
    ctx->pc = 0x33e46cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 128));
label_33e470:
    // 0x33e470: 0x84640000  lh          $a0, 0x0($v1)
    ctx->pc = 0x33e470u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_33e474:
    // 0x33e474: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x33e474u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_33e478:
    // 0x33e478: 0x40f809  jalr        $v0
label_33e47c:
    if (ctx->pc == 0x33E47Cu) {
        ctx->pc = 0x33E47Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33E478u;
        // 0x33e47c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33E480u;
        goto label_33e480;
    }
    ctx->pc = 0x33E478u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x33E480u);
        ctx->pc = 0x33E47Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33E478u;
        // 0x33e47c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33E478u, 0x33E480u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x33E480u;
label_33e480:
    // 0x33e480: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x33e480u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_33e484:
    // 0x33e484: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x33e484u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_33e488:
    // 0x33e488: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x33e488u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_33e48c:
    // 0x33e48c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x33e48cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_33e490:
    // 0x33e490: 0xc0cf22a  jal         func_33C8A8
label_33e494:
    if (ctx->pc == 0x33E494u) {
        ctx->pc = 0x33E494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33E490u;
        // 0x33e494: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33E498u;
        goto label_33e498;
    }
    ctx->pc = 0x33E490u;
    SET_GPR_U32(ctx, 31, 0x33E498u);
    ctx->pc = 0x33E494u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33E490u;
    // 0x33e494: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33C8A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33C8A8u, 0x33E490u, 0x33E498u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33E498u;
label_33e498:
    // 0x33e498: 0x8e030060  lw          $v1, 0x60($s0)
    ctx->pc = 0x33e498u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
label_33e49c:
    // 0x33e49c: 0x223182b  sltu        $v1, $s1, $v1
    ctx->pc = 0x33e49cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_33e4a0:
    // 0x33e4a0: 0x5460fff1  bnel        $v1, $zero, . + 4 + (-0xF << 2)
label_33e4a4:
    if (ctx->pc == 0x33E4A4u) {
        ctx->pc = 0x33E4A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33E4A0u;
        // 0x33e4a4: 0x8e03002c  lw          $v1, 0x2C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33E4A8u;
        goto label_33e4a8;
    }
    ctx->pc = 0x33E4A0u;
    {
        const bool branch_taken_0x33e4a0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x33e4a0) {
            ctx->pc = 0x33E4A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33E4A0u;
            // 0x33e4a4: 0x8e03002c  lw          $v1, 0x2C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x33E468u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_33e468;
        }
    }
    ctx->pc = 0x33E4A8u;
label_33e4a8:
    // 0x33e4a8: 0xc0cfa0e  jal         func_33E838
label_33e4ac:
    if (ctx->pc == 0x33E4ACu) {
        ctx->pc = 0x33E4ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33E4A8u;
        // 0x33e4ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33E4B0u;
        goto label_33e4b0;
    }
    ctx->pc = 0x33E4A8u;
    SET_GPR_U32(ctx, 31, 0x33E4B0u);
    ctx->pc = 0x33E4ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33E4A8u;
    // 0x33e4ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33E838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33E838u, 0x33E4A8u, 0x33E4B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33E4B0u;
label_33e4b0:
    // 0x33e4b0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x33e4b0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_33e4b4:
    // 0x33e4b4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x33e4b4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_33e4b8:
    // 0x33e4b8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x33e4b8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_33e4bc:
    // 0x33e4bc: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x33e4bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_33e4c0:
    // 0x33e4c0: 0x3e00008  jr          $ra
label_33e4c4:
    if (ctx->pc == 0x33E4C4u) {
        ctx->pc = 0x33E4C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33E4C0u;
        // 0x33e4c4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33E4C8u;
        goto label_fallthrough_0x33e4c0;
    }
    ctx->pc = 0x33E4C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33E4C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33E4C0u;
        // 0x33e4c4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33E4C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x33e4c0:
    ctx->pc = 0x33E4C8u;
}
