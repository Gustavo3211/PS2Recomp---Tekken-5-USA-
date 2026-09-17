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

// Function: sub_002EBFC0
// Address: 0x2ebfc0 - 0x2ec370
void sub_002EBFC0_0x2ebfc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002EBFC0_0x2ebfc0");
#endif

    switch (ctx->pc) {
        case 0x2ebff4u: goto label_2ebff4;
        case 0x2ec018u: goto label_2ec018;
        case 0x2ec038u: goto label_2ec038;
        case 0x2ec080u: goto label_2ec080;
        case 0x2ec094u: goto label_2ec094;
        case 0x2ec0b0u: goto label_2ec0b0;
        case 0x2ec0c4u: goto label_2ec0c4;
        case 0x2ec0e0u: goto label_2ec0e0;
        case 0x2ec0f4u: goto label_2ec0f4;
        case 0x2ec110u: goto label_2ec110;
        case 0x2ec124u: goto label_2ec124;
        case 0x2ec140u: goto label_2ec140;
        case 0x2ec154u: goto label_2ec154;
        case 0x2ec170u: goto label_2ec170;
        case 0x2ec184u: goto label_2ec184;
        case 0x2ec1a0u: goto label_2ec1a0;
        case 0x2ec1b4u: goto label_2ec1b4;
        case 0x2ec1d0u: goto label_2ec1d0;
        case 0x2ec1e4u: goto label_2ec1e4;
        case 0x2ec200u: goto label_2ec200;
        case 0x2ec218u: goto label_2ec218;
        case 0x2ec234u: goto label_2ec234;
        case 0x2ec24cu: goto label_2ec24c;
        case 0x2ec268u: goto label_2ec268;
        case 0x2ec27cu: goto label_2ec27c;
        case 0x2ec298u: goto label_2ec298;
        case 0x2ec2acu: goto label_2ec2ac;
        case 0x2ec2d0u: goto label_2ec2d0;
        case 0x2ec2ecu: goto label_2ec2ec;
        case 0x2ec2f4u: goto label_2ec2f4;
        case 0x2ec350u: goto label_2ec350;
        default: break;
    }

    ctx->pc = 0x2ebfc0u;

    // 0x2ebfc0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2ebfc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2ebfc4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2ebfc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2ebfc8: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2ebfc8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ebfcc: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x2ebfccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ebfd0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2ebfd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2ebfd4: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2ebfd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x2ebfd8: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x2ebfd8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ebfdc: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x2ebfdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x2ebfe0: 0x100a02d  daddu       $s4, $t0, $zero
    ctx->pc = 0x2ebfe0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ebfe4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2ebfe4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2ebfe8: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x2ebfe8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x2ebfec: 0xc0bbd40  jal         func_2EF500
    ctx->pc = 0x2EBFECu;
    SET_GPR_U32(ctx, 31, 0x2EBFF4u);
    ctx->pc = 0x2EBFF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EBFECu;
    // 0x2ebff0: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EF500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EF500u, 0x2EBFECu, 0x2EBFF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EBFF4u;
label_2ebff4:
    // 0x2ebff4: 0x3c030046  lui         $v1, 0x46
    ctx->pc = 0x2ebff4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
    // 0x2ebff8: 0x2404001e  addiu       $a0, $zero, 0x1E
    ctx->pc = 0x2ebff8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x2ebffc: 0x26300140  addiu       $s0, $s1, 0x140
    ctx->pc = 0x2ebffcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 320));
    // 0x2ec000: 0x2463f660  addiu       $v1, $v1, -0x9A0
    ctx->pc = 0x2ec000u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294964832));
    // 0x2ec004: 0xae230008  sw          $v1, 0x8($s1)
    ctx->pc = 0x2ec004u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 3));
    // 0x2ec008: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2ec008u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ec00c: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x2ec00cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x2ec010: 0xc092472  jal         func_2491C8
    ctx->pc = 0x2EC010u;
    SET_GPR_U32(ctx, 31, 0x2EC018u);
    ctx->pc = 0x2EC014u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EC010u;
    // 0x2ec014: 0xae000004  sw          $zero, 0x4($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2491C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2491C8u, 0x2EC010u, 0x2EC018u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EC018u;
label_2ec018:
    // 0x2ec018: 0xae120000  sw          $s2, 0x0($s0)
    ctx->pc = 0x2ec018u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 18));
    // 0x2ec01c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2ec01cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ec020: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x2ec020u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2ec024: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x2ec024u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x2ec028: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x2ec028u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x2ec02c: 0x8f83c200  lw          $v1, -0x3E00($gp)
    ctx->pc = 0x2ec02cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294951424)));
    // 0x2ec030: 0xc0bbd88  jal         func_2EF620
    ctx->pc = 0x2EC030u;
    SET_GPR_U32(ctx, 31, 0x2EC038u);
    ctx->pc = 0x2EC034u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EC030u;
    // 0x2ec034: 0xae230104  sw          $v1, 0x104($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 260), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EF620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EF620u, 0x2EC030u, 0x2EC038u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EC038u;
label_2ec038:
    // 0x2ec038: 0x26640050  addiu       $a0, $s3, 0x50
    ctx->pc = 0x2ec038u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 80));
    // 0x2ec03c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2ec03cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2ec040: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2EC040u;
    {
        const bool branch_taken_0x2ec040 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EC044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC040u;
        // 0x2ec044: 0x262700b8  addiu       $a3, $s1, 0xB8 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 184));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ec040) {
            ctx->pc = 0x2EC05Cu;
            goto label_2ec05c;
        }
    }
    ctx->pc = 0x2EC048u;
    // 0x2ec048: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x2ec048u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x2ec04c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2ec04cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ec050: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x2ec050u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2ec054: 0x50620005  beql        $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2EC054u;
    {
        const bool branch_taken_0x2ec054 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2ec054) {
            ctx->pc = 0x2EC058u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EC054u;
            // 0x2ec058: 0xace60000  sw          $a2, 0x0($a3) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 6));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EC06Cu;
            goto label_2ec06c;
        }
    }
    ctx->pc = 0x2EC05Cu;
label_2ec05c:
    // 0x2ec05c: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x2ec05cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x2ec060: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2ec060u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ec064: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x2ec064u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x2ec068: 0xace60000  sw          $a2, 0x0($a3)
    ctx->pc = 0x2ec068u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 6));
label_2ec06c:
    // 0x2ec06c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2ec06cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ec070: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2ec070u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ec074: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x2ec074u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x2ec078: 0xc0b7a62  jal         func_2DE988
    ctx->pc = 0x2EC078u;
    SET_GPR_U32(ctx, 31, 0x2EC080u);
    ctx->pc = 0x2EC07Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EC078u;
    // 0x2ec07c: 0xace20004  sw          $v0, 0x4($a3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DE988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DE988u, 0x2EC078u, 0x2EC080u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EC080u;
label_2ec080:
    // 0x2ec080: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2ec080u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ec084: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2ec084u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ec088: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2ec088u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ec08c: 0xc0bae20  jal         func_2EB880
    ctx->pc = 0x2EC08Cu;
    SET_GPR_U32(ctx, 31, 0x2EC094u);
    ctx->pc = 0x2EC090u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EC08Cu;
    // 0x2ec090: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EB880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EB880u, 0x2EC08Cu, 0x2EC094u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EC094u;
label_2ec094:
    // 0x2ec094: 0x26230058  addiu       $v1, $s1, 0x58
    ctx->pc = 0x2ec094u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 88));
    // 0x2ec098: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2ec098u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ec09c: 0xac700000  sw          $s0, 0x0($v1)
    ctx->pc = 0x2ec09cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 16));
    // 0x2ec0a0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2ec0a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ec0a4: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x2ec0a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2ec0a8: 0xc0b7a62  jal         func_2DE988
    ctx->pc = 0x2EC0A8u;
    SET_GPR_U32(ctx, 31, 0x2EC0B0u);
    ctx->pc = 0x2EC0ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EC0A8u;
    // 0x2ec0ac: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DE988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DE988u, 0x2EC0A8u, 0x2EC0B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EC0B0u;
label_2ec0b0:
    // 0x2ec0b0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2ec0b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ec0b4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2ec0b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ec0b8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2ec0b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ec0bc: 0xc0bae20  jal         func_2EB880
    ctx->pc = 0x2EC0BCu;
    SET_GPR_U32(ctx, 31, 0x2EC0C4u);
    ctx->pc = 0x2EC0C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EC0BCu;
    // 0x2ec0c0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EB880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EB880u, 0x2EC0BCu, 0x2EC0C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EC0C4u;
label_2ec0c4:
    // 0x2ec0c4: 0x26230060  addiu       $v1, $s1, 0x60
    ctx->pc = 0x2ec0c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 96));
    // 0x2ec0c8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2ec0c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ec0cc: 0xac700000  sw          $s0, 0x0($v1)
    ctx->pc = 0x2ec0ccu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 16));
    // 0x2ec0d0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2ec0d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ec0d4: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x2ec0d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2ec0d8: 0xc0b7a62  jal         func_2DE988
    ctx->pc = 0x2EC0D8u;
    SET_GPR_U32(ctx, 31, 0x2EC0E0u);
    ctx->pc = 0x2EC0DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EC0D8u;
    // 0x2ec0dc: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DE988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DE988u, 0x2EC0D8u, 0x2EC0E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EC0E0u;
label_2ec0e0:
    // 0x2ec0e0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2ec0e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ec0e4: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x2ec0e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2ec0e8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2ec0e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ec0ec: 0xc0bae20  jal         func_2EB880
    ctx->pc = 0x2EC0ECu;
    SET_GPR_U32(ctx, 31, 0x2EC0F4u);
    ctx->pc = 0x2EC0F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EC0ECu;
    // 0x2ec0f0: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EB880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EB880u, 0x2EC0ECu, 0x2EC0F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EC0F4u;
label_2ec0f4:
    // 0x2ec0f4: 0x26230068  addiu       $v1, $s1, 0x68
    ctx->pc = 0x2ec0f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 104));
    // 0x2ec0f8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2ec0f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ec0fc: 0xac700000  sw          $s0, 0x0($v1)
    ctx->pc = 0x2ec0fcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 16));
    // 0x2ec100: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2ec100u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ec104: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x2ec104u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2ec108: 0xc0b7a62  jal         func_2DE988
    ctx->pc = 0x2EC108u;
    SET_GPR_U32(ctx, 31, 0x2EC110u);
    ctx->pc = 0x2EC10Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EC108u;
    // 0x2ec10c: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DE988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DE988u, 0x2EC108u, 0x2EC110u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EC110u;
label_2ec110:
    // 0x2ec110: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2ec110u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ec114: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x2ec114u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2ec118: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2ec118u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ec11c: 0xc0bae40  jal         func_2EB900
    ctx->pc = 0x2EC11Cu;
    SET_GPR_U32(ctx, 31, 0x2EC124u);
    ctx->pc = 0x2EC120u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EC11Cu;
    // 0x2ec120: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EB900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EB900u, 0x2EC11Cu, 0x2EC124u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EC124u;
label_2ec124:
    // 0x2ec124: 0x26230070  addiu       $v1, $s1, 0x70
    ctx->pc = 0x2ec124u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 112));
    // 0x2ec128: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2ec128u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ec12c: 0xac700000  sw          $s0, 0x0($v1)
    ctx->pc = 0x2ec12cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 16));
    // 0x2ec130: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2ec130u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ec134: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x2ec134u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2ec138: 0xc0b7a62  jal         func_2DE988
    ctx->pc = 0x2EC138u;
    SET_GPR_U32(ctx, 31, 0x2EC140u);
    ctx->pc = 0x2EC13Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EC138u;
    // 0x2ec13c: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DE988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DE988u, 0x2EC138u, 0x2EC140u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EC140u;
label_2ec140:
    // 0x2ec140: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2ec140u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ec144: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x2ec144u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2ec148: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2ec148u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ec14c: 0xc0bae20  jal         func_2EB880
    ctx->pc = 0x2EC14Cu;
    SET_GPR_U32(ctx, 31, 0x2EC154u);
    ctx->pc = 0x2EC150u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EC14Cu;
    // 0x2ec150: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EB880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EB880u, 0x2EC14Cu, 0x2EC154u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EC154u;
label_2ec154:
    // 0x2ec154: 0x26230078  addiu       $v1, $s1, 0x78
    ctx->pc = 0x2ec154u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
    // 0x2ec158: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2ec158u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ec15c: 0xac700000  sw          $s0, 0x0($v1)
    ctx->pc = 0x2ec15cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 16));
    // 0x2ec160: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2ec160u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ec164: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x2ec164u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2ec168: 0xc0b7a62  jal         func_2DE988
    ctx->pc = 0x2EC168u;
    SET_GPR_U32(ctx, 31, 0x2EC170u);
    ctx->pc = 0x2EC16Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EC168u;
    // 0x2ec16c: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DE988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DE988u, 0x2EC168u, 0x2EC170u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EC170u;
label_2ec170:
    // 0x2ec170: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2ec170u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ec174: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x2ec174u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2ec178: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2ec178u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ec17c: 0xc0bae20  jal         func_2EB880
    ctx->pc = 0x2EC17Cu;
    SET_GPR_U32(ctx, 31, 0x2EC184u);
    ctx->pc = 0x2EC180u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EC17Cu;
    // 0x2ec180: 0x24060006  addiu       $a2, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EB880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EB880u, 0x2EC17Cu, 0x2EC184u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EC184u;
label_2ec184:
    // 0x2ec184: 0x26230080  addiu       $v1, $s1, 0x80
    ctx->pc = 0x2ec184u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 128));
    // 0x2ec188: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2ec188u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ec18c: 0xac700000  sw          $s0, 0x0($v1)
    ctx->pc = 0x2ec18cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 16));
    // 0x2ec190: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2ec190u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ec194: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x2ec194u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2ec198: 0xc0b7a62  jal         func_2DE988
    ctx->pc = 0x2EC198u;
    SET_GPR_U32(ctx, 31, 0x2EC1A0u);
    ctx->pc = 0x2EC19Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EC198u;
    // 0x2ec19c: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DE988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DE988u, 0x2EC198u, 0x2EC1A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EC1A0u;
label_2ec1a0:
    // 0x2ec1a0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2ec1a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ec1a4: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x2ec1a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2ec1a8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2ec1a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ec1ac: 0xc0bae20  jal         func_2EB880
    ctx->pc = 0x2EC1ACu;
    SET_GPR_U32(ctx, 31, 0x2EC1B4u);
    ctx->pc = 0x2EC1B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EC1ACu;
    // 0x2ec1b0: 0x24060007  addiu       $a2, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EB880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EB880u, 0x2EC1ACu, 0x2EC1B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EC1B4u;
label_2ec1b4:
    // 0x2ec1b4: 0x26230088  addiu       $v1, $s1, 0x88
    ctx->pc = 0x2ec1b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 136));
    // 0x2ec1b8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2ec1b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ec1bc: 0xac700000  sw          $s0, 0x0($v1)
    ctx->pc = 0x2ec1bcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 16));
    // 0x2ec1c0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2ec1c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ec1c4: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x2ec1c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2ec1c8: 0xc0b7a62  jal         func_2DE988
    ctx->pc = 0x2EC1C8u;
    SET_GPR_U32(ctx, 31, 0x2EC1D0u);
    ctx->pc = 0x2EC1CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EC1C8u;
    // 0x2ec1cc: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DE988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DE988u, 0x2EC1C8u, 0x2EC1D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EC1D0u;
label_2ec1d0:
    // 0x2ec1d0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2ec1d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ec1d4: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x2ec1d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2ec1d8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2ec1d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ec1dc: 0xc0bae62  jal         func_2EB988
    ctx->pc = 0x2EC1DCu;
    SET_GPR_U32(ctx, 31, 0x2EC1E4u);
    ctx->pc = 0x2EC1E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EC1DCu;
    // 0x2ec1e0: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EB988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EB988u, 0x2EC1DCu, 0x2EC1E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EC1E4u;
label_2ec1e4:
    // 0x2ec1e4: 0x26230090  addiu       $v1, $s1, 0x90
    ctx->pc = 0x2ec1e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 144));
    // 0x2ec1e8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2ec1e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ec1ec: 0xac700000  sw          $s0, 0x0($v1)
    ctx->pc = 0x2ec1ecu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 16));
    // 0x2ec1f0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2ec1f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ec1f4: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x2ec1f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2ec1f8: 0xc0b7a62  jal         func_2DE988
    ctx->pc = 0x2EC1F8u;
    SET_GPR_U32(ctx, 31, 0x2EC200u);
    ctx->pc = 0x2EC1FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EC1F8u;
    // 0x2ec1fc: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DE988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DE988u, 0x2EC1F8u, 0x2EC200u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EC200u;
label_2ec200:
    // 0x2ec200: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2ec200u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ec204: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x2ec204u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2ec208: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2ec208u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ec20c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x2ec20cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ec210: 0xc0bae8c  jal         func_2EBA30
    ctx->pc = 0x2EC210u;
    SET_GPR_U32(ctx, 31, 0x2EC218u);
    ctx->pc = 0x2EC214u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EC210u;
    // 0x2ec214: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EBA30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EBA30u, 0x2EC210u, 0x2EC218u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EC218u;
label_2ec218:
    // 0x2ec218: 0x26230098  addiu       $v1, $s1, 0x98
    ctx->pc = 0x2ec218u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 152));
    // 0x2ec21c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2ec21cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ec220: 0xac700000  sw          $s0, 0x0($v1)
    ctx->pc = 0x2ec220u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 16));
    // 0x2ec224: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2ec224u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ec228: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x2ec228u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2ec22c: 0xc0b7a62  jal         func_2DE988
    ctx->pc = 0x2EC22Cu;
    SET_GPR_U32(ctx, 31, 0x2EC234u);
    ctx->pc = 0x2EC230u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EC22Cu;
    // 0x2ec230: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DE988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DE988u, 0x2EC22Cu, 0x2EC234u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EC234u;
label_2ec234:
    // 0x2ec234: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2ec234u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ec238: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x2ec238u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ec23c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2ec23cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ec240: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x2ec240u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x2ec244: 0xc0baec4  jal         func_2EBB10
    ctx->pc = 0x2EC244u;
    SET_GPR_U32(ctx, 31, 0x2EC24Cu);
    ctx->pc = 0x2EC248u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EC244u;
    // 0x2ec248: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EBB10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EBB10u, 0x2EC244u, 0x2EC24Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EC24Cu;
label_2ec24c:
    // 0x2ec24c: 0x262300a0  addiu       $v1, $s1, 0xA0
    ctx->pc = 0x2ec24cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 160));
    // 0x2ec250: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2ec250u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ec254: 0xac700000  sw          $s0, 0x0($v1)
    ctx->pc = 0x2ec254u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 16));
    // 0x2ec258: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2ec258u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ec25c: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x2ec25cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2ec260: 0xc0b7a62  jal         func_2DE988
    ctx->pc = 0x2EC260u;
    SET_GPR_U32(ctx, 31, 0x2EC268u);
    ctx->pc = 0x2EC264u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EC260u;
    // 0x2ec264: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DE988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DE988u, 0x2EC260u, 0x2EC268u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EC268u;
label_2ec268:
    // 0x2ec268: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2ec268u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ec26c: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x2ec26cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2ec270: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2ec270u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ec274: 0xc0baf5e  jal         func_2EBD78
    ctx->pc = 0x2EC274u;
    SET_GPR_U32(ctx, 31, 0x2EC27Cu);
    ctx->pc = 0x2EC278u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EC274u;
    // 0x2ec278: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EBD78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EBD78u, 0x2EC274u, 0x2EC27Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EC27Cu;
label_2ec27c:
    // 0x2ec27c: 0x262300a8  addiu       $v1, $s1, 0xA8
    ctx->pc = 0x2ec27cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 168));
    // 0x2ec280: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2ec280u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ec284: 0xac700000  sw          $s0, 0x0($v1)
    ctx->pc = 0x2ec284u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 16));
    // 0x2ec288: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2ec288u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ec28c: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x2ec28cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2ec290: 0xc0b7a62  jal         func_2DE988
    ctx->pc = 0x2EC290u;
    SET_GPR_U32(ctx, 31, 0x2EC298u);
    ctx->pc = 0x2EC294u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EC290u;
    // 0x2ec294: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DE988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DE988u, 0x2EC290u, 0x2EC298u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EC298u;
label_2ec298:
    // 0x2ec298: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2ec298u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ec29c: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x2ec29cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ec2a0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2ec2a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ec2a4: 0xc0bafc8  jal         func_2EBF20
    ctx->pc = 0x2EC2A4u;
    SET_GPR_U32(ctx, 31, 0x2EC2ACu);
    ctx->pc = 0x2EC2A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EC2A4u;
    // 0x2ec2a8: 0x2405000b  addiu       $a1, $zero, 0xB (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EBF20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EBF20u, 0x2EC2A4u, 0x2EC2ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EC2ACu;
label_2ec2ac:
    // 0x2ec2ac: 0x262300b0  addiu       $v1, $s1, 0xB0
    ctx->pc = 0x2ec2acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 176));
    // 0x2ec2b0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2ec2b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ec2b4: 0xac700000  sw          $s0, 0x0($v1)
    ctx->pc = 0x2ec2b4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 16));
    // 0x2ec2b8: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x2ec2b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2ec2bc: 0x24060860  addiu       $a2, $zero, 0x860
    ctx->pc = 0x2ec2bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2144));
    // 0x2ec2c0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2ec2c0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ec2c4: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x2ec2c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2ec2c8: 0xc0bbd8a  jal         func_2EF628
    ctx->pc = 0x2EC2C8u;
    SET_GPR_U32(ctx, 31, 0x2EC2D0u);
    ctx->pc = 0x2EC2CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EC2C8u;
    // 0x2ec2cc: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EF628u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EF628u, 0x2EC2C8u, 0x2EC2D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EC2D0u;
label_2ec2d0:
    // 0x2ec2d0: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x2ec2d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x2ec2d4: 0x3c04003e  lui         $a0, 0x3E
    ctx->pc = 0x2ec2d4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)62 << 16));
    // 0x2ec2d8: 0x24420798  addiu       $v0, $v0, 0x798
    ctx->pc = 0x2ec2d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1944));
    // 0x2ec2dc: 0x248437e0  addiu       $a0, $a0, 0x37E0
    ctx->pc = 0x2ec2dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 14304));
    // 0x2ec2e0: 0xae220038  sw          $v0, 0x38($s1)
    ctx->pc = 0x2ec2e0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 56), GPR_U32(ctx, 2));
    // 0x2ec2e4: 0xc0b7d04  jal         func_2DF410
    ctx->pc = 0x2EC2E4u;
    SET_GPR_U32(ctx, 31, 0x2EC2ECu);
    ctx->pc = 0x2EC2E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EC2E4u;
    // 0x2ec2e8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DF410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DF410u, 0x2EC2E4u, 0x2EC2ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EC2ECu;
label_2ec2ec:
    // 0x2ec2ec: 0xc0b77ce  jal         func_2DDF38
    ctx->pc = 0x2EC2ECu;
    SET_GPR_U32(ctx, 31, 0x2EC2F4u);
    ctx->pc = 0x2EC2F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EC2ECu;
    // 0x2ec2f0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DDF38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DDF38u, 0x2EC2ECu, 0x2EC2F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EC2F4u;
label_2ec2f4:
    // 0x2ec2f4: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2ec2f4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ec2f8: 0x2c620007  sltiu       $v0, $v1, 0x7
    ctx->pc = 0x2ec2f8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
    // 0x2ec2fc: 0x50400014  beql        $v0, $zero, . + 4 + (0x14 << 2)
    ctx->pc = 0x2EC2FCu;
    {
        const bool branch_taken_0x2ec2fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ec2fc) {
            ctx->pc = 0x2EC300u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EC2FCu;
            // 0x2ec300: 0xae340128  sw          $s4, 0x128($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 296), GPR_U32(ctx, 20));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EC350u;
            goto label_2ec350;
        }
    }
    ctx->pc = 0x2EC304u;
    // 0x2ec304: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2ec304u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2ec308: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x2ec308u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x2ec30c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2ec30cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2ec310: 0x8c6307b0  lw          $v1, 0x7B0($v1)
    ctx->pc = 0x2ec310u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1968)));
    // 0x2ec314: 0x600008  jr          $v1
    ctx->pc = 0x2EC314u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2EC320u: goto label_2ec320;
            case 0x2EC328u: goto label_2ec328;
            case 0x2EC330u: goto label_2ec330;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EC314u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2EC31Cu;
    // 0x2ec31c: 0x0  nop
    ctx->pc = 0x2ec31cu;
    // NOP
label_2ec320:
    // 0x2ec320: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2EC320u;
    {
        const bool branch_taken_0x2ec320 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EC324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC320u;
        // 0x2ec324: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ec320) {
            ctx->pc = 0x2EC32Cu;
            goto label_2ec32c;
        }
    }
    ctx->pc = 0x2EC328u;
label_2ec328:
    // 0x2ec328: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x2ec328u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_2ec32c:
    // 0x2ec32c: 0xae220104  sw          $v0, 0x104($s1)
    ctx->pc = 0x2ec32cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 260), GPR_U32(ctx, 2));
label_2ec330:
    // 0x2ec330: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2EC330u;
    {
        const bool branch_taken_0x2ec330 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EC334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC330u;
        // 0x2ec334: 0xae340128  sw          $s4, 0x128($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 296), GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ec330) {
            ctx->pc = 0x2EC350u;
            goto label_2ec350;
        }
    }
    ctx->pc = 0x2EC338u;
    // 0x2ec338: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x2ec338u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x2ec33c: 0x3c040015  lui         $a0, 0x15
    ctx->pc = 0x2ec33cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)21 << 16));
    // 0x2ec340: 0x2442d620  addiu       $v0, $v0, -0x29E0
    ctx->pc = 0x2ec340u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956576));
    // 0x2ec344: 0x2484062c  addiu       $a0, $a0, 0x62C
    ctx->pc = 0x2ec344u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1580));
    // 0x2ec348: 0xc048b90  jal         func_122E40
    ctx->pc = 0x2EC348u;
    SET_GPR_U32(ctx, 31, 0x2EC350u);
    ctx->pc = 0x2EC34Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EC348u;
    // 0x2ec34c: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122E40u, 0x2EC348u, 0x2EC350u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EC350u;
label_2ec350:
    // 0x2ec350: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2ec350u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ec354: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2ec354u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2ec358: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2ec358u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ec35c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2ec35cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2ec360: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x2ec360u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2ec364: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x2ec364u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2ec368: 0x3e00008  jr          $ra
    ctx->pc = 0x2EC368u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EC36Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC368u;
        // 0x2ec36c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EC368u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2EC370u;
}
