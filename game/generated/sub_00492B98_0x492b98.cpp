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

// Function: sub_00492B98
// Address: 0x492b98 - 0x492e38
void sub_00492B98_0x492b98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00492B98_0x492b98");
#endif

    switch (ctx->pc) {
        case 0x492bd4u: goto label_492bd4;
        case 0x492be8u: goto label_492be8;
        case 0x492c30u: goto label_492c30;
        case 0x492c54u: goto label_492c54;
        case 0x492c7cu: goto label_492c7c;
        case 0x492c8cu: goto label_492c8c;
        case 0x492cd8u: goto label_492cd8;
        case 0x492d00u: goto label_492d00;
        case 0x492d10u: goto label_492d10;
        case 0x492d5cu: goto label_492d5c;
        case 0x492d74u: goto label_492d74;
        case 0x492de8u: goto label_492de8;
        case 0x492e04u: goto label_492e04;
        case 0x492e18u: goto label_492e18;
        default: break;
    }

    ctx->pc = 0x492b98u;

    // 0x492b98: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x492b98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x492b9c: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x492b9cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x492ba0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x492ba0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x492ba4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x492ba4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x492ba8: 0x3c110073  lui         $s1, 0x73
    ctx->pc = 0x492ba8u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)115 << 16));
    // 0x492bac: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x492bacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x492bb0: 0x2623d680  addiu       $v1, $s1, -0x2980
    ctx->pc = 0x492bb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 4294956672));
    // 0x492bb4: 0x84620032  lh          $v0, 0x32($v1)
    ctx->pc = 0x492bb4u;
    SET_GPR_S32(ctx, 2, (int16_t)FAST_READ16(0x72D6B2u));
    // 0x492bb8: 0x14400014  bnez        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x492BB8u;
    {
        const bool branch_taken_0x492bb8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x492BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x492BB8u;
        // 0x492bbc: 0x48403  sra         $s0, $a0, 16 (Delay Slot)
        SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x492bb8) {
            ctx->pc = 0x492C0Cu;
            goto label_492c0c;
        }
    }
    ctx->pc = 0x492BC0u;
    // 0x492bc0: 0x84620034  lh          $v0, 0x34($v1)
    ctx->pc = 0x492bc0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 52)));
    // 0x492bc4: 0x54400012  bnel        $v0, $zero, . + 4 + (0x12 << 2)
    ctx->pc = 0x492BC4u;
    {
        const bool branch_taken_0x492bc4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x492bc4) {
            ctx->pc = 0x492BC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x492BC4u;
            // 0x492bc8: 0xdfb10008  ld          $s1, 0x8($sp) (Delay Slot)
            SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x492C10u;
            goto label_492c10;
        }
    }
    ctx->pc = 0x492BCCu;
    // 0x492bcc: 0xc13e4e2  jal         func_4F9388
    ctx->pc = 0x492BCCu;
    SET_GPR_U32(ctx, 31, 0x492BD4u);
    ctx->pc = 0x492BD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x492BCCu;
    // 0x492bd0: 0x24040016  addiu       $a0, $zero, 0x16 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F9388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F9388u, 0x492BCCu, 0x492BD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x492BD4u;
label_492bd4:
    // 0x492bd4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x492bd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x492bd8: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x492BD8u;
    {
        const bool branch_taken_0x492bd8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x492BDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x492BD8u;
        // 0x492bdc: 0x24040017  addiu       $a0, $zero, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
        ctx->in_delay_slot = false;
        if (branch_taken_0x492bd8) {
            ctx->pc = 0x492C08u;
            goto label_492c08;
        }
    }
    ctx->pc = 0x492BE0u;
    // 0x492be0: 0xc13e4e2  jal         func_4F9388
    ctx->pc = 0x492BE0u;
    SET_GPR_U32(ctx, 31, 0x492BE8u);
    ctx->pc = 0x4F9388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F9388u, 0x492BE0u, 0x492BE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x492BE8u;
label_492be8:
    // 0x492be8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x492be8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x492bec: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x492BECu;
    {
        const bool branch_taken_0x492bec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x492BF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x492BECu;
        // 0x492bf0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x492bec) {
            ctx->pc = 0x492C08u;
            goto label_492c08;
        }
    }
    ctx->pc = 0x492BF4u;
    // 0x492bf4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x492bf4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x492bf8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x492bf8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x492bfc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x492bfcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x492c00: 0x8124a88  j           func_492A20
    ctx->pc = 0x492C00u;
    ctx->pc = 0x492C04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x492C00u;
    // 0x492c04: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x492A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x492A20u, 0x492C00u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x492C08u;
label_492c08:
    // 0x492c08: 0x2623d680  addiu       $v1, $s1, -0x2980
    ctx->pc = 0x492c08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 4294956672));
label_492c0c:
    // 0x492c0c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x492c0cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_492c10:
    // 0x492c10: 0x24630030  addiu       $v1, $v1, 0x30
    ctx->pc = 0x492c10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    // 0x492c14: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x492c14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x492c18: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x492c18u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x492c1c: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x492c1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x492c20: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x492c20u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x492c24: 0xa4620000  sh          $v0, 0x0($v1)
    ctx->pc = 0x492c24u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x492c28: 0x3e00008  jr          $ra
    ctx->pc = 0x492C28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x492C2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x492C28u;
        // 0x492c2c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x492C28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x492C30u;
label_492c30:
    // 0x492c30: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x492c30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x492c34: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x492c34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x492c38: 0x3c120073  lui         $s2, 0x73
    ctx->pc = 0x492c38u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)115 << 16));
    // 0x492c3c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x492c3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x492c40: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x492c40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x492c44: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x492c44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x492c48: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x492c48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x492c4c: 0xc12462c  jal         func_4918B0
    ctx->pc = 0x492C4Cu;
    SET_GPR_U32(ctx, 31, 0x492C54u);
    ctx->pc = 0x492C50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x492C4Cu;
    // 0x492c50: 0x2651d680  addiu       $s1, $s2, -0x2980 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 4294956672));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4918B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4918B0u, 0x492C4Cu, 0x492C54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x492C54u;
label_492c54:
    // 0x492c54: 0x26250032  addiu       $a1, $s1, 0x32
    ctx->pc = 0x492c54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 50));
    // 0x492c58: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x492c58u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x492c5c: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x492c5cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x492c60: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x492c60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x492c64: 0x21c00  sll         $v1, $v0, 16
    ctx->pc = 0x492c64u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x492c68: 0x461001b  bgez        $v1, . + 4 + (0x1B << 2)
    ctx->pc = 0x492C68u;
    {
        const bool branch_taken_0x492c68 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x492C6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x492C68u;
        // 0x492c6c: 0xa4a20000  sh          $v0, 0x0($a1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x492c68) {
            ctx->pc = 0x492CD8u;
            goto label_492cd8;
        }
    }
    ctx->pc = 0x492C70u;
    // 0x492c70: 0xa4a00000  sh          $zero, 0x0($a1)
    ctx->pc = 0x492c70u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x492c74: 0xc13e4e2  jal         func_4F9388
    ctx->pc = 0x492C74u;
    SET_GPR_U32(ctx, 31, 0x492C7Cu);
    ctx->pc = 0x492C78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x492C74u;
    // 0x492c78: 0x24040018  addiu       $a0, $zero, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F9388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F9388u, 0x492C74u, 0x492C7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x492C7Cu;
label_492c7c:
    // 0x492c7c: 0x24040019  addiu       $a0, $zero, 0x19
    ctx->pc = 0x492c7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x492c80: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x492c80u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x492c84: 0xc13e4e2  jal         func_4F9388
    ctx->pc = 0x492C84u;
    SET_GPR_U32(ctx, 31, 0x492C8Cu);
    ctx->pc = 0x492C88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x492C84u;
    // 0x492c88: 0x28403  sra         $s0, $v0, 16 (Delay Slot)
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 2), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F9388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F9388u, 0x492C84u, 0x492C8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x492C8Cu;
label_492c8c:
    // 0x492c8c: 0x2624002c  addiu       $a0, $s1, 0x2C
    ctx->pc = 0x492c8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 44));
    // 0x492c90: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x492c90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x492c94: 0x94830000  lhu         $v1, 0x0($a0)
    ctx->pc = 0x492c94u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x492c98: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x492c98u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x492c9c: 0x2031023  subu        $v0, $s0, $v1
    ctx->pc = 0x492c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x492ca0: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x492ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x492ca4: 0x28403  sra         $s0, $v0, 16
    ctx->pc = 0x492ca4u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 2), 16));
    // 0x492ca8: 0x5a00000c  blezl       $s0, . + 4 + (0xC << 2)
    ctx->pc = 0x492CA8u;
    {
        const bool branch_taken_0x492ca8 = (GPR_S32(ctx, 16) <= 0);
        if (branch_taken_0x492ca8) {
            ctx->pc = 0x492CACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x492CA8u;
            // 0x492cac: 0x2651d680  addiu       $s1, $s2, -0x2980 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 4294956672));
            ctx->in_delay_slot = false;
            ctx->pc = 0x492CDCu;
            goto label_492cdc;
        }
    }
    ctx->pc = 0x492CB0u;
    // 0x492cb0: 0x2031021  addu        $v0, $s0, $v1
    ctx->pc = 0x492cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x492cb4: 0x3205ffff  andi        $a1, $s0, 0xFFFF
    ctx->pc = 0x492cb4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
    // 0x492cb8: 0xa4820000  sh          $v0, 0x0($a0)
    ctx->pc = 0x492cb8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x492cbc: 0x26240022  addiu       $a0, $s1, 0x22
    ctx->pc = 0x492cbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 34));
    // 0x492cc0: 0x96630084  lhu         $v1, 0x84($s3)
    ctx->pc = 0x492cc0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 132)));
    // 0x492cc4: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x492cc4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x492cc8: 0xa32818  mult        $a1, $a1, $v1
    ctx->pc = 0x492cc8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x492ccc: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x492cccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x492cd0: 0xc123b1c  jal         func_48EC70
    ctx->pc = 0x492CD0u;
    SET_GPR_U32(ctx, 31, 0x492CD8u);
    ctx->pc = 0x492CD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x492CD0u;
    // 0x492cd4: 0xa4820000  sh          $v0, 0x0($a0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48EC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48EC70u, 0x492CD0u, 0x492CD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x492CD8u;
label_492cd8:
    // 0x492cd8: 0x2651d680  addiu       $s1, $s2, -0x2980
    ctx->pc = 0x492cd8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 4294956672));
label_492cdc:
    // 0x492cdc: 0x26250034  addiu       $a1, $s1, 0x34
    ctx->pc = 0x492cdcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 52));
    // 0x492ce0: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x492ce0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x492ce4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x492ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x492ce8: 0x21c00  sll         $v1, $v0, 16
    ctx->pc = 0x492ce8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x492cec: 0x461001b  bgez        $v1, . + 4 + (0x1B << 2)
    ctx->pc = 0x492CECu;
    {
        const bool branch_taken_0x492cec = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x492CF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x492CECu;
        // 0x492cf0: 0xa4a20000  sh          $v0, 0x0($a1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x492cec) {
            ctx->pc = 0x492D5Cu;
            goto label_492d5c;
        }
    }
    ctx->pc = 0x492CF4u;
    // 0x492cf4: 0xa4a00000  sh          $zero, 0x0($a1)
    ctx->pc = 0x492cf4u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x492cf8: 0xc13e4e2  jal         func_4F9388
    ctx->pc = 0x492CF8u;
    SET_GPR_U32(ctx, 31, 0x492D00u);
    ctx->pc = 0x492CFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x492CF8u;
    // 0x492cfc: 0x2404001a  addiu       $a0, $zero, 0x1A (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F9388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F9388u, 0x492CF8u, 0x492D00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x492D00u;
label_492d00:
    // 0x492d00: 0x2404001b  addiu       $a0, $zero, 0x1B
    ctx->pc = 0x492d00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x492d04: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x492d04u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x492d08: 0xc13e4e2  jal         func_4F9388
    ctx->pc = 0x492D08u;
    SET_GPR_U32(ctx, 31, 0x492D10u);
    ctx->pc = 0x492D0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x492D08u;
    // 0x492d0c: 0x28403  sra         $s0, $v0, 16 (Delay Slot)
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 2), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F9388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F9388u, 0x492D08u, 0x492D10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x492D10u;
label_492d10:
    // 0x492d10: 0x2624002e  addiu       $a0, $s1, 0x2E
    ctx->pc = 0x492d10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 46));
    // 0x492d14: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x492d14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x492d18: 0x94830000  lhu         $v1, 0x0($a0)
    ctx->pc = 0x492d18u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x492d1c: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x492d1cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x492d20: 0x2031023  subu        $v0, $s0, $v1
    ctx->pc = 0x492d20u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x492d24: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x492d24u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x492d28: 0x28403  sra         $s0, $v0, 16
    ctx->pc = 0x492d28u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 2), 16));
    // 0x492d2c: 0x1a00000c  blez        $s0, . + 4 + (0xC << 2)
    ctx->pc = 0x492D2Cu;
    {
        const bool branch_taken_0x492d2c = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x492D30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x492D2Cu;
        // 0x492d30: 0x2642d680  addiu       $v0, $s2, -0x2980 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4294956672));
        ctx->in_delay_slot = false;
        if (branch_taken_0x492d2c) {
            ctx->pc = 0x492D60u;
            goto label_492d60;
        }
    }
    ctx->pc = 0x492D34u;
    // 0x492d34: 0x2031021  addu        $v0, $s0, $v1
    ctx->pc = 0x492d34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x492d38: 0x3205ffff  andi        $a1, $s0, 0xFFFF
    ctx->pc = 0x492d38u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
    // 0x492d3c: 0xa4820000  sh          $v0, 0x0($a0)
    ctx->pc = 0x492d3cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x492d40: 0x26240022  addiu       $a0, $s1, 0x22
    ctx->pc = 0x492d40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 34));
    // 0x492d44: 0x96630084  lhu         $v1, 0x84($s3)
    ctx->pc = 0x492d44u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 132)));
    // 0x492d48: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x492d48u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x492d4c: 0xa32818  mult        $a1, $a1, $v1
    ctx->pc = 0x492d4cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x492d50: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x492d50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x492d54: 0xc123b1c  jal         func_48EC70
    ctx->pc = 0x492D54u;
    SET_GPR_U32(ctx, 31, 0x492D5Cu);
    ctx->pc = 0x492D58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x492D54u;
    // 0x492d58: 0xa4820000  sh          $v0, 0x0($a0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48EC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48EC70u, 0x492D54u, 0x492D5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x492D5Cu;
label_492d5c:
    // 0x492d5c: 0x2642d680  addiu       $v0, $s2, -0x2980
    ctx->pc = 0x492d5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4294956672));
label_492d60:
    // 0x492d60: 0x84500030  lh          $s0, 0x30($v0)
    ctx->pc = 0x492d60u;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x492d64: 0x5200000e  beql        $s0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x492D64u;
    {
        const bool branch_taken_0x492d64 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x492d64) {
            ctx->pc = 0x492D68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x492D64u;
            // 0x492d68: 0x3c020073  lui         $v0, 0x73 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x492DA0u;
            goto label_492da0;
        }
    }
    ctx->pc = 0x492D6Cu;
    // 0x492d6c: 0xc13e4e2  jal         func_4F9388
    ctx->pc = 0x492D6Cu;
    SET_GPR_U32(ctx, 31, 0x492D74u);
    ctx->pc = 0x492D70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x492D6Cu;
    // 0x492d70: 0x24040016  addiu       $a0, $zero, 0x16 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F9388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F9388u, 0x492D6Cu, 0x492D74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x492D74u;
label_492d74:
    // 0x492d74: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x492d74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x492d78: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x492D78u;
    {
        const bool branch_taken_0x492d78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x492D7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x492D78u;
        // 0x492d7c: 0x3c020073  lui         $v0, 0x73 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x492d78) {
            ctx->pc = 0x492DA0u;
            goto label_492da0;
        }
    }
    ctx->pc = 0x492D80u;
    // 0x492d80: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x492d80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x492d84: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x492d84u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x492d88: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x492d88u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x492d8c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x492d8cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x492d90: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x492d90u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x492d94: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x492d94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x492d98: 0x8124a88  j           func_492A20
    ctx->pc = 0x492D98u;
    ctx->pc = 0x492D9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x492D98u;
    // 0x492d9c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x492A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x492A20u, 0x492D98u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x492DA0u;
label_492da0:
    // 0x492da0: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x492da0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x492da4: 0x8443d668  lh          $v1, -0x2998($v0)
    ctx->pc = 0x492da4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294956648)));
    // 0x492da8: 0x1464000d  bne         $v1, $a0, . + 4 + (0xD << 2)
    ctx->pc = 0x492DA8u;
    {
        const bool branch_taken_0x492da8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x492DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x492DA8u;
        // 0x492dac: 0x24040007  addiu       $a0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x492da8) {
            ctx->pc = 0x492DE0u;
            goto label_492de0;
        }
    }
    ctx->pc = 0x492DB0u;
    // 0x492db0: 0x2644d680  addiu       $a0, $s2, -0x2980
    ctx->pc = 0x492db0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4294956672));
    // 0x492db4: 0x24050100  addiu       $a1, $zero, 0x100
    ctx->pc = 0x492db4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x492db8: 0x24860022  addiu       $a2, $a0, 0x22
    ctx->pc = 0x492db8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 34));
    // 0x492dbc: 0x84820024  lh          $v0, 0x24($a0)
    ctx->pc = 0x492dbcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x492dc0: 0x94c30000  lhu         $v1, 0x0($a2)
    ctx->pc = 0x492dc0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x492dc4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x492dc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x492dc8: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x492dc8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x492dcc: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x492dccu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x492dd0: 0x28430100  slti        $v1, $v0, 0x100
    ctx->pc = 0x492dd0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)256) ? 1 : 0);
    // 0x492dd4: 0x43280b  movn        $a1, $v0, $v1
    ctx->pc = 0x492dd4u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 2));
    // 0x492dd8: 0xa4c50000  sh          $a1, 0x0($a2)
    ctx->pc = 0x492dd8u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 5));
    // 0x492ddc: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x492ddcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_492de0:
    // 0x492de0: 0xc13e4ec  jal         func_4F93B0
    ctx->pc = 0x492DE0u;
    SET_GPR_U32(ctx, 31, 0x492DE8u);
    ctx->pc = 0x492DE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x492DE0u;
    // 0x492de4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F93B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F93B0u, 0x492DE0u, 0x492DE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x492DE8u;
label_492de8:
    // 0x492de8: 0x2643d680  addiu       $v1, $s2, -0x2980
    ctx->pc = 0x492de8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 4294956672));
    // 0x492dec: 0x84620022  lh          $v0, 0x22($v1)
    ctx->pc = 0x492decu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 34)));
    // 0x492df0: 0x28420009  slti        $v0, $v0, 0x9
    ctx->pc = 0x492df0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x492df4: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x492DF4u;
    {
        const bool branch_taken_0x492df4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x492DF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x492DF4u;
        // 0x492df8: 0x24040006  addiu       $a0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x492df4) {
            ctx->pc = 0x492E10u;
            goto label_492e10;
        }
    }
    ctx->pc = 0x492DFCu;
    // 0x492dfc: 0xc13e4ec  jal         func_4F93B0
    ctx->pc = 0x492DFCu;
    SET_GPR_U32(ctx, 31, 0x492E04u);
    ctx->pc = 0x492E00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x492DFCu;
    // 0x492e00: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F93B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F93B0u, 0x492DFCu, 0x492E04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x492E04u;
label_492e04:
    // 0x492e04: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x492E04u;
    {
        const bool branch_taken_0x492e04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x492E08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x492E04u;
        // 0x492e08: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x492e04) {
            ctx->pc = 0x492E1Cu;
            goto label_492e1c;
        }
    }
    ctx->pc = 0x492E0Cu;
    // 0x492e0c: 0x0  nop
    ctx->pc = 0x492e0cu;
    // NOP
label_492e10:
    // 0x492e10: 0xc13e4ec  jal         func_4F93B0
    ctx->pc = 0x492E10u;
    SET_GPR_U32(ctx, 31, 0x492E18u);
    ctx->pc = 0x492E14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x492E10u;
    // 0x492e14: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F93B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F93B0u, 0x492E10u, 0x492E18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x492E18u;
label_492e18:
    // 0x492e18: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x492e18u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_492e1c:
    // 0x492e1c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x492e1cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x492e20: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x492e20u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x492e24: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x492e24u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x492e28: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x492e28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x492e2c: 0x3e00008  jr          $ra
    ctx->pc = 0x492E2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x492E30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x492E2Cu;
        // 0x492e30: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x492E2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x492E34u;
    // 0x492e34: 0x0  nop
    ctx->pc = 0x492e34u;
    // NOP
    ctx->pc = 0x492e38u;
}
