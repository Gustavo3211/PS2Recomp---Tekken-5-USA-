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

// Function: sub_001FE1C8
// Address: 0x1fe1c8 - 0x1fe2b0
void sub_001FE1C8_0x1fe1c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FE1C8_0x1fe1c8");
#endif

    switch (ctx->pc) {
        case 0x1fe1f0u: goto label_1fe1f0;
        case 0x1fe1fcu: goto label_1fe1fc;
        case 0x1fe208u: goto label_1fe208;
        case 0x1fe210u: goto label_1fe210;
        case 0x1fe22cu: goto label_1fe22c;
        case 0x1fe238u: goto label_1fe238;
        case 0x1fe240u: goto label_1fe240;
        case 0x1fe258u: goto label_1fe258;
        case 0x1fe278u: goto label_1fe278;
        case 0x1fe284u: goto label_1fe284;
        default: break;
    }

    ctx->pc = 0x1fe1c8u;

    // 0x1fe1c8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1fe1c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1fe1cc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1fe1ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1fe1d0: 0x3c10003b  lui         $s0, 0x3B
    ctx->pc = 0x1fe1d0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)59 << 16));
    // 0x1fe1d4: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1fe1d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1fe1d8: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1fe1d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x1fe1dc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1fe1dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1fe1e0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1fe1e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1fe1e4: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x1fe1e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x1fe1e8: 0xc09d47e  jal         func_2751F8
    ctx->pc = 0x1FE1E8u;
    SET_GPR_U32(ctx, 31, 0x1FE1F0u);
    ctx->pc = 0x1FE1ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FE1E8u;
    // 0x1fe1ec: 0x261088d0  addiu       $s0, $s0, -0x7730 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294936784));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2751F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2751F8u, 0x1FE1E8u, 0x1FE1F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FE1F0u;
label_1fe1f0:
    // 0x1fe1f0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1fe1f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fe1f4: 0xc09d486  jal         func_275218
    ctx->pc = 0x1FE1F4u;
    SET_GPR_U32(ctx, 31, 0x1FE1FCu);
    ctx->pc = 0x1FE1F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FE1F4u;
    // 0x1fe1f8: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275218u, 0x1FE1F4u, 0x1FE1FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FE1FCu;
label_1fe1fc:
    // 0x1fe1fc: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1fe1fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1fe200: 0xc07f692  jal         func_1FDA48
    ctx->pc = 0x1FE200u;
    SET_GPR_U32(ctx, 31, 0x1FE208u);
    ctx->pc = 0x1FE204u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FE200u;
    // 0x1fe204: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FDA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FDA48u, 0x1FE200u, 0x1FE208u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FE208u;
label_1fe208:
    // 0x1fe208: 0xc07f692  jal         func_1FDA48
    ctx->pc = 0x1FE208u;
    SET_GPR_U32(ctx, 31, 0x1FE210u);
    ctx->pc = 0x1FE20Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FE208u;
    // 0x1fe20c: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FDA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FDA48u, 0x1FE208u, 0x1FE210u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FE210u;
label_1fe210:
    // 0x1fe210: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x1fe210u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x1fe214: 0x8c448880  lw          $a0, -0x7780($v0)
    ctx->pc = 0x1fe214u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3A8880u));
    // 0x1fe218: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1fe218u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1fe21c: 0x10830012  beq         $a0, $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x1FE21Cu;
    {
        const bool branch_taken_0x1fe21c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1fe21c) {
            ctx->pc = 0x1FE268u;
            goto label_1fe268;
        }
    }
    ctx->pc = 0x1FE224u;
    // 0x1fe224: 0xc09d47a  jal         func_2751E8
    ctx->pc = 0x1FE224u;
    SET_GPR_U32(ctx, 31, 0x1FE22Cu);
    ctx->pc = 0x1FE228u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FE224u;
    // 0x1fe228: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2751E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2751E8u, 0x1FE224u, 0x1FE22Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FE22Cu;
label_1fe22c:
    // 0x1fe22c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1fe22cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fe230: 0xc09d480  jal         func_275200
    ctx->pc = 0x1FE230u;
    SET_GPR_U32(ctx, 31, 0x1FE238u);
    ctx->pc = 0x1FE234u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FE230u;
    // 0x1fe234: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275200u, 0x1FE230u, 0x1FE238u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FE238u;
label_1fe238:
    // 0x1fe238: 0x1a40000b  blez        $s2, . + 4 + (0xB << 2)
    ctx->pc = 0x1FE238u;
    {
        const bool branch_taken_0x1fe238 = (GPR_S32(ctx, 18) <= 0);
        ctx->pc = 0x1FE23Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE238u;
        // 0x1fe23c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe238) {
            ctx->pc = 0x1FE268u;
            goto label_1fe268;
        }
    }
    ctx->pc = 0x1FE240u;
label_1fe240:
    // 0x1fe240: 0x8e020898  lw          $v0, 0x898($s0)
    ctx->pc = 0x1fe240u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2200)));
    // 0x1fe244: 0x8c430074  lw          $v1, 0x74($v0)
    ctx->pc = 0x1fe244u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 116)));
    // 0x1fe248: 0x54600004  bnel        $v1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1FE248u;
    {
        const bool branch_taken_0x1fe248 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fe248) {
            ctx->pc = 0x1FE24Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FE248u;
            // 0x1fe24c: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FE25Cu;
            goto label_1fe25c;
        }
    }
    ctx->pc = 0x1FE250u;
    // 0x1fe250: 0xc07f692  jal         func_1FDA48
    ctx->pc = 0x1FE250u;
    SET_GPR_U32(ctx, 31, 0x1FE258u);
    ctx->pc = 0x1FE254u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FE250u;
    // 0x1fe254: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FDA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FDA48u, 0x1FE250u, 0x1FE258u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FE258u;
label_1fe258:
    // 0x1fe258: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1fe258u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_1fe25c:
    // 0x1fe25c: 0x232102a  slt         $v0, $s1, $s2
    ctx->pc = 0x1fe25cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x1fe260: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1FE260u;
    {
        const bool branch_taken_0x1fe260 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FE264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE260u;
        // 0x1fe264: 0x261008d0  addiu       $s0, $s0, 0x8D0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe260) {
            ctx->pc = 0x1FE240u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1fe240;
        }
    }
    ctx->pc = 0x1FE268u;
label_1fe268:
    // 0x1fe268: 0x1a800009  blez        $s4, . + 4 + (0x9 << 2)
    ctx->pc = 0x1FE268u;
    {
        const bool branch_taken_0x1fe268 = (GPR_S32(ctx, 20) <= 0);
        ctx->pc = 0x1FE26Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE268u;
        // 0x1fe26c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe268) {
            ctx->pc = 0x1FE290u;
            goto label_1fe290;
        }
    }
    ctx->pc = 0x1FE270u;
    // 0x1fe270: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1fe270u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fe274: 0x0  nop
    ctx->pc = 0x1fe274u;
    // NOP
label_1fe278:
    // 0x1fe278: 0x267308d0  addiu       $s3, $s3, 0x8D0
    ctx->pc = 0x1fe278u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 2256));
    // 0x1fe27c: 0xc07f692  jal         func_1FDA48
    ctx->pc = 0x1FE27Cu;
    SET_GPR_U32(ctx, 31, 0x1FE284u);
    ctx->pc = 0x1FE280u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FE27Cu;
    // 0x1fe280: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FDA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FDA48u, 0x1FE27Cu, 0x1FE284u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FE284u;
label_1fe284:
    // 0x1fe284: 0x214102a  slt         $v0, $s0, $s4
    ctx->pc = 0x1fe284u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
    // 0x1fe288: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1FE288u;
    {
        const bool branch_taken_0x1fe288 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FE28Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE288u;
        // 0x1fe28c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe288) {
            ctx->pc = 0x1FE278u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1fe278;
        }
    }
    ctx->pc = 0x1FE290u;
label_1fe290:
    // 0x1fe290: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1fe290u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fe294: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1fe294u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1fe298: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1fe298u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1fe29c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1fe29cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1fe2a0: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1fe2a0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1fe2a4: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x1fe2a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1fe2a8: 0x3e00008  jr          $ra
    ctx->pc = 0x1FE2A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FE2ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE2A8u;
        // 0x1fe2ac: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FE2A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FE2B0u;
}
