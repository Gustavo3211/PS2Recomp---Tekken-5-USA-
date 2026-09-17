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

// Function: sub_00126300
// Address: 0x126300 - 0x126388
void sub_00126300_0x126300(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00126300_0x126300");
#endif

    switch (ctx->pc) {
        case 0x126300u: goto label_126300;
        case 0x126304u: goto label_126304;
        case 0x126308u: goto label_126308;
        case 0x12630cu: goto label_12630c;
        case 0x126310u: goto label_126310;
        case 0x126314u: goto label_126314;
        case 0x126318u: goto label_126318;
        case 0x12631cu: goto label_12631c;
        case 0x126320u: goto label_126320;
        case 0x126324u: goto label_126324;
        case 0x126328u: goto label_126328;
        case 0x12632cu: goto label_12632c;
        case 0x126330u: goto label_126330;
        case 0x126334u: goto label_126334;
        case 0x126338u: goto label_126338;
        case 0x12633cu: goto label_12633c;
        case 0x126340u: goto label_126340;
        case 0x126344u: goto label_126344;
        case 0x126348u: goto label_126348;
        case 0x12634cu: goto label_12634c;
        case 0x126350u: goto label_126350;
        case 0x126354u: goto label_126354;
        case 0x126358u: goto label_126358;
        case 0x12635cu: goto label_12635c;
        case 0x126360u: goto label_126360;
        case 0x126364u: goto label_126364;
        case 0x126368u: goto label_126368;
        case 0x12636cu: goto label_12636c;
        case 0x126370u: goto label_126370;
        case 0x126374u: goto label_126374;
        case 0x126378u: goto label_126378;
        case 0x12637cu: goto label_12637c;
        case 0x126380u: goto label_126380;
        case 0x126384u: goto label_126384;
        default: break;
    }

    ctx->pc = 0x126300u;

label_126300:
    // 0x126300: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x126300u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_126304:
    // 0x126304: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x126304u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_126308:
    // 0x126308: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x126308u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_12630c:
    // 0x12630c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x12630cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_126310:
    // 0x126310: 0x100902d  daddu       $s2, $t0, $zero
    ctx->pc = 0x126310u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_126314:
    // 0x126314: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x126314u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_126318:
    // 0x126318: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x126318u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_12631c:
    // 0x12631c: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x12631cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
label_126320:
    // 0x126320: 0x120a02d  daddu       $s4, $t1, $zero
    ctx->pc = 0x126320u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_126324:
    // 0x126324: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x126324u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_126328:
    // 0x126328: 0x14c00003  bnez        $a2, . + 4 + (0x3 << 2)
label_12632c:
    if (ctx->pc == 0x12632Cu) {
        ctx->pc = 0x12632Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126328u;
        // 0x12632c: 0xffbf0028  sd          $ra, 0x28($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x126330u;
        goto label_126330;
    }
    ctx->pc = 0x126328u;
    {
        const bool branch_taken_0x126328 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x12632Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126328u;
        // 0x12632c: 0xffbf0028  sd          $ra, 0x28($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126328) {
            ctx->pc = 0x126338u;
            goto label_126338;
        }
    }
    ctx->pc = 0x126330u;
label_126330:
    // 0x126330: 0xc049d4a  jal         func_127528
label_126334:
    if (ctx->pc == 0x126334u) {
        ctx->pc = 0x126338u;
        goto label_126338;
    }
    ctx->pc = 0x126330u;
    SET_GPR_U32(ctx, 31, 0x126338u);
    ctx->pc = 0x127528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127528u, 0x126330u, 0x126338u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x126338u;
label_126338:
    // 0x126338: 0x80f809  jalr        $a0
label_12633c:
    if (ctx->pc == 0x12633Cu) {
        ctx->pc = 0x126340u;
        goto label_126340;
    }
    ctx->pc = 0x126338u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        SET_GPR_U32(ctx, 31, 0x126340u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x126338u, 0x126340u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x126340u;
label_126340:
    // 0x126340: 0x220f809  jalr        $s1
label_126344:
    if (ctx->pc == 0x126344u) {
        ctx->pc = 0x126344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126340u;
        // 0x126344: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x126348u;
        goto label_126348;
    }
    ctx->pc = 0x126340u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 17);
        SET_GPR_U32(ctx, 31, 0x126348u);
        ctx->pc = 0x126344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126340u;
        // 0x126344: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x126340u, 0x126348u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x126348u;
label_126348:
    // 0x126348: 0x240f809  jalr        $s2
label_12634c:
    if (ctx->pc == 0x12634Cu) {
        ctx->pc = 0x12634Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126348u;
        // 0x12634c: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x126350u;
        goto label_126350;
    }
    ctx->pc = 0x126348u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 18);
        SET_GPR_U32(ctx, 31, 0x126350u);
        ctx->pc = 0x12634Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126348u;
        // 0x12634c: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x126348u, 0x126350u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x126350u;
label_126350:
    // 0x126350: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x126350u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_126354:
    // 0x126354: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x126354u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_126358:
    // 0x126358: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x126358u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_12635c:
    // 0x12635c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x12635cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_126360:
    // 0x126360: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x126360u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_126364:
    // 0x126364: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x126364u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_126368:
    // 0x126368: 0x280482d  daddu       $t1, $s4, $zero
    ctx->pc = 0x126368u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_12636c:
    // 0x12636c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x12636cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_126370:
    // 0x126370: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x126370u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_126374:
    // 0x126374: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x126374u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_126378:
    // 0x126378: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x126378u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_12637c:
    // 0x12637c: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x12637cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_126380:
    // 0x126380: 0x80493f8  j           func_124FE0
label_126384:
    if (ctx->pc == 0x126384u) {
        ctx->pc = 0x126384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126380u;
        // 0x126384: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x126388u;
        goto label_fallthrough_0x126380;
    }
    ctx->pc = 0x126380u;
    ctx->pc = 0x126384u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x126380u;
    // 0x126384: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124FE0u;
    sub_00124FE0_0x124fe0(rdram, ctx, runtime); return;
label_fallthrough_0x126380:
    ctx->pc = 0x126388u;
}
