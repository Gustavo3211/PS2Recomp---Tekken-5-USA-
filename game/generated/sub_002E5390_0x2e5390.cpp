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

// Function: sub_002E5390
// Address: 0x2e5390 - 0x2e5490
void sub_002E5390_0x2e5390(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E5390_0x2e5390");
#endif

    switch (ctx->pc) {
        case 0x2e53d4u: goto label_2e53d4;
        case 0x2e53e0u: goto label_2e53e0;
        case 0x2e53f0u: goto label_2e53f0;
        case 0x2e53fcu: goto label_2e53fc;
        case 0x2e5408u: goto label_2e5408;
        case 0x2e5414u: goto label_2e5414;
        case 0x2e5420u: goto label_2e5420;
        case 0x2e5470u: goto label_2e5470;
        default: break;
    }

    ctx->pc = 0x2e5390u;

    // 0x2e5390: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2e5390u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2e5394: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2e5394u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2e5398: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x2e5398u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e539c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2e539cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2e53a0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2e53a0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e53a4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2e53a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2e53a8: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2e53a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x2e53ac: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x2e53acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x2e53b0: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x2e53b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x2e53b4: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x2e53b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x2e53b8: 0x24a5ffb5  addiu       $a1, $a1, -0x4B
    ctx->pc = 0x2e53b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967221));
    // 0x2e53bc: 0x2442ee70  addiu       $v0, $v0, -0x1190
    ctx->pc = 0x2e53bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962800));
    // 0x2e53c0: 0x2ca50002  sltiu       $a1, $a1, 0x2
    ctx->pc = 0x2e53c0u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x2e53c4: 0x10a0002a  beqz        $a1, . + 4 + (0x2A << 2)
    ctx->pc = 0x2E53C4u;
    {
        const bool branch_taken_0x2e53c4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E53C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E53C4u;
        // 0x2e53c8: 0xae420008  sw          $v0, 0x8($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e53c4) {
            ctx->pc = 0x2E5470u;
            goto label_2e5470;
        }
    }
    ctx->pc = 0x2E53CCu;
    // 0x2e53cc: 0xc0c76ca  jal         func_31DB28
    ctx->pc = 0x2E53CCu;
    SET_GPR_U32(ctx, 31, 0x2E53D4u);
    ctx->pc = 0x2E53D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E53CCu;
    // 0x2e53d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31DB28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31DB28u, 0x2E53CCu, 0x2E53D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E53D4u;
label_2e53d4:
    // 0x2e53d4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e53d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e53d8: 0xc0c76cc  jal         func_31DB30
    ctx->pc = 0x2E53D8u;
    SET_GPR_U32(ctx, 31, 0x2E53E0u);
    ctx->pc = 0x2E53DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E53D8u;
    // 0x2e53dc: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31DB30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31DB30u, 0x2E53D8u, 0x2E53E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E53E0u;
label_2e53e0:
    // 0x2e53e0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2e53e0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e53e4: 0x1a600011  blez        $s3, . + 4 + (0x11 << 2)
    ctx->pc = 0x2E53E4u;
    {
        const bool branch_taken_0x2e53e4 = (GPR_S32(ctx, 19) <= 0);
        ctx->pc = 0x2E53E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E53E4u;
        // 0x2e53e8: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e53e4) {
            ctx->pc = 0x2E542Cu;
            goto label_2e542c;
        }
    }
    ctx->pc = 0x2E53ECu;
    // 0x2e53ec: 0x0  nop
    ctx->pc = 0x2e53ecu;
    // NOP
label_2e53f0:
    // 0x2e53f0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2e53f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e53f4: 0xc0b7a62  jal         func_2DE988
    ctx->pc = 0x2E53F4u;
    SET_GPR_U32(ctx, 31, 0x2E53FCu);
    ctx->pc = 0x2E53F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E53F4u;
    // 0x2e53f8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DE988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DE988u, 0x2E53F4u, 0x2E53FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E53FCu;
label_2e53fc:
    // 0x2e53fc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2e53fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e5400: 0xc0c7778  jal         func_31DDE0
    ctx->pc = 0x2E5400u;
    SET_GPR_U32(ctx, 31, 0x2E5408u);
    ctx->pc = 0x2E5404u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E5400u;
    // 0x2e5404: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31DDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31DDE0u, 0x2E5400u, 0x2E5408u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E5408u;
label_2e5408:
    // 0x2e5408: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e5408u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e540c: 0xc0b9536  jal         func_2E54D8
    ctx->pc = 0x2E540Cu;
    SET_GPR_U32(ctx, 31, 0x2E5414u);
    ctx->pc = 0x2E5410u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E540Cu;
    // 0x2e5410: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E54D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E54D8u, 0x2E540Cu, 0x2E5414u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E5414u;
label_2e5414:
    // 0x2e5414: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2e5414u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e5418: 0xc0c7758  jal         func_31DD60
    ctx->pc = 0x2E5418u;
    SET_GPR_U32(ctx, 31, 0x2E5420u);
    ctx->pc = 0x2E541Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E5418u;
    // 0x2e541c: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31DD60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31DD60u, 0x2E5418u, 0x2E5420u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E5420u;
label_2e5420:
    // 0x2e5420: 0x293182a  slt         $v1, $s4, $s3
    ctx->pc = 0x2e5420u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x2e5424: 0x1460fff2  bnez        $v1, . + 4 + (-0xE << 2)
    ctx->pc = 0x2E5424u;
    {
        const bool branch_taken_0x2e5424 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E5428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5424u;
        // 0x2e5428: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e5424) {
            ctx->pc = 0x2E53F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e53f0;
        }
    }
    ctx->pc = 0x2E542Cu;
label_2e542c:
    // 0x2e542c: 0x8e420040  lw          $v0, 0x40($s2)
    ctx->pc = 0x2e542cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
    // 0x2e5430: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x2e5430u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x2e5434: 0x2463fe40  addiu       $v1, $v1, -0x1C0
    ctx->pc = 0x2e5434u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966848));
    // 0x2e5438: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2e5438u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e543c: 0x34420020  ori         $v0, $v0, 0x20
    ctx->pc = 0x2e543cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32);
    // 0x2e5440: 0xae430038  sw          $v1, 0x38($s2)
    ctx->pc = 0x2e5440u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 56), GPR_U32(ctx, 3));
    // 0x2e5444: 0xae440048  sw          $a0, 0x48($s2)
    ctx->pc = 0x2e5444u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 72), GPR_U32(ctx, 4));
    // 0x2e5448: 0xae420040  sw          $v0, 0x40($s2)
    ctx->pc = 0x2e5448u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 64), GPR_U32(ctx, 2));
    // 0x2e544c: 0xae400050  sw          $zero, 0x50($s2)
    ctx->pc = 0x2e544cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 80), GPR_U32(ctx, 0));
    // 0x2e5450: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2E5450u;
    {
        const bool branch_taken_0x2e5450 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E5454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5450u;
        // 0x2e5454: 0xae400054  sw          $zero, 0x54($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 84), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e5450) {
            ctx->pc = 0x2E5470u;
            goto label_2e5470;
        }
    }
    ctx->pc = 0x2E5458u;
    // 0x2e5458: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x2e5458u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x2e545c: 0x3c040015  lui         $a0, 0x15
    ctx->pc = 0x2e545cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)21 << 16));
    // 0x2e5460: 0x2442d620  addiu       $v0, $v0, -0x29E0
    ctx->pc = 0x2e5460u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956576));
    // 0x2e5464: 0x248404f0  addiu       $a0, $a0, 0x4F0
    ctx->pc = 0x2e5464u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1264));
    // 0x2e5468: 0xc048b90  jal         func_122E40
    ctx->pc = 0x2E5468u;
    SET_GPR_U32(ctx, 31, 0x2E5470u);
    ctx->pc = 0x2E546Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E5468u;
    // 0x2e546c: 0xae420008  sw          $v0, 0x8($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122E40u, 0x2E5468u, 0x2E5470u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E5470u;
label_2e5470:
    // 0x2e5470: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2e5470u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e5474: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2e5474u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2e5478: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2e5478u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e547c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2e547cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2e5480: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x2e5480u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e5484: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x2e5484u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2e5488: 0x3e00008  jr          $ra
    ctx->pc = 0x2E5488u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E548Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5488u;
        // 0x2e548c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E5488u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E5490u;
}
