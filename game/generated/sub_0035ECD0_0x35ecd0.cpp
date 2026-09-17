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

// Function: sub_0035ECD0
// Address: 0x35ecd0 - 0x35ee18
void sub_0035ECD0_0x35ecd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0035ECD0_0x35ecd0");
#endif

    switch (ctx->pc) {
        case 0x35ed10u: goto label_35ed10;
        case 0x35ed2cu: goto label_35ed2c;
        case 0x35ed60u: goto label_35ed60;
        case 0x35ed6cu: goto label_35ed6c;
        case 0x35ed80u: goto label_35ed80;
        case 0x35eda8u: goto label_35eda8;
        case 0x35edccu: goto label_35edcc;
        case 0x35edecu: goto label_35edec;
        default: break;
    }

    ctx->pc = 0x35ecd0u;

    // 0x35ecd0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x35ecd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x35ecd4: 0x3c02001d  lui         $v0, 0x1D
    ctx->pc = 0x35ecd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)29 << 16));
    // 0x35ecd8: 0x3c03001d  lui         $v1, 0x1D
    ctx->pc = 0x35ecd8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)29 << 16));
    // 0x35ecdc: 0x3c04001d  lui         $a0, 0x1D
    ctx->pc = 0x35ecdcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)29 << 16));
    // 0x35ece0: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x35ece0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x35ece4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x35ece4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x35ece8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x35ece8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35ecec: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x35ececu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x35ecf0: 0x24712fe8  addiu       $s1, $v1, 0x2FE8
    ctx->pc = 0x35ecf0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 12264));
    // 0x35ecf4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x35ecf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x35ecf8: 0x24522c68  addiu       $s2, $v0, 0x2C68
    ctx->pc = 0x35ecf8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 11368));
    // 0x35ecfc: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x35ecfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x35ed00: 0x2413ffff  addiu       $s3, $zero, -0x1
    ctx->pc = 0x35ed00u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x35ed04: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x35ed04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x35ed08: 0x24942f68  addiu       $s4, $a0, 0x2F68
    ctx->pc = 0x35ed08u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 4), 12136));
    // 0x35ed0c: 0x0  nop
    ctx->pc = 0x35ed0cu;
    // NOP
label_35ed10:
    // 0x35ed10: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x35ed10u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x35ed14: 0xae530000  sw          $s3, 0x0($s2)
    ctx->pc = 0x35ed14u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 19));
    // 0x35ed18: 0xae400004  sw          $zero, 0x4($s2)
    ctx->pc = 0x35ed18u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 0));
    // 0x35ed1c: 0xae400008  sw          $zero, 0x8($s2)
    ctx->pc = 0x35ed1cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 0));
    // 0x35ed20: 0x2652000c  addiu       $s2, $s2, 0xC
    ctx->pc = 0x35ed20u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 12));
    // 0x35ed24: 0xc0d7820  jal         func_35E080
    ctx->pc = 0x35ED24u;
    SET_GPR_U32(ctx, 31, 0x35ED2Cu);
    ctx->pc = 0x35ED28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35ED24u;
    // 0x35ed28: 0xa6800000  sh          $zero, 0x0($s4) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 20), 0), (uint16_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35E080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35E080u, 0x35ED24u, 0x35ED2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35ED2Cu;
label_35ed2c:
    // 0x35ed2c: 0x2a030040  slti        $v1, $s0, 0x40
    ctx->pc = 0x35ed2cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)64) ? 1 : 0);
    // 0x35ed30: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x35ed30u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x35ed34: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x35ed34u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
    // 0x35ed38: 0x26940002  addiu       $s4, $s4, 0x2
    ctx->pc = 0x35ed38u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 2));
    // 0x35ed3c: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x35ed3cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
    // 0x35ed40: 0xae33000c  sw          $s3, 0xC($s1)
    ctx->pc = 0x35ed40u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 19));
    // 0x35ed44: 0xae330010  sw          $s3, 0x10($s1)
    ctx->pc = 0x35ed44u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 19));
    // 0x35ed48: 0x1460fff1  bnez        $v1, . + 4 + (-0xF << 2)
    ctx->pc = 0x35ED48u;
    {
        const bool branch_taken_0x35ed48 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x35ED4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35ED48u;
        // 0x35ed4c: 0x26310014  addiu       $s1, $s1, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35ed48) {
            ctx->pc = 0x35ED10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_35ed10;
        }
    }
    ctx->pc = 0x35ED50u;
    // 0x35ed50: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x35ed50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x35ed54: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x35ed54u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35ed58: 0xaf82c7e4  sw          $v0, -0x381C($gp)
    ctx->pc = 0x35ed58u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294952932), GPR_U32(ctx, 2));
    // 0x35ed5c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x35ed5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_35ed60:
    // 0x35ed60: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x35ed60u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x35ed64: 0xc0d87bc  jal         func_361EF0
    ctx->pc = 0x35ED64u;
    SET_GPR_U32(ctx, 31, 0x35ED6Cu);
    ctx->pc = 0x35ED68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35ED64u;
    // 0x35ed68: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x361EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x361EF0u, 0x35ED64u, 0x35ED6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35ED6Cu;
label_35ed6c:
    // 0x35ed6c: 0x2a030030  slti        $v1, $s0, 0x30
    ctx->pc = 0x35ed6cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)48) ? 1 : 0);
    // 0x35ed70: 0x1460fffb  bnez        $v1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x35ED70u;
    {
        const bool branch_taken_0x35ed70 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x35ED74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35ED70u;
        // 0x35ed74: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35ed70) {
            ctx->pc = 0x35ED60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_35ed60;
        }
    }
    ctx->pc = 0x35ED78u;
    // 0x35ed78: 0xc0d8568  jal         func_3615A0
    ctx->pc = 0x35ED78u;
    SET_GPR_U32(ctx, 31, 0x35ED80u);
    ctx->pc = 0x3615A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3615A0u, 0x35ED78u, 0x35ED80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35ED80u;
label_35ed80:
    // 0x35ed80: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x35ed80u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35ed84: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x35ed84u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35ed88: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x35ed88u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x35ed8c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x35ed8cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35ed90: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x35ed90u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x35ed94: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x35ed94u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x35ed98: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x35ed98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x35ed9c: 0x3e00008  jr          $ra
    ctx->pc = 0x35ED9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35EDA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35ED9Cu;
        // 0x35eda0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35ED9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35EDA4u;
    // 0x35eda4: 0x0  nop
    ctx->pc = 0x35eda4u;
    // NOP
label_35eda8:
    // 0x35eda8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x35eda8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x35edac: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x35edacu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35edb0: 0x3085ffff  andi        $a1, $a0, 0xFFFF
    ctx->pc = 0x35edb0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x35edb4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x35edb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x35edb8: 0x14c00007  bnez        $a2, . + 4 + (0x7 << 2)
    ctx->pc = 0x35EDB8u;
    {
        const bool branch_taken_0x35edb8 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x35EDBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35EDB8u;
        // 0x35edbc: 0x2ca20040  sltiu       $v0, $a1, 0x40 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)64) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x35edb8) {
            ctx->pc = 0x35EDD8u;
            goto label_35edd8;
        }
    }
    ctx->pc = 0x35EDC0u;
    // 0x35edc0: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x35edc0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x35edc4: 0xc0d8b06  jal         func_362C18
    ctx->pc = 0x35EDC4u;
    SET_GPR_U32(ctx, 31, 0x35EDCCu);
    ctx->pc = 0x35EDC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35EDC4u;
    // 0x35edc8: 0x24846548  addiu       $a0, $a0, 0x6548 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25928));
    ctx->in_delay_slot = false;
    ctx->pc = 0x362C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x362C18u, 0x35EDC4u, 0x35EDCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35EDCCu;
label_35edcc:
    // 0x35edcc: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x35edccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x35edd0: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x35EDD0u;
    {
        const bool branch_taken_0x35edd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35EDD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35EDD0u;
        // 0x35edd4: 0x34420024  ori         $v0, $v0, 0x24 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)36);
        ctx->in_delay_slot = false;
        if (branch_taken_0x35edd0) {
            ctx->pc = 0x35EE0Cu;
            goto label_35ee0c;
        }
    }
    ctx->pc = 0x35EDD8u;
label_35edd8:
    // 0x35edd8: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x35EDD8u;
    {
        const bool branch_taken_0x35edd8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x35edd8) {
            ctx->pc = 0x35EDDCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x35EDD8u;
            // 0x35eddc: 0x52040  sll         $a0, $a1, 1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x35EDF8u;
            goto label_35edf8;
        }
    }
    ctx->pc = 0x35EDE0u;
    // 0x35ede0: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x35ede0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x35ede4: 0xc0d8b06  jal         func_362C18
    ctx->pc = 0x35EDE4u;
    SET_GPR_U32(ctx, 31, 0x35EDECu);
    ctx->pc = 0x35EDE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35EDE4u;
    // 0x35ede8: 0x24846580  addiu       $a0, $a0, 0x6580 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25984));
    ctx->in_delay_slot = false;
    ctx->pc = 0x362C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x362C18u, 0x35EDE4u, 0x35EDECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35EDECu;
label_35edec:
    // 0x35edec: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x35edecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x35edf0: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x35EDF0u;
    {
        const bool branch_taken_0x35edf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35EDF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35EDF0u;
        // 0x35edf4: 0x3442001f  ori         $v0, $v0, 0x1F (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)31);
        ctx->in_delay_slot = false;
        if (branch_taken_0x35edf0) {
            ctx->pc = 0x35EE0Cu;
            goto label_35ee0c;
        }
    }
    ctx->pc = 0x35EDF8u;
label_35edf8:
    // 0x35edf8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x35edf8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35edfc: 0x3c03001d  lui         $v1, 0x1D
    ctx->pc = 0x35edfcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)29 << 16));
    // 0x35ee00: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x35ee00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x35ee04: 0x94632f68  lhu         $v1, 0x2F68($v1)
    ctx->pc = 0x35ee04u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 12136)));
    // 0x35ee08: 0xa4c30000  sh          $v1, 0x0($a2)
    ctx->pc = 0x35ee08u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 3));
label_35ee0c:
    // 0x35ee0c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x35ee0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35ee10: 0x3e00008  jr          $ra
    ctx->pc = 0x35EE10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35EE14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35EE10u;
        // 0x35ee14: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35EE10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35EE18u;
}
