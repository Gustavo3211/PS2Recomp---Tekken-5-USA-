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

// Function: sub_00279B30
// Address: 0x279b30 - 0x27a138
void sub_00279B30_0x279b30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00279B30_0x279b30");
#endif

    switch (ctx->pc) {
        case 0x279ba4u: goto label_279ba4;
        case 0x279bb4u: goto label_279bb4;
        case 0x279bdcu: goto label_279bdc;
        case 0x279be4u: goto label_279be4;
        case 0x279bf4u: goto label_279bf4;
        case 0x279c34u: goto label_279c34;
        case 0x279c68u: goto label_279c68;
        case 0x279ca0u: goto label_279ca0;
        case 0x279cb0u: goto label_279cb0;
        case 0x279cd8u: goto label_279cd8;
        case 0x279cfcu: goto label_279cfc;
        case 0x279d10u: goto label_279d10;
        case 0x279d20u: goto label_279d20;
        case 0x279d38u: goto label_279d38;
        case 0x279e18u: goto label_279e18;
        case 0x279e30u: goto label_279e30;
        case 0x279f48u: goto label_279f48;
        case 0x279f84u: goto label_279f84;
        case 0x279fa4u: goto label_279fa4;
        case 0x279fc4u: goto label_279fc4;
        case 0x279fd8u: goto label_279fd8;
        case 0x279fe0u: goto label_279fe0;
        case 0x27a04cu: goto label_27a04c;
        case 0x27a05cu: goto label_27a05c;
        case 0x27a080u: goto label_27a080;
        case 0x27a088u: goto label_27a088;
        case 0x27a09cu: goto label_27a09c;
        case 0x27a0acu: goto label_27a0ac;
        case 0x27a0ecu: goto label_27a0ec;
        case 0x27a108u: goto label_27a108;
        case 0x27a11cu: goto label_27a11c;
        default: break;
    }

    ctx->pc = 0x279b30u;

    // 0x279b30: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x279b30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x279b34: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x279b34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x279b38: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x279b38u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x279b3c: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x279b3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x279b40: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x279b40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x279b44: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x279b44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x279b48: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x279b48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x279b4c: 0x920301bc  lbu         $v1, 0x1BC($s0)
    ctx->pc = 0x279b4cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 444)));
    // 0x279b50: 0x2c620005  sltiu       $v0, $v1, 0x5
    ctx->pc = 0x279b50u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x279b54: 0x1040015b  beqz        $v0, . + 4 + (0x15B << 2)
    ctx->pc = 0x279B54u;
    {
        const bool branch_taken_0x279b54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x279B58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279B54u;
        // 0x279b58: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x279b54) {
            ctx->pc = 0x27A0C4u;
            goto label_27a0c4;
        }
    }
    ctx->pc = 0x279B5Cu;
    // 0x279b5c: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x279b5cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x279b60: 0x3c030047  lui         $v1, 0x47
    ctx->pc = 0x279b60u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)71 << 16));
    // 0x279b64: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x279b64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x279b68: 0x8c633ce0  lw          $v1, 0x3CE0($v1)
    ctx->pc = 0x279b68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 15584)));
    // 0x279b6c: 0x600008  jr          $v1
    ctx->pc = 0x279B6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x279B78u: goto label_279b78;
            case 0x279D08u: goto label_279d08;
            case 0x27A090u: goto label_27a090;
            case 0x27A0B8u: goto label_27a0b8;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x279B6Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x279B74u;
    // 0x279b74: 0x0  nop
    ctx->pc = 0x279b74u;
    // NOP
label_279b78:
    // 0x279b78: 0x8f83ca70  lw          $v1, -0x3590($gp)
    ctx->pc = 0x279b78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294953584)));
    // 0x279b7c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x279b7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x279b80: 0x14620029  bne         $v1, $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x279B80u;
    {
        const bool branch_taken_0x279b80 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x279B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279B80u;
        // 0x279b84: 0x9611003c  lhu         $s1, 0x3C($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 17, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 60)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x279b80) {
            ctx->pc = 0x279C28u;
            goto label_279c28;
        }
    }
    ctx->pc = 0x279B88u;
    // 0x279b88: 0x3c12003b  lui         $s2, 0x3B
    ctx->pc = 0x279b88u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)59 << 16));
    // 0x279b8c: 0x8e4283c0  lw          $v0, -0x7C40($s2)
    ctx->pc = 0x279b8cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3A83C0u));
    // 0x279b90: 0x38420007  xori        $v0, $v0, 0x7
    ctx->pc = 0x279b90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)7);
    // 0x279b94: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x279B94u;
    {
        const bool branch_taken_0x279b94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x279b94) {
            ctx->pc = 0x279BACu;
            goto label_279bac;
        }
    }
    ctx->pc = 0x279B9Cu;
    // 0x279b9c: 0xc07e588  jal         func_1F9620
    ctx->pc = 0x279B9Cu;
    SET_GPR_U32(ctx, 31, 0x279BA4u);
    ctx->pc = 0x1F9620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F9620u, 0x279B9Cu, 0x279BA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x279BA4u;
label_279ba4:
    // 0x279ba4: 0x14400021  bnez        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x279BA4u;
    {
        const bool branch_taken_0x279ba4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x279ba4) {
            ctx->pc = 0x279C2Cu;
            goto label_279c2c;
        }
    }
    ctx->pc = 0x279BACu;
label_279bac:
    // 0x279bac: 0xc09ddd8  jal         func_277760
    ctx->pc = 0x279BACu;
    SET_GPR_U32(ctx, 31, 0x279BB4u);
    ctx->pc = 0x279BB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x279BACu;
    // 0x279bb0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277760u, 0x279BACu, 0x279BB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x279BB4u;
label_279bb4:
    // 0x279bb4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x279bb4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x279bb8: 0x86020012  lh          $v0, 0x12($s0)
    ctx->pc = 0x279bb8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 18)));
    // 0x279bbc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x279bbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x279bc0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x279bc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x279bc4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x279bc4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x279bc8: 0x3c05003b  lui         $a1, 0x3B
    ctx->pc = 0x279bc8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)59 << 16));
    // 0x279bcc: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x279bccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x279bd0: 0x8ca588d0  lw          $a1, -0x7730($a1)
    ctx->pc = 0x279bd0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294936784)));
    // 0x279bd4: 0xc08c182  jal         func_230608
    ctx->pc = 0x279BD4u;
    SET_GPR_U32(ctx, 31, 0x279BDCu);
    ctx->pc = 0x279BD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x279BD4u;
    // 0x279bd8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x230608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230608u, 0x279BD4u, 0x279BDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x279BDCu;
label_279bdc:
    // 0x279bdc: 0xc07e580  jal         func_1F9600
    ctx->pc = 0x279BDCu;
    SET_GPR_U32(ctx, 31, 0x279BE4u);
    ctx->pc = 0x1F9600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F9600u, 0x279BDCu, 0x279BE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x279BE4u;
label_279be4:
    // 0x279be4: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x279BE4u;
    {
        const bool branch_taken_0x279be4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x279be4) {
            ctx->pc = 0x279BE8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x279BE4u;
            // 0x279be8: 0x92250003  lbu         $a1, 0x3($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 3)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x279C00u;
            goto label_279c00;
        }
    }
    ctx->pc = 0x279BECu;
    // 0x279bec: 0xc07e612  jal         func_1F9848
    ctx->pc = 0x279BECu;
    SET_GPR_U32(ctx, 31, 0x279BF4u);
    ctx->pc = 0x1F9848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F9848u, 0x279BECu, 0x279BF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x279BF4u;
label_279bf4:
    // 0x279bf4: 0x50400100  beql        $v0, $zero, . + 4 + (0x100 << 2)
    ctx->pc = 0x279BF4u;
    {
        const bool branch_taken_0x279bf4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x279bf4) {
            ctx->pc = 0x279BF8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x279BF4u;
            // 0x279bf8: 0xa20001be  sb          $zero, 0x1BE($s0) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 16), 446), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x279FF8u;
            goto label_279ff8;
        }
    }
    ctx->pc = 0x279BFCu;
    // 0x279bfc: 0x92250003  lbu         $a1, 0x3($s1)
    ctx->pc = 0x279bfcu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 3)));
label_279c00:
    // 0x279c00: 0x30a20080  andi        $v0, $a1, 0x80
    ctx->pc = 0x279c00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)128);
    // 0x279c04: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x279C04u;
    {
        const bool branch_taken_0x279c04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x279C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279C04u;
        // 0x279c08: 0x3c027fff  lui         $v0, 0x7FFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x279c04) {
            ctx->pc = 0x279C18u;
            goto label_279c18;
        }
    }
    ctx->pc = 0x279C0Cu;
    // 0x279c0c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x279c0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x279c10: 0xae0206b4  sw          $v0, 0x6B4($s0)
    ctx->pc = 0x279c10u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1716), GPR_U32(ctx, 2));
    // 0x279c14: 0x92250003  lbu         $a1, 0x3($s1)
    ctx->pc = 0x279c14u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 3)));
label_279c18:
    // 0x279c18: 0x30b3007f  andi        $s3, $a1, 0x7F
    ctx->pc = 0x279c18u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)127);
    // 0x279c1c: 0x100000fb  b           . + 4 + (0xFB << 2)
    ctx->pc = 0x279C1Cu;
    {
        const bool branch_taken_0x279c1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x279C20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279C1Cu;
        // 0x279c20: 0xa21301be  sb          $s3, 0x1BE($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 446), (uint8_t)GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x279c1c) {
            ctx->pc = 0x27A00Cu;
            goto label_27a00c;
        }
    }
    ctx->pc = 0x279C24u;
    // 0x279c24: 0x0  nop
    ctx->pc = 0x279c24u;
    // NOP
label_279c28:
    // 0x279c28: 0x3c12003b  lui         $s2, 0x3B
    ctx->pc = 0x279c28u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)59 << 16));
label_279c2c:
    // 0x279c2c: 0xc07e286  jal         func_1F8A18
    ctx->pc = 0x279C2Cu;
    SET_GPR_U32(ctx, 31, 0x279C34u);
    ctx->pc = 0x1F8A18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F8A18u, 0x279C2Cu, 0x279C34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x279C34u;
label_279c34:
    // 0x279c34: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x279C34u;
    {
        const bool branch_taken_0x279c34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x279C38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279C34u;
        // 0x279c38: 0x3c027fff  lui         $v0, 0x7FFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x279c34) {
            ctx->pc = 0x279C44u;
            goto label_279c44;
        }
    }
    ctx->pc = 0x279C3Cu;
    // 0x279c3c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x279c3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x279c40: 0xae0206b4  sw          $v0, 0x6B4($s0)
    ctx->pc = 0x279c40u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1716), GPR_U32(ctx, 2));
label_279c44:
    // 0x279c44: 0x86020012  lh          $v0, 0x12($s0)
    ctx->pc = 0x279c44u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 18)));
    // 0x279c48: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x279c48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x279c4c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x279c4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x279c50: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x279c50u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x279c54: 0x3c05003b  lui         $a1, 0x3B
    ctx->pc = 0x279c54u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)59 << 16));
    // 0x279c58: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x279c58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x279c5c: 0x8ca588d0  lw          $a1, -0x7730($a1)
    ctx->pc = 0x279c5cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294936784)));
    // 0x279c60: 0xc08c182  jal         func_230608
    ctx->pc = 0x279C60u;
    SET_GPR_U32(ctx, 31, 0x279C68u);
    ctx->pc = 0x279C64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x279C60u;
    // 0x279c64: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x230608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230608u, 0x279C60u, 0x279C68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x279C68u;
label_279c68:
    // 0x279c68: 0x921301be  lbu         $s3, 0x1BE($s0)
    ctx->pc = 0x279c68u;
    SET_GPR_ZE32(ctx, 19, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 446)));
    // 0x279c6c: 0x112080  sll         $a0, $s1, 2
    ctx->pc = 0x279c6cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x279c70: 0x8e0306b4  lw          $v1, 0x6B4($s0)
    ctx->pc = 0x279c70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1716)));
    // 0x279c74: 0x9c1021  addu        $v0, $a0, $gp
    ctx->pc = 0x279c74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 28)));
    // 0x279c78: 0x8c42a868  lw          $v0, -0x5798($v0)
    ctx->pc = 0x279c78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294944872)));
    // 0x279c7c: 0x431826  xor         $v1, $v0, $v1
    ctx->pc = 0x279c7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
    // 0x279c80: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x279c80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x279c84: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x279c84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x279c88: 0x8e4283c0  lw          $v0, -0x7C40($s2)
    ctx->pc = 0x279c88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294935488)));
    // 0x279c8c: 0x38420007  xori        $v0, $v0, 0x7
    ctx->pc = 0x279c8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)7);
    // 0x279c90: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x279C90u;
    {
        const bool branch_taken_0x279c90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x279C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279C90u;
        // 0x279c94: 0xafa30004  sw          $v1, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x279c90) {
            ctx->pc = 0x279CC0u;
            goto label_279cc0;
        }
    }
    ctx->pc = 0x279C98u;
    // 0x279c98: 0xc07ebf4  jal         func_1FAFD0
    ctx->pc = 0x279C98u;
    SET_GPR_U32(ctx, 31, 0x279CA0u);
    ctx->pc = 0x1FAFD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FAFD0u, 0x279C98u, 0x279CA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x279CA0u;
label_279ca0:
    // 0x279ca0: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x279CA0u;
    {
        const bool branch_taken_0x279ca0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x279CA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279CA0u;
        // 0x279ca4: 0x8f83ca70  lw          $v1, -0x3590($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294953584)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x279ca0) {
            ctx->pc = 0x279CC4u;
            goto label_279cc4;
        }
    }
    ctx->pc = 0x279CA8u;
    // 0x279ca8: 0xc07ebf8  jal         func_1FAFE0
    ctx->pc = 0x279CA8u;
    SET_GPR_U32(ctx, 31, 0x279CB0u);
    ctx->pc = 0x279CACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x279CA8u;
    // 0x279cac: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FAFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FAFE0u, 0x279CA8u, 0x279CB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x279CB0u;
label_279cb0:
    // 0x279cb0: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x279CB0u;
    {
        const bool branch_taken_0x279cb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x279CB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279CB0u;
        // 0x279cb4: 0x8f83ca70  lw          $v1, -0x3590($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294953584)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x279cb0) {
            ctx->pc = 0x279CC4u;
            goto label_279cc4;
        }
    }
    ctx->pc = 0x279CB8u;
    // 0x279cb8: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x279cb8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x279cbc: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x279cbcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_279cc0:
    // 0x279cc0: 0x8f83ca70  lw          $v1, -0x3590($gp)
    ctx->pc = 0x279cc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294953584)));
label_279cc4:
    // 0x279cc4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x279cc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x279cc8: 0x546200ff  bnel        $v1, $v0, . + 4 + (0xFF << 2)
    ctx->pc = 0x279CC8u;
    {
        const bool branch_taken_0x279cc8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x279cc8) {
            ctx->pc = 0x279CCCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x279CC8u;
            // 0x279ccc: 0x8e02069c  lw          $v0, 0x69C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1692)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27A0C8u;
            goto label_27a0c8;
        }
    }
    ctx->pc = 0x279CD0u;
    // 0x279cd0: 0xc07e286  jal         func_1F8A18
    ctx->pc = 0x279CD0u;
    SET_GPR_U32(ctx, 31, 0x279CD8u);
    ctx->pc = 0x1F8A18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F8A18u, 0x279CD0u, 0x279CD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x279CD8u;
label_279cd8:
    // 0x279cd8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x279CD8u;
    {
        const bool branch_taken_0x279cd8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x279CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279CD8u;
        // 0x279cdc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x279cd8) {
            ctx->pc = 0x279CF0u;
            goto label_279cf0;
        }
    }
    ctx->pc = 0x279CE0u;
    // 0x279ce0: 0x920501be  lbu         $a1, 0x1BE($s0)
    ctx->pc = 0x279ce0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 446)));
    // 0x279ce4: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x279ce4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x279ce8: 0x100000e3  b           . + 4 + (0xE3 << 2)
    ctx->pc = 0x279CE8u;
    {
        const bool branch_taken_0x279ce8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x279CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279CE8u;
        // 0x279cec: 0x34a50080  ori         $a1, $a1, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)128);
        ctx->in_delay_slot = false;
        if (branch_taken_0x279ce8) {
            ctx->pc = 0x27A078u;
            goto label_27a078;
        }
    }
    ctx->pc = 0x279CF0u;
label_279cf0:
    // 0x279cf0: 0x920501be  lbu         $a1, 0x1BE($s0)
    ctx->pc = 0x279cf0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 446)));
    // 0x279cf4: 0xc09dda2  jal         func_277688
    ctx->pc = 0x279CF4u;
    SET_GPR_U32(ctx, 31, 0x279CFCu);
    ctx->pc = 0x279CF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x279CF4u;
    // 0x279cf8: 0x8fa60000  lw          $a2, 0x0($sp) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277688u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277688u, 0x279CF4u, 0x279CFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x279CFCu;
label_279cfc:
    // 0x279cfc: 0x100000e0  b           . + 4 + (0xE0 << 2)
    ctx->pc = 0x279CFCu;
    {
        const bool branch_taken_0x279cfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x279cfc) {
            ctx->pc = 0x27A080u;
            goto label_27a080;
        }
    }
    ctx->pc = 0x279D04u;
    // 0x279d04: 0x0  nop
    ctx->pc = 0x279d04u;
    // NOP
label_279d08:
    // 0x279d08: 0xc07e580  jal         func_1F9600
    ctx->pc = 0x279D08u;
    SET_GPR_U32(ctx, 31, 0x279D10u);
    ctx->pc = 0x1F9600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F9600u, 0x279D08u, 0x279D10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x279D10u;
label_279d10:
    // 0x279d10: 0x1040003b  beqz        $v0, . + 4 + (0x3B << 2)
    ctx->pc = 0x279D10u;
    {
        const bool branch_taken_0x279d10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x279D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279D10u;
        // 0x279d14: 0x3c12003b  lui         $s2, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x279d10) {
            ctx->pc = 0x279E00u;
            goto label_279e00;
        }
    }
    ctx->pc = 0x279D18u;
    // 0x279d18: 0xc07e588  jal         func_1F9620
    ctx->pc = 0x279D18u;
    SET_GPR_U32(ctx, 31, 0x279D20u);
    ctx->pc = 0x1F9620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F9620u, 0x279D18u, 0x279D20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x279D20u;
label_279d20:
    // 0x279d20: 0x54400038  bnel        $v0, $zero, . + 4 + (0x38 << 2)
    ctx->pc = 0x279D20u;
    {
        const bool branch_taken_0x279d20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x279d20) {
            ctx->pc = 0x279D24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x279D20u;
            // 0x279d24: 0x8e4283c0  lw          $v0, -0x7C40($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294935488)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x279E04u;
            goto label_279e04;
        }
    }
    ctx->pc = 0x279D28u;
    // 0x279d28: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x279d28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x279d2c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x279d2cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x279d30: 0xc07e59c  jal         func_1F9670
    ctx->pc = 0x279D30u;
    SET_GPR_U32(ctx, 31, 0x279D38u);
    ctx->pc = 0x279D34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x279D30u;
    // 0x279d34: 0xafa00000  sw          $zero, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F9670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F9670u, 0x279D30u, 0x279D38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x279D38u;
label_279d38:
    // 0x279d38: 0x2443ffff  addiu       $v1, $v0, -0x1
    ctx->pc = 0x279d38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x279d3c: 0x2c62000d  sltiu       $v0, $v1, 0xD
    ctx->pc = 0x279d3cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)13) ? 1 : 0);
    // 0x279d40: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x279D40u;
    {
        const bool branch_taken_0x279d40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x279D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279D40u;
        // 0x279d44: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x279d40) {
            ctx->pc = 0x279D64u;
            goto label_279d64;
        }
    }
    ctx->pc = 0x279D48u;
    // 0x279d48: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x279d48u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x279d4c: 0x3c030047  lui         $v1, 0x47
    ctx->pc = 0x279d4cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)71 << 16));
    // 0x279d50: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x279d50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x279d54: 0x8c633d00  lw          $v1, 0x3D00($v1)
    ctx->pc = 0x279d54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 15616)));
    // 0x279d58: 0x600008  jr          $v1
    ctx->pc = 0x279D58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x279D60u: goto label_279d60;
            case 0x279D70u: goto label_279d70;
            case 0x279D80u: goto label_279d80;
            case 0x279D90u: goto label_279d90;
            case 0x279DA0u: goto label_279da0;
            case 0x279DB0u: goto label_279db0;
            case 0x279DC0u: goto label_279dc0;
            case 0x279DD0u: goto label_279dd0;
            case 0x279DE0u: goto label_279de0;
            case 0x279DF0u: goto label_279df0;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x279D58u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x279D60u;
label_279d60:
    // 0x279d60: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x279d60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_279d64:
    // 0x279d64: 0x1000008c  b           . + 4 + (0x8C << 2)
    ctx->pc = 0x279D64u;
    {
        const bool branch_taken_0x279d64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x279D68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279D64u;
        // 0x279d68: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x279d64) {
            ctx->pc = 0x279F98u;
            goto label_279f98;
        }
    }
    ctx->pc = 0x279D6Cu;
    // 0x279d6c: 0x0  nop
    ctx->pc = 0x279d6cu;
    // NOP
label_279d70:
    // 0x279d70: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x279d70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x279d74: 0x10000088  b           . + 4 + (0x88 << 2)
    ctx->pc = 0x279D74u;
    {
        const bool branch_taken_0x279d74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x279D78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279D74u;
        // 0x279d78: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x279d74) {
            ctx->pc = 0x279F98u;
            goto label_279f98;
        }
    }
    ctx->pc = 0x279D7Cu;
    // 0x279d7c: 0x0  nop
    ctx->pc = 0x279d7cu;
    // NOP
label_279d80:
    // 0x279d80: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x279d80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x279d84: 0x10000084  b           . + 4 + (0x84 << 2)
    ctx->pc = 0x279D84u;
    {
        const bool branch_taken_0x279d84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x279D88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279D84u;
        // 0x279d88: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x279d84) {
            ctx->pc = 0x279F98u;
            goto label_279f98;
        }
    }
    ctx->pc = 0x279D8Cu;
    // 0x279d8c: 0x0  nop
    ctx->pc = 0x279d8cu;
    // NOP
label_279d90:
    // 0x279d90: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x279d90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x279d94: 0x10000080  b           . + 4 + (0x80 << 2)
    ctx->pc = 0x279D94u;
    {
        const bool branch_taken_0x279d94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x279D98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279D94u;
        // 0x279d98: 0x24050016  addiu       $a1, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x279d94) {
            ctx->pc = 0x279F98u;
            goto label_279f98;
        }
    }
    ctx->pc = 0x279D9Cu;
    // 0x279d9c: 0x0  nop
    ctx->pc = 0x279d9cu;
    // NOP
label_279da0:
    // 0x279da0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x279da0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x279da4: 0x1000007c  b           . + 4 + (0x7C << 2)
    ctx->pc = 0x279DA4u;
    {
        const bool branch_taken_0x279da4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x279DA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279DA4u;
        // 0x279da8: 0x24050016  addiu       $a1, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x279da4) {
            ctx->pc = 0x279F98u;
            goto label_279f98;
        }
    }
    ctx->pc = 0x279DACu;
    // 0x279dac: 0x0  nop
    ctx->pc = 0x279dacu;
    // NOP
label_279db0:
    // 0x279db0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x279db0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x279db4: 0x10000078  b           . + 4 + (0x78 << 2)
    ctx->pc = 0x279DB4u;
    {
        const bool branch_taken_0x279db4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x279DB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279DB4u;
        // 0x279db8: 0x24050017  addiu       $a1, $zero, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
        ctx->in_delay_slot = false;
        if (branch_taken_0x279db4) {
            ctx->pc = 0x279F98u;
            goto label_279f98;
        }
    }
    ctx->pc = 0x279DBCu;
    // 0x279dbc: 0x0  nop
    ctx->pc = 0x279dbcu;
    // NOP
label_279dc0:
    // 0x279dc0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x279dc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x279dc4: 0x10000074  b           . + 4 + (0x74 << 2)
    ctx->pc = 0x279DC4u;
    {
        const bool branch_taken_0x279dc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x279DC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279DC4u;
        // 0x279dc8: 0x24050018  addiu       $a1, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x279dc4) {
            ctx->pc = 0x279F98u;
            goto label_279f98;
        }
    }
    ctx->pc = 0x279DCCu;
    // 0x279dcc: 0x0  nop
    ctx->pc = 0x279dccu;
    // NOP
label_279dd0:
    // 0x279dd0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x279dd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x279dd4: 0x10000070  b           . + 4 + (0x70 << 2)
    ctx->pc = 0x279DD4u;
    {
        const bool branch_taken_0x279dd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x279DD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279DD4u;
        // 0x279dd8: 0x24050019  addiu       $a1, $zero, 0x19 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
        ctx->in_delay_slot = false;
        if (branch_taken_0x279dd4) {
            ctx->pc = 0x279F98u;
            goto label_279f98;
        }
    }
    ctx->pc = 0x279DDCu;
    // 0x279ddc: 0x0  nop
    ctx->pc = 0x279ddcu;
    // NOP
label_279de0:
    // 0x279de0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x279de0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x279de4: 0x1000006c  b           . + 4 + (0x6C << 2)
    ctx->pc = 0x279DE4u;
    {
        const bool branch_taken_0x279de4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x279DE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279DE4u;
        // 0x279de8: 0x2405001a  addiu       $a1, $zero, 0x1A (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
        ctx->in_delay_slot = false;
        if (branch_taken_0x279de4) {
            ctx->pc = 0x279F98u;
            goto label_279f98;
        }
    }
    ctx->pc = 0x279DECu;
    // 0x279dec: 0x0  nop
    ctx->pc = 0x279decu;
    // NOP
label_279df0:
    // 0x279df0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x279df0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x279df4: 0x10000068  b           . + 4 + (0x68 << 2)
    ctx->pc = 0x279DF4u;
    {
        const bool branch_taken_0x279df4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x279DF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279DF4u;
        // 0x279df8: 0x2405001b  addiu       $a1, $zero, 0x1B (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
        ctx->in_delay_slot = false;
        if (branch_taken_0x279df4) {
            ctx->pc = 0x279F98u;
            goto label_279f98;
        }
    }
    ctx->pc = 0x279DFCu;
    // 0x279dfc: 0x0  nop
    ctx->pc = 0x279dfcu;
    // NOP
label_279e00:
    // 0x279e00: 0x8e4283c0  lw          $v0, -0x7C40($s2)
    ctx->pc = 0x279e00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294935488)));
label_279e04:
    // 0x279e04: 0x38420007  xori        $v0, $v0, 0x7
    ctx->pc = 0x279e04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)7);
    // 0x279e08: 0x54400069  bnel        $v0, $zero, . + 4 + (0x69 << 2)
    ctx->pc = 0x279E08u;
    {
        const bool branch_taken_0x279e08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x279e08) {
            ctx->pc = 0x279E0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x279E08u;
            // 0x279e0c: 0x8f83ca70  lw          $v1, -0x3590($gp) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294953584)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x279FB0u;
            goto label_279fb0;
        }
    }
    ctx->pc = 0x279E10u;
    // 0x279e10: 0xc07e588  jal         func_1F9620
    ctx->pc = 0x279E10u;
    SET_GPR_U32(ctx, 31, 0x279E18u);
    ctx->pc = 0x1F9620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F9620u, 0x279E10u, 0x279E18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x279E18u;
label_279e18:
    // 0x279e18: 0x54400065  bnel        $v0, $zero, . + 4 + (0x65 << 2)
    ctx->pc = 0x279E18u;
    {
        const bool branch_taken_0x279e18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x279e18) {
            ctx->pc = 0x279E1Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x279E18u;
            // 0x279e1c: 0x8f83ca70  lw          $v1, -0x3590($gp) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294953584)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x279FB0u;
            goto label_279fb0;
        }
    }
    ctx->pc = 0x279E20u;
    // 0x279e20: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x279e20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x279e24: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x279e24u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x279e28: 0xc07ebba  jal         func_1FAEE8
    ctx->pc = 0x279E28u;
    SET_GPR_U32(ctx, 31, 0x279E30u);
    ctx->pc = 0x279E2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x279E28u;
    // 0x279e2c: 0xafa00000  sw          $zero, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FAEE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FAEE8u, 0x279E28u, 0x279E30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x279E30u;
label_279e30:
    // 0x279e30: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x279e30u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x279e34: 0x2c62000f  sltiu       $v0, $v1, 0xF
    ctx->pc = 0x279e34u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)15) ? 1 : 0);
    // 0x279e38: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x279E38u;
    {
        const bool branch_taken_0x279e38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x279e38) {
            ctx->pc = 0x279E3Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x279E38u;
            // 0x279e3c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x279E58u;
            goto label_279e58;
        }
    }
    ctx->pc = 0x279E40u;
    // 0x279e40: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x279e40u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x279e44: 0x3c030047  lui         $v1, 0x47
    ctx->pc = 0x279e44u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)71 << 16));
    // 0x279e48: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x279e48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x279e4c: 0x8c633d40  lw          $v1, 0x3D40($v1)
    ctx->pc = 0x279e4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 15680)));
    // 0x279e50: 0x600008  jr          $v1
    ctx->pc = 0x279E50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x279E60u: goto label_279e60;
            case 0x279E70u: goto label_279e70;
            case 0x279E80u: goto label_279e80;
            case 0x279E90u: goto label_279e90;
            case 0x279EA0u: goto label_279ea0;
            case 0x279EB0u: goto label_279eb0;
            case 0x279EC0u: goto label_279ec0;
            case 0x279ED0u: goto label_279ed0;
            case 0x279EE0u: goto label_279ee0;
            case 0x279EF0u: goto label_279ef0;
            case 0x279F00u: goto label_279f00;
            case 0x279F10u: goto label_279f10;
            case 0x279F20u: goto label_279f20;
            case 0x279F70u: goto label_279f70;
            case 0x279F90u: goto label_279f90;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x279E50u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x279E58u;
label_279e58:
    // 0x279e58: 0x1000004f  b           . + 4 + (0x4F << 2)
    ctx->pc = 0x279E58u;
    {
        const bool branch_taken_0x279e58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x279E5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279E58u;
        // 0x279e5c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x279e58) {
            ctx->pc = 0x279F98u;
            goto label_279f98;
        }
    }
    ctx->pc = 0x279E60u;
label_279e60:
    // 0x279e60: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x279e60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x279e64: 0x1000004c  b           . + 4 + (0x4C << 2)
    ctx->pc = 0x279E64u;
    {
        const bool branch_taken_0x279e64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x279E68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279E64u;
        // 0x279e68: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x279e64) {
            ctx->pc = 0x279F98u;
            goto label_279f98;
        }
    }
    ctx->pc = 0x279E6Cu;
    // 0x279e6c: 0x0  nop
    ctx->pc = 0x279e6cu;
    // NOP
label_279e70:
    // 0x279e70: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x279e70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x279e74: 0x10000048  b           . + 4 + (0x48 << 2)
    ctx->pc = 0x279E74u;
    {
        const bool branch_taken_0x279e74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x279E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279E74u;
        // 0x279e78: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x279e74) {
            ctx->pc = 0x279F98u;
            goto label_279f98;
        }
    }
    ctx->pc = 0x279E7Cu;
    // 0x279e7c: 0x0  nop
    ctx->pc = 0x279e7cu;
    // NOP
label_279e80:
    // 0x279e80: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x279e80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x279e84: 0x10000044  b           . + 4 + (0x44 << 2)
    ctx->pc = 0x279E84u;
    {
        const bool branch_taken_0x279e84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x279E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279E84u;
        // 0x279e88: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x279e84) {
            ctx->pc = 0x279F98u;
            goto label_279f98;
        }
    }
    ctx->pc = 0x279E8Cu;
    // 0x279e8c: 0x0  nop
    ctx->pc = 0x279e8cu;
    // NOP
label_279e90:
    // 0x279e90: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x279e90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x279e94: 0x10000040  b           . + 4 + (0x40 << 2)
    ctx->pc = 0x279E94u;
    {
        const bool branch_taken_0x279e94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x279E98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279E94u;
        // 0x279e98: 0x24050009  addiu       $a1, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x279e94) {
            ctx->pc = 0x279F98u;
            goto label_279f98;
        }
    }
    ctx->pc = 0x279E9Cu;
    // 0x279e9c: 0x0  nop
    ctx->pc = 0x279e9cu;
    // NOP
label_279ea0:
    // 0x279ea0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x279ea0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x279ea4: 0x1000003c  b           . + 4 + (0x3C << 2)
    ctx->pc = 0x279EA4u;
    {
        const bool branch_taken_0x279ea4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x279EA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279EA4u;
        // 0x279ea8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x279ea4) {
            ctx->pc = 0x279F98u;
            goto label_279f98;
        }
    }
    ctx->pc = 0x279EACu;
    // 0x279eac: 0x0  nop
    ctx->pc = 0x279eacu;
    // NOP
label_279eb0:
    // 0x279eb0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x279eb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x279eb4: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x279EB4u;
    {
        const bool branch_taken_0x279eb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x279EB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279EB4u;
        // 0x279eb8: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x279eb4) {
            ctx->pc = 0x279F98u;
            goto label_279f98;
        }
    }
    ctx->pc = 0x279EBCu;
    // 0x279ebc: 0x0  nop
    ctx->pc = 0x279ebcu;
    // NOP
label_279ec0:
    // 0x279ec0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x279ec0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x279ec4: 0x10000034  b           . + 4 + (0x34 << 2)
    ctx->pc = 0x279EC4u;
    {
        const bool branch_taken_0x279ec4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x279EC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279EC4u;
        // 0x279ec8: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x279ec4) {
            ctx->pc = 0x279F98u;
            goto label_279f98;
        }
    }
    ctx->pc = 0x279ECCu;
    // 0x279ecc: 0x0  nop
    ctx->pc = 0x279eccu;
    // NOP
label_279ed0:
    // 0x279ed0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x279ed0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x279ed4: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x279ED4u;
    {
        const bool branch_taken_0x279ed4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x279ED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279ED4u;
        // 0x279ed8: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x279ed4) {
            ctx->pc = 0x279F98u;
            goto label_279f98;
        }
    }
    ctx->pc = 0x279EDCu;
    // 0x279edc: 0x0  nop
    ctx->pc = 0x279edcu;
    // NOP
label_279ee0:
    // 0x279ee0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x279ee0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x279ee4: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x279EE4u;
    {
        const bool branch_taken_0x279ee4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x279EE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279EE4u;
        // 0x279ee8: 0x24050013  addiu       $a1, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x279ee4) {
            ctx->pc = 0x279F98u;
            goto label_279f98;
        }
    }
    ctx->pc = 0x279EECu;
    // 0x279eec: 0x0  nop
    ctx->pc = 0x279eecu;
    // NOP
label_279ef0:
    // 0x279ef0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x279ef0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x279ef4: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x279EF4u;
    {
        const bool branch_taken_0x279ef4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x279EF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279EF4u;
        // 0x279ef8: 0x24050012  addiu       $a1, $zero, 0x12 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x279ef4) {
            ctx->pc = 0x279F98u;
            goto label_279f98;
        }
    }
    ctx->pc = 0x279EFCu;
    // 0x279efc: 0x0  nop
    ctx->pc = 0x279efcu;
    // NOP
label_279f00:
    // 0x279f00: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x279f00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x279f04: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x279F04u;
    {
        const bool branch_taken_0x279f04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x279F08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279F04u;
        // 0x279f08: 0x24050014  addiu       $a1, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x279f04) {
            ctx->pc = 0x279F98u;
            goto label_279f98;
        }
    }
    ctx->pc = 0x279F0Cu;
    // 0x279f0c: 0x0  nop
    ctx->pc = 0x279f0cu;
    // NOP
label_279f10:
    // 0x279f10: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x279f10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x279f14: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x279F14u;
    {
        const bool branch_taken_0x279f14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x279F18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279F14u;
        // 0x279f18: 0x24050015  addiu       $a1, $zero, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
        ctx->in_delay_slot = false;
        if (branch_taken_0x279f14) {
            ctx->pc = 0x279F98u;
            goto label_279f98;
        }
    }
    ctx->pc = 0x279F1Cu;
    // 0x279f1c: 0x0  nop
    ctx->pc = 0x279f1cu;
    // NOP
label_279f20:
    // 0x279f20: 0x86020012  lh          $v0, 0x12($s0)
    ctx->pc = 0x279f20u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 18)));
    // 0x279f24: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x279f24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x279f28: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x279f28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x279f2c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x279f2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x279f30: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x279f30u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x279f34: 0x3c05003b  lui         $a1, 0x3B
    ctx->pc = 0x279f34u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)59 << 16));
    // 0x279f38: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x279f38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x279f3c: 0x8ca588d0  lw          $a1, -0x7730($a1)
    ctx->pc = 0x279f3cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294936784)));
    // 0x279f40: 0xc08c182  jal         func_230608
    ctx->pc = 0x279F40u;
    SET_GPR_U32(ctx, 31, 0x279F48u);
    ctx->pc = 0x279F44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x279F40u;
    // 0x279f44: 0x9611003c  lhu         $s1, 0x3C($s0) (Delay Slot)
    SET_GPR_ZE32(ctx, 17, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 60)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x230608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230608u, 0x279F40u, 0x279F48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x279F48u;
label_279f48:
    // 0x279f48: 0x921301be  lbu         $s3, 0x1BE($s0)
    ctx->pc = 0x279f48u;
    SET_GPR_ZE32(ctx, 19, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 446)));
    // 0x279f4c: 0x112080  sll         $a0, $s1, 2
    ctx->pc = 0x279f4cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x279f50: 0x8e0306b4  lw          $v1, 0x6B4($s0)
    ctx->pc = 0x279f50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1716)));
    // 0x279f54: 0x9c1021  addu        $v0, $a0, $gp
    ctx->pc = 0x279f54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 28)));
    // 0x279f58: 0x8c42a868  lw          $v0, -0x5798($v0)
    ctx->pc = 0x279f58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294944872)));
    // 0x279f5c: 0x431826  xor         $v1, $v0, $v1
    ctx->pc = 0x279f5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
    // 0x279f60: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x279f60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x279f64: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x279f64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x279f68: 0x10000056  b           . + 4 + (0x56 << 2)
    ctx->pc = 0x279F68u;
    {
        const bool branch_taken_0x279f68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x279F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279F68u;
        // 0x279f6c: 0xafa30004  sw          $v1, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x279f68) {
            ctx->pc = 0x27A0C4u;
            goto label_27a0c4;
        }
    }
    ctx->pc = 0x279F70u;
label_279f70:
    // 0x279f70: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x279f70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x279f74: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x279f74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x279f78: 0x27a60004  addiu       $a2, $sp, 0x4
    ctx->pc = 0x279f78u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x279f7c: 0xc099522  jal         func_265488
    ctx->pc = 0x279F7Cu;
    SET_GPR_U32(ctx, 31, 0x279F84u);
    ctx->pc = 0x279F80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x279F7Cu;
    // 0x279f80: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x265488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x265488u, 0x279F7Cu, 0x279F84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x279F84u;
label_279f84:
    // 0x279f84: 0x10000050  b           . + 4 + (0x50 << 2)
    ctx->pc = 0x279F84u;
    {
        const bool branch_taken_0x279f84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x279F88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279F84u;
        // 0x279f88: 0x8e02069c  lw          $v0, 0x69C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1692)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x279f84) {
            ctx->pc = 0x27A0C8u;
            goto label_27a0c8;
        }
    }
    ctx->pc = 0x279F8Cu;
    // 0x279f8c: 0x0  nop
    ctx->pc = 0x279f8cu;
    // NOP
label_279f90:
    // 0x279f90: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x279f90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x279f94: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x279f94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_279f98:
    // 0x279f98: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x279f98u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x279f9c: 0xc0a0852  jal         func_282148
    ctx->pc = 0x279F9Cu;
    SET_GPR_U32(ctx, 31, 0x279FA4u);
    ctx->pc = 0x279FA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x279F9Cu;
    // 0x279fa0: 0x27a70004  addiu       $a3, $sp, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x282148u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x282148u, 0x279F9Cu, 0x279FA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x279FA4u;
label_279fa4:
    // 0x279fa4: 0x10000048  b           . + 4 + (0x48 << 2)
    ctx->pc = 0x279FA4u;
    {
        const bool branch_taken_0x279fa4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x279FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279FA4u;
        // 0x279fa8: 0x8e02069c  lw          $v0, 0x69C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1692)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x279fa4) {
            ctx->pc = 0x27A0C8u;
            goto label_27a0c8;
        }
    }
    ctx->pc = 0x279FACu;
    // 0x279fac: 0x0  nop
    ctx->pc = 0x279facu;
    // NOP
label_279fb0:
    // 0x279fb0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x279fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x279fb4: 0x5462001c  bnel        $v1, $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x279FB4u;
    {
        const bool branch_taken_0x279fb4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x279fb4) {
            ctx->pc = 0x279FB8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x279FB4u;
            // 0x279fb8: 0x86020012  lh          $v0, 0x12($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 18)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27A028u;
            goto label_27a028;
        }
    }
    ctx->pc = 0x279FBCu;
    // 0x279fbc: 0xc09ddd8  jal         func_277760
    ctx->pc = 0x279FBCu;
    SET_GPR_U32(ctx, 31, 0x279FC4u);
    ctx->pc = 0x279FC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x279FBCu;
    // 0x279fc0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277760u, 0x279FBCu, 0x279FC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x279FC4u;
label_279fc4:
    // 0x279fc4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x279fc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x279fc8: 0x27a50008  addiu       $a1, $sp, 0x8
    ctx->pc = 0x279fc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 8));
    // 0x279fcc: 0x27a6000a  addiu       $a2, $sp, 0xA
    ctx->pc = 0x279fccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 10));
    // 0x279fd0: 0xc099522  jal         func_265488
    ctx->pc = 0x279FD0u;
    SET_GPR_U32(ctx, 31, 0x279FD8u);
    ctx->pc = 0x279FD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x279FD0u;
    // 0x279fd4: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x265488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x265488u, 0x279FD0u, 0x279FD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x279FD8u;
label_279fd8:
    // 0x279fd8: 0xc07e580  jal         func_1F9600
    ctx->pc = 0x279FD8u;
    SET_GPR_U32(ctx, 31, 0x279FE0u);
    ctx->pc = 0x1F9600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F9600u, 0x279FD8u, 0x279FE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x279FE0u;
label_279fe0:
    // 0x279fe0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x279FE0u;
    {
        const bool branch_taken_0x279fe0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x279FE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279FE0u;
        // 0x279fe4: 0x8e4283c0  lw          $v0, -0x7C40($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294935488)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x279fe0) {
            ctx->pc = 0x27A000u;
            goto label_27a000;
        }
    }
    ctx->pc = 0x279FE8u;
    // 0x279fe8: 0x38420007  xori        $v0, $v0, 0x7
    ctx->pc = 0x279fe8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)7);
    // 0x279fec: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x279FECu;
    {
        const bool branch_taken_0x279fec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x279fec) {
            ctx->pc = 0x279FF0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x279FECu;
            // 0x279ff0: 0x92220003  lbu         $v0, 0x3($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 3)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27A004u;
            goto label_27a004;
        }
    }
    ctx->pc = 0x279FF4u;
    // 0x279ff4: 0xa20001be  sb          $zero, 0x1BE($s0)
    ctx->pc = 0x279ff4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 446), (uint8_t)GPR_U32(ctx, 0));
label_279ff8:
    // 0x279ff8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x279FF8u;
    {
        const bool branch_taken_0x279ff8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x279FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279FF8u;
        // 0x279ffc: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x279ff8) {
            ctx->pc = 0x27A00Cu;
            goto label_27a00c;
        }
    }
    ctx->pc = 0x27A000u;
label_27a000:
    // 0x27a000: 0x92220003  lbu         $v0, 0x3($s1)
    ctx->pc = 0x27a000u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 3)));
label_27a004:
    // 0x27a004: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x27a004u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27a008: 0xa20201be  sb          $v0, 0x1BE($s0)
    ctx->pc = 0x27a008u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 446), (uint8_t)GPR_U32(ctx, 2));
label_27a00c:
    // 0x27a00c: 0x96230000  lhu         $v1, 0x0($s1)
    ctx->pc = 0x27a00cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x27a010: 0x8e0206b4  lw          $v0, 0x6B4($s0)
    ctx->pc = 0x27a010u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1716)));
    // 0x27a014: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x27a014u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x27a018: 0x621026  xor         $v0, $v1, $v0
    ctx->pc = 0x27a018u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 2));
    // 0x27a01c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x27a01cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x27a020: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x27A020u;
    {
        const bool branch_taken_0x27a020 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27A024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A020u;
        // 0x27a024: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27a020) {
            ctx->pc = 0x27A0C4u;
            goto label_27a0c4;
        }
    }
    ctx->pc = 0x27A028u;
label_27a028:
    // 0x27a028: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x27a028u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27a02c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x27a02cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x27a030: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x27a030u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x27a034: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x27a034u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x27a038: 0x3c05003b  lui         $a1, 0x3B
    ctx->pc = 0x27a038u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)59 << 16));
    // 0x27a03c: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x27a03cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x27a040: 0x8ca588d0  lw          $a1, -0x7730($a1)
    ctx->pc = 0x27a040u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294936784)));
    // 0x27a044: 0xc08c182  jal         func_230608
    ctx->pc = 0x27A044u;
    SET_GPR_U32(ctx, 31, 0x27A04Cu);
    ctx->pc = 0x27A048u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27A044u;
    // 0x27a048: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x230608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230608u, 0x27A044u, 0x27A04Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27A04Cu;
label_27a04c:
    // 0x27a04c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x27a04cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27a050: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x27a050u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27a054: 0xc099522  jal         func_265488
    ctx->pc = 0x27A054u;
    SET_GPR_U32(ctx, 31, 0x27A05Cu);
    ctx->pc = 0x27A058u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27A054u;
    // 0x27a058: 0x27a60004  addiu       $a2, $sp, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x265488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x265488u, 0x27A054u, 0x27A05Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27A05Cu;
label_27a05c:
    // 0x27a05c: 0x8f83ca70  lw          $v1, -0x3590($gp)
    ctx->pc = 0x27a05cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294953584)));
    // 0x27a060: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x27a060u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27a064: 0x54620018  bnel        $v1, $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x27A064u;
    {
        const bool branch_taken_0x27a064 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x27a064) {
            ctx->pc = 0x27A068u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27A064u;
            // 0x27a068: 0x8e02069c  lw          $v0, 0x69C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1692)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27A0C8u;
            goto label_27a0c8;
        }
    }
    ctx->pc = 0x27A06Cu;
    // 0x27a06c: 0x920501be  lbu         $a1, 0x1BE($s0)
    ctx->pc = 0x27a06cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 446)));
    // 0x27a070: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x27a070u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27a074: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x27a074u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_27a078:
    // 0x27a078: 0xc09dda2  jal         func_277688
    ctx->pc = 0x27A078u;
    SET_GPR_U32(ctx, 31, 0x27A080u);
    ctx->pc = 0x277688u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277688u, 0x27A078u, 0x27A080u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27A080u;
label_27a080:
    // 0x27a080: 0xc0a0bc2  jal         func_282F08
    ctx->pc = 0x27A080u;
    SET_GPR_U32(ctx, 31, 0x27A088u);
    ctx->pc = 0x27A084u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27A080u;
    // 0x27a084: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x282F08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x282F08u, 0x27A080u, 0x27A088u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27A088u;
label_27a088:
    // 0x27a088: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x27A088u;
    {
        const bool branch_taken_0x27a088 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27A08Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A088u;
        // 0x27a08c: 0x8e02069c  lw          $v0, 0x69C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1692)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27a088) {
            ctx->pc = 0x27A0C8u;
            goto label_27a0c8;
        }
    }
    ctx->pc = 0x27A090u;
label_27a090:
    // 0x27a090: 0x9604003c  lhu         $a0, 0x3C($s0)
    ctx->pc = 0x27a090u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x27a094: 0xc097ac6  jal         func_25EB18
    ctx->pc = 0x27A094u;
    SET_GPR_U32(ctx, 31, 0x27A09Cu);
    ctx->pc = 0x27A098u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27A094u;
    // 0x27a098: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25EB18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25EB18u, 0x27A094u, 0x27A09Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27A09Cu;
label_27a09c:
    // 0x27a09c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x27a09cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27a0a0: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x27a0a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27a0a4: 0xc097cd2  jal         func_25F348
    ctx->pc = 0x27A0A4u;
    SET_GPR_U32(ctx, 31, 0x27A0ACu);
    ctx->pc = 0x27A0A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27A0A4u;
    // 0x27a0a8: 0x27a60004  addiu       $a2, $sp, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25F348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25F348u, 0x27A0A4u, 0x27A0ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27A0ACu;
label_27a0ac:
    // 0x27a0ac: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x27A0ACu;
    {
        const bool branch_taken_0x27a0ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27A0B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A0ACu;
        // 0x27a0b0: 0x8e02069c  lw          $v0, 0x69C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1692)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27a0ac) {
            ctx->pc = 0x27A0C8u;
            goto label_27a0c8;
        }
    }
    ctx->pc = 0x27A0B4u;
    // 0x27a0b4: 0x0  nop
    ctx->pc = 0x27a0b4u;
    // NOP
label_27a0b8:
    // 0x27a0b8: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x27a0b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x27a0bc: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x27a0bcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27a0c0: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x27a0c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_27a0c4:
    // 0x27a0c4: 0x8e02069c  lw          $v0, 0x69C($s0)
    ctx->pc = 0x27a0c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1692)));
label_27a0c8:
    // 0x27a0c8: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x27A0C8u;
    {
        const bool branch_taken_0x27a0c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27A0CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A0C8u;
        // 0x27a0cc: 0x8fa60000  lw          $a2, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27a0c8) {
            ctx->pc = 0x27A0DCu;
            goto label_27a0dc;
        }
    }
    ctx->pc = 0x27A0D0u;
    // 0x27a0d0: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x27a0d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x27a0d4: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x27a0d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x27a0d8: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x27a0d8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_27a0dc:
    // 0x27a0dc: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x27a0dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27a0e0: 0x8fa70004  lw          $a3, 0x4($sp)
    ctx->pc = 0x27a0e0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x27a0e4: 0xc09e290  jal         func_278A40
    ctx->pc = 0x27A0E4u;
    SET_GPR_U32(ctx, 31, 0x27A0ECu);
    ctx->pc = 0x27A0E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27A0E4u;
    // 0x27a0e8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x278A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x278A40u, 0x27A0E4u, 0x27A0ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27A0ECu;
label_27a0ec:
    // 0x27a0ec: 0x8e0306b0  lw          $v1, 0x6B0($s0)
    ctx->pc = 0x27a0ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1712)));
    // 0x27a0f0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x27a0f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27a0f4: 0x54620005  bnel        $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x27A0F4u;
    {
        const bool branch_taken_0x27a0f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x27a0f4) {
            ctx->pc = 0x27A0F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27A0F4u;
            // 0x27a0f8: 0x8e020048  lw          $v0, 0x48($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27A10Cu;
            goto label_27a10c;
        }
    }
    ctx->pc = 0x27A0FCu;
    // 0x27a0fc: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x27a0fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27a100: 0xc09e6a2  jal         func_279A88
    ctx->pc = 0x27A100u;
    SET_GPR_U32(ctx, 31, 0x27A108u);
    ctx->pc = 0x27A104u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27A100u;
    // 0x27a104: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x279A88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x279A88u, 0x27A100u, 0x27A108u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27A108u;
label_27a108:
    // 0x27a108: 0x8e020048  lw          $v0, 0x48($s0)
    ctx->pc = 0x27a108u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
label_27a10c:
    // 0x27a10c: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x27A10Cu;
    {
        const bool branch_taken_0x27a10c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x27a10c) {
            ctx->pc = 0x27A110u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27A10Cu;
            // 0x27a110: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27A120u;
            goto label_27a120;
        }
    }
    ctx->pc = 0x27A114u;
    // 0x27a114: 0xc09e224  jal         func_278890
    ctx->pc = 0x27A114u;
    SET_GPR_U32(ctx, 31, 0x27A11Cu);
    ctx->pc = 0x27A118u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27A114u;
    // 0x27a118: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x278890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x278890u, 0x27A114u, 0x27A11Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27A11Cu;
label_27a11c:
    // 0x27a11c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x27a11cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_27a120:
    // 0x27a120: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x27a120u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x27a124: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x27a124u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x27a128: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x27a128u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x27a12c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x27a12cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x27a130: 0x3e00008  jr          $ra
    ctx->pc = 0x27A130u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27A134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A130u;
        // 0x27a134: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27A130u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27A138u;
}
