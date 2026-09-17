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

// Function: sub_00125408
// Address: 0x125408 - 0x1254a0
void sub_00125408_0x125408(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00125408_0x125408");
#endif

    switch (ctx->pc) {
        case 0x125408u: goto label_125408;
        case 0x12540cu: goto label_12540c;
        case 0x125410u: goto label_125410;
        case 0x125414u: goto label_125414;
        case 0x125418u: goto label_125418;
        case 0x12541cu: goto label_12541c;
        case 0x125420u: goto label_125420;
        case 0x125424u: goto label_125424;
        case 0x125428u: goto label_125428;
        case 0x12542cu: goto label_12542c;
        case 0x125430u: goto label_125430;
        case 0x125434u: goto label_125434;
        case 0x125438u: goto label_125438;
        case 0x12543cu: goto label_12543c;
        case 0x125440u: goto label_125440;
        case 0x125444u: goto label_125444;
        case 0x125448u: goto label_125448;
        case 0x12544cu: goto label_12544c;
        case 0x125450u: goto label_125450;
        case 0x125454u: goto label_125454;
        case 0x125458u: goto label_125458;
        case 0x12545cu: goto label_12545c;
        case 0x125460u: goto label_125460;
        case 0x125464u: goto label_125464;
        case 0x125468u: goto label_125468;
        case 0x12546cu: goto label_12546c;
        case 0x125470u: goto label_125470;
        case 0x125474u: goto label_125474;
        case 0x125478u: goto label_125478;
        case 0x12547cu: goto label_12547c;
        case 0x125480u: goto label_125480;
        case 0x125484u: goto label_125484;
        case 0x125488u: goto label_125488;
        case 0x12548cu: goto label_12548c;
        case 0x125490u: goto label_125490;
        case 0x125494u: goto label_125494;
        case 0x125498u: goto label_125498;
        case 0x12549cu: goto label_12549c;
        default: break;
    }

    ctx->pc = 0x125408u;

label_125408:
    // 0x125408: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x125408u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_12540c:
    // 0x12540c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x12540cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_125410:
    // 0x125410: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x125410u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_125414:
    // 0x125414: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x125414u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_125418:
    // 0x125418: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x125418u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_12541c:
    // 0x12541c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x12541cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_125420:
    // 0x125420: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x125420u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_125424:
    // 0x125424: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x125424u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
label_125428:
    // 0x125428: 0x100a02d  daddu       $s4, $t0, $zero
    ctx->pc = 0x125428u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_12542c:
    // 0x12542c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x12542cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_125430:
    // 0x125430: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x125430u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_125434:
    // 0x125434: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x125434u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
label_125438:
    // 0x125438: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x125438u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_12543c:
    // 0x12543c: 0x16930005  bne         $s4, $s3, . + 4 + (0x5 << 2)
label_125440:
    if (ctx->pc == 0x125440u) {
        ctx->pc = 0x125440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12543Cu;
        // 0x125440: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x125444u;
        goto label_125444;
    }
    ctx->pc = 0x12543Cu;
    {
        const bool branch_taken_0x12543c = (GPR_U64(ctx, 20) != GPR_U64(ctx, 19));
        ctx->pc = 0x125440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12543Cu;
        // 0x125440: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12543c) {
            ctx->pc = 0x125454u;
            goto label_125454;
        }
    }
    ctx->pc = 0x125444u;
label_125444:
    // 0x125444: 0xc0493b0  jal         func_124EC0
label_125448:
    if (ctx->pc == 0x125448u) {
        ctx->pc = 0x12544Cu;
        goto label_12544c;
    }
    ctx->pc = 0x125444u;
    SET_GPR_U32(ctx, 31, 0x12544Cu);
    ctx->pc = 0x124EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124EC0u, 0x125444u, 0x12544Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12544Cu;
label_12544c:
    // 0x12544c: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
label_125450:
    if (ctx->pc == 0x125450u) {
        ctx->pc = 0x125450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12544Cu;
        // 0x125450: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x125454u;
        goto label_125454;
    }
    ctx->pc = 0x12544Cu;
    {
        const bool branch_taken_0x12544c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x125450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12544Cu;
        // 0x125450: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12544c) {
            ctx->pc = 0x125480u;
            goto label_125480;
        }
    }
    ctx->pc = 0x125454u;
label_125454:
    // 0x125454: 0x8e290008  lw          $t1, 0x8($s1)
    ctx->pc = 0x125454u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_125458:
    // 0x125458: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x125458u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_12545c:
    // 0x12545c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x12545cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_125460:
    // 0x125460: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x125460u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_125464:
    // 0x125464: 0x8d230004  lw          $v1, 0x4($t1)
    ctx->pc = 0x125464u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4)));
label_125468:
    // 0x125468: 0x280402d  daddu       $t0, $s4, $zero
    ctx->pc = 0x125468u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_12546c:
    // 0x12546c: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x12546cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
label_125470:
    // 0x125470: 0x84640000  lh          $a0, 0x0($v1)
    ctx->pc = 0x125470u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_125474:
    // 0x125474: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x125474u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_125478:
    // 0x125478: 0x40f809  jalr        $v0
label_12547c:
    if (ctx->pc == 0x12547Cu) {
        ctx->pc = 0x12547Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125478u;
        // 0x12547c: 0x1242021  addu        $a0, $t1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x125480u;
        goto label_125480;
    }
    ctx->pc = 0x125478u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x125480u);
        ctx->pc = 0x12547Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125478u;
        // 0x12547c: 0x1242021  addu        $a0, $t1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x125478u, 0x125480u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x125480u;
label_125480:
    // 0x125480: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x125480u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_125484:
    // 0x125484: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x125484u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_125488:
    // 0x125488: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x125488u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_12548c:
    // 0x12548c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x12548cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_125490:
    // 0x125490: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x125490u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_125494:
    // 0x125494: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x125494u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_125498:
    // 0x125498: 0x3e00008  jr          $ra
label_12549c:
    if (ctx->pc == 0x12549Cu) {
        ctx->pc = 0x12549Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125498u;
        // 0x12549c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1254A0u;
        goto label_fallthrough_0x125498;
    }
    ctx->pc = 0x125498u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12549Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125498u;
        // 0x12549c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x125498u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x125498:
    ctx->pc = 0x1254A0u;
}
