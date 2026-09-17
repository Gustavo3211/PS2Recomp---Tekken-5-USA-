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

// Function: sub_002FB8A8
// Address: 0x2fb8a8 - 0x2fb9b0
void sub_002FB8A8_0x2fb8a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FB8A8_0x2fb8a8");
#endif

    switch (ctx->pc) {
        case 0x2fb8d8u: goto label_2fb8d8;
        case 0x2fb910u: goto label_2fb910;
        case 0x2fb92cu: goto label_2fb92c;
        case 0x2fb934u: goto label_2fb934;
        case 0x2fb950u: goto label_2fb950;
        case 0x2fb968u: goto label_2fb968;
        default: break;
    }

    ctx->pc = 0x2fb8a8u;

    // 0x2fb8a8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2fb8a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2fb8ac: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2fb8acu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fb8b0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2fb8b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2fb8b4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2fb8b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fb8b8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2fb8b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2fb8bc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2fb8bcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fb8c0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2fb8c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2fb8c4: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2fb8c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x2fb8c8: 0x12000032  beqz        $s0, . + 4 + (0x32 << 2)
    ctx->pc = 0x2FB8C8u;
    {
        const bool branch_taken_0x2fb8c8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FB8CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB8C8u;
        // 0x2fb8cc: 0xffbf0020  sd          $ra, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fb8c8) {
            ctx->pc = 0x2FB994u;
            goto label_2fb994;
        }
    }
    ctx->pc = 0x2FB8D0u;
    // 0x2fb8d0: 0xc0befa6  jal         func_2FBE98
    ctx->pc = 0x2FB8D0u;
    SET_GPR_U32(ctx, 31, 0x2FB8D8u);
    ctx->pc = 0x2FB8D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FB8D0u;
    // 0x2fb8d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FBE98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBE98u, 0x2FB8D0u, 0x2FB8D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FB8D8u;
label_2fb8d8:
    // 0x2fb8d8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2fb8d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2fb8dc: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2fb8dcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fb8e0: 0x1643002c  bne         $s2, $v1, . + 4 + (0x2C << 2)
    ctx->pc = 0x2FB8E0u;
    {
        const bool branch_taken_0x2fb8e0 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 3));
        ctx->pc = 0x2FB8E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB8E0u;
        // 0x2fb8e4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fb8e0) {
            ctx->pc = 0x2FB994u;
            goto label_2fb994;
        }
    }
    ctx->pc = 0x2FB8E8u;
    // 0x2fb8e8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2fb8e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2fb8ec: 0xae300008  sw          $s0, 0x8($s1)
    ctx->pc = 0x2fb8ecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 16));
    // 0x2fb8f0: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x2fb8f0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x2fb8f4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2fb8f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fb8f8: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x2fb8f8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x2fb8fc: 0x92030008  lbu         $v1, 0x8($s0)
    ctx->pc = 0x2fb8fcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x2fb900: 0xa223000c  sb          $v1, 0xC($s1)
    ctx->pc = 0x2fb900u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 12), (uint8_t)GPR_U32(ctx, 3));
    // 0x2fb904: 0x92020009  lbu         $v0, 0x9($s0)
    ctx->pc = 0x2fb904u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 9)));
    // 0x2fb908: 0xc0bef9e  jal         func_2FBE78
    ctx->pc = 0x2FB908u;
    SET_GPR_U32(ctx, 31, 0x2FB910u);
    ctx->pc = 0x2FB90Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FB908u;
    // 0x2fb90c: 0xa222000d  sb          $v0, 0xD($s1) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 17), 13), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FBE78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBE78u, 0x2FB908u, 0x2FB910u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FB910u;
label_2fb910:
    // 0x2fb910: 0x14520020  bne         $v0, $s2, . + 4 + (0x20 << 2)
    ctx->pc = 0x2FB910u;
    {
        const bool branch_taken_0x2fb910 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        ctx->pc = 0x2FB914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB910u;
        // 0x2fb914: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fb910) {
            ctx->pc = 0x2FB994u;
            goto label_2fb994;
        }
    }
    ctx->pc = 0x2FB918u;
    // 0x2fb918: 0x9602000a  lhu         $v0, 0xA($s0)
    ctx->pc = 0x2fb918u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 10)));
    // 0x2fb91c: 0x3053ffff  andi        $s3, $v0, 0xFFFF
    ctx->pc = 0x2fb91cu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2fb920: 0xa622000e  sh          $v0, 0xE($s1)
    ctx->pc = 0x2fb920u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 14), (uint16_t)GPR_U32(ctx, 2));
    // 0x2fb924: 0xc0be9f0  jal         func_2FA7C0
    ctx->pc = 0x2FB924u;
    SET_GPR_U32(ctx, 31, 0x2FB92Cu);
    ctx->pc = 0x2FB928u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FB924u;
    // 0x2fb928: 0x132180  sll         $a0, $s3, 6 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 19), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FA7C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FA7C0u, 0x2FB924u, 0x2FB92Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FB92Cu;
label_2fb92c:
    // 0x2fb92c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2FB92Cu;
    {
        const bool branch_taken_0x2fb92c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FB930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB92Cu;
        // 0x2fb930: 0xae220010  sw          $v0, 0x10($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fb92c) {
            ctx->pc = 0x2FB940u;
            goto label_2fb940;
        }
    }
    ctx->pc = 0x2FB934u;
label_2fb934:
    // 0x2fb934: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x2FB934u;
    {
        const bool branch_taken_0x2fb934 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FB938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB934u;
        // 0x2fb938: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fb934) {
            ctx->pc = 0x2FB994u;
            goto label_2fb994;
        }
    }
    ctx->pc = 0x2FB93Cu;
    // 0x2fb93c: 0x0  nop
    ctx->pc = 0x2fb93cu;
    // NOP
label_2fb940:
    // 0x2fb940: 0x26100020  addiu       $s0, $s0, 0x20
    ctx->pc = 0x2fb940u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x2fb944: 0x12600012  beqz        $s3, . + 4 + (0x12 << 2)
    ctx->pc = 0x2FB944u;
    {
        const bool branch_taken_0x2fb944 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FB948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB944u;
        // 0x2fb948: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fb944) {
            ctx->pc = 0x2FB990u;
            goto label_2fb990;
        }
    }
    ctx->pc = 0x2FB94Cu;
    // 0x2fb94c: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x2fb94cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2fb950:
    // 0x2fb950: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x2fb950u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x2fb954: 0x122180  sll         $a0, $s2, 6
    ctx->pc = 0x2fb954u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 18), 6));
    // 0x2fb958: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2fb958u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fb95c: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x2fb95cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x2fb960: 0xc0bea72  jal         func_2FA9C8
    ctx->pc = 0x2FB960u;
    SET_GPR_U32(ctx, 31, 0x2FB968u);
    ctx->pc = 0x2FB964u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FB960u;
    // 0x2fb964: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FA9C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FA9C8u, 0x2FB960u, 0x2FB968u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FB968u;
label_2fb968:
    // 0x2fb968: 0x1453fff2  bne         $v0, $s3, . + 4 + (-0xE << 2)
    ctx->pc = 0x2FB968u;
    {
        const bool branch_taken_0x2fb968 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 19));
        ctx->pc = 0x2FB96Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB968u;
        // 0x2fb96c: 0x26050018  addiu       $a1, $s0, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fb968) {
            ctx->pc = 0x2FB934u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2fb934;
        }
    }
    ctx->pc = 0x2FB970u;
    // 0x2fb970: 0x96040002  lhu         $a0, 0x2($s0)
    ctx->pc = 0x2fb970u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x2fb974: 0x9623000e  lhu         $v1, 0xE($s1)
    ctx->pc = 0x2fb974u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 14)));
    // 0x2fb978: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x2fb978u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2fb97c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2fb97cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2fb980: 0x243182a  slt         $v1, $s2, $v1
    ctx->pc = 0x2fb980u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2fb984: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x2fb984u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x2fb988: 0x1460fff1  bnez        $v1, . + 4 + (-0xF << 2)
    ctx->pc = 0x2FB988u;
    {
        const bool branch_taken_0x2fb988 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FB98Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB988u;
        // 0x2fb98c: 0xa28021  addu        $s0, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fb988) {
            ctx->pc = 0x2FB950u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2fb950;
        }
    }
    ctx->pc = 0x2FB990u;
label_2fb990:
    // 0x2fb990: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2fb990u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2fb994:
    // 0x2fb994: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2fb994u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2fb998: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2fb998u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2fb99c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2fb99cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2fb9a0: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2fb9a0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2fb9a4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2fb9a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2fb9a8: 0x3e00008  jr          $ra
    ctx->pc = 0x2FB9A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FB9ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB9A8u;
        // 0x2fb9ac: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FB9A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FB9B0u;
}
