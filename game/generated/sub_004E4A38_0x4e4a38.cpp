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

// Function: sub_004E4A38
// Address: 0x4e4a38 - 0x4e4bb8
void sub_004E4A38_0x4e4a38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E4A38_0x4e4a38");
#endif

    switch (ctx->pc) {
        case 0x4e4aa4u: goto label_4e4aa4;
        case 0x4e4ac8u: goto label_4e4ac8;
        default: break;
    }

    ctx->pc = 0x4e4a38u;

    // 0x4e4a38: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4e4a38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x4e4a3c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x4e4a3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x4e4a40: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x4e4a40u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e4a44: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4e4a44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4e4a48: 0x262301b4  addiu       $v1, $s1, 0x1B4
    ctx->pc = 0x4e4a48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 436));
    // 0x4e4a4c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x4e4a4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x4e4a50: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x4e4a50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x4e4a54: 0x84620000  lh          $v0, 0x0($v1)
    ctx->pc = 0x4e4a54u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4e4a58: 0x440001d  bltz        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x4E4A58u;
    {
        const bool branch_taken_0x4e4a58 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x4E4A5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E4A58u;
        // 0x4e4a5c: 0x3c10007f  lui         $s0, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)127 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e4a58) {
            ctx->pc = 0x4E4AD0u;
            goto label_4e4ad0;
        }
    }
    ctx->pc = 0x4E4A60u;
    // 0x4e4a60: 0xa62001b6  sh          $zero, 0x1B6($s1)
    ctx->pc = 0x4e4a60u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 438), (uint16_t)GPR_U32(ctx, 0));
    // 0x4e4a64: 0x261011a0  addiu       $s0, $s0, 0x11A0
    ctx->pc = 0x4e4a64u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4512));
    // 0x4e4a68: 0x2405ff90  addiu       $a1, $zero, -0x70
    ctx->pc = 0x4e4a68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967184));
    // 0x4e4a6c: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x4e4a6cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4e4a70: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4e4a70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e4a74: 0x3c120073  lui         $s2, 0x73
    ctx->pc = 0x4e4a74u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)115 << 16));
    // 0x4e4a78: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x4e4a78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x4e4a7c: 0xa4620000  sh          $v0, 0x0($v1)
    ctx->pc = 0x4e4a7cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4e4a80: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x4e4a80u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x4e4a84: 0xae200124  sw          $zero, 0x124($s1)
    ctx->pc = 0x4e4a84u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 292), GPR_U32(ctx, 0));
    // 0x4e4a88: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x4e4a88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4e4a8c: 0xae230128  sw          $v1, 0x128($s1)
    ctx->pc = 0x4e4a8cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 296), GPR_U32(ctx, 3));
    // 0x4e4a90: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x4e4a90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4e4a94: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4e4a94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4e4a98: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x4e4a98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x4e4a9c: 0xc13e49c  jal         func_4F9270
    ctx->pc = 0x4E4A9Cu;
    SET_GPR_U32(ctx, 31, 0x4E4AA4u);
    ctx->pc = 0x4E4AA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E4A9Cu;
    // 0x4e4aa0: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F9270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F9270u, 0x4E4A9Cu, 0x4E4AA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E4AA4u;
label_4e4aa4:
    // 0x4e4aa4: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x4e4aa4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4e4aa8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x4e4aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x4e4aac: 0x2643d680  addiu       $v1, $s2, -0x2980
    ctx->pc = 0x4e4aacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 4294956672));
    // 0x4e4ab0: 0xa622014a  sh          $v0, 0x14A($s1)
    ctx->pc = 0x4e4ab0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 330), (uint16_t)GPR_U32(ctx, 2));
    // 0x4e4ab4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x4e4ab4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x4e4ab8: 0xae25012c  sw          $a1, 0x12C($s1)
    ctx->pc = 0x4e4ab8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 300), GPR_U32(ctx, 5));
    // 0x4e4abc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4e4abcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e4ac0: 0xc13d788  jal         func_4F5E20
    ctx->pc = 0x4E4AC0u;
    SET_GPR_U32(ctx, 31, 0x4E4AC8u);
    ctx->pc = 0x4E4AC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E4AC0u;
    // 0x4e4ac4: 0xa462232c  sh          $v0, 0x232C($v1) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 3), 9004), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F5E20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F5E20u, 0x4E4AC0u, 0x4E4AC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E4AC8u;
label_4e4ac8:
    // 0x4e4ac8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x4E4AC8u;
    {
        const bool branch_taken_0x4e4ac8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E4ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E4AC8u;
        // 0x4e4acc: 0x2647d680  addiu       $a3, $s2, -0x2980 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), 4294956672));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e4ac8) {
            ctx->pc = 0x4E4AD8u;
            goto label_4e4ad8;
        }
    }
    ctx->pc = 0x4E4AD0u;
label_4e4ad0:
    // 0x4e4ad0: 0x3c120073  lui         $s2, 0x73
    ctx->pc = 0x4e4ad0u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)115 << 16));
    // 0x4e4ad4: 0x2647d680  addiu       $a3, $s2, -0x2980
    ctx->pc = 0x4e4ad4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), 4294956672));
label_4e4ad8:
    // 0x4e4ad8: 0x84e22214  lh          $v0, 0x2214($a3)
    ctx->pc = 0x4e4ad8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 8724)));
    // 0x4e4adc: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x4E4ADCu;
    {
        const bool branch_taken_0x4e4adc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4E4AE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E4ADCu;
        // 0x4e4ae0: 0x2624014a  addiu       $a0, $s1, 0x14A (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 330));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e4adc) {
            ctx->pc = 0x4E4B00u;
            goto label_4e4b00;
        }
    }
    ctx->pc = 0x4E4AE4u;
    // 0x4e4ae4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4e4ae4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e4ae8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4e4ae8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4e4aec: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4e4aecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4e4af0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4e4af0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4e4af4: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x4e4af4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4e4af8: 0x813930e  j           func_4E4C38
    ctx->pc = 0x4E4AF8u;
    ctx->pc = 0x4E4AFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E4AF8u;
    // 0x4e4afc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E4C38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E4C38u, 0x4E4AF8u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x4E4B00u;
label_4e4b00:
    // 0x4e4b00: 0x3c03007f  lui         $v1, 0x7F
    ctx->pc = 0x4e4b00u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)127 << 16));
    // 0x4e4b04: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x4e4b04u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4e4b08: 0x246611a0  addiu       $a2, $v1, 0x11A0
    ctx->pc = 0x4e4b08u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 4512));
    // 0x4e4b0c: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x4e4b0cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
    // 0x4e4b10: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x4e4b10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x4e4b14: 0xa4820000  sh          $v0, 0x0($a0)
    ctx->pc = 0x4e4b14u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4e4b18: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4e4b18u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4e4b1c: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4e4b1cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4e4b20: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x4e4b20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4e4b24: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x4e4b24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x4e4b28: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4e4b28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4e4b2c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4e4b2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4e4b30: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x4e4b30u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x4e4b34: 0x3464ffff  ori         $a0, $v1, 0xFFFF
    ctx->pc = 0x4e4b34u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4e4b38: 0x94c20000  lhu         $v0, 0x0($a2)
    ctx->pc = 0x4e4b38u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4e4b3c: 0x30430003  andi        $v1, $v0, 0x3
    ctx->pc = 0x4e4b3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x4e4b40: 0x2c42001e  sltiu       $v0, $v0, 0x1E
    ctx->pc = 0x4e4b40u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)30) ? 1 : 0);
    // 0x4e4b44: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x4E4B44u;
    {
        const bool branch_taken_0x4e4b44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4E4B48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E4B44u;
        // 0x4e4b48: 0x651825  or          $v1, $v1, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e4b44) {
            ctx->pc = 0x4E4B68u;
            goto label_4e4b68;
        }
    }
    ctx->pc = 0x4E4B4Cu;
    // 0x4e4b4c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4e4b4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e4b50: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4e4b50u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4e4b54: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4e4b54u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4e4b58: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4e4b58u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4e4b5c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x4e4b5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4e4b60: 0x8139308  j           func_4E4C20
    ctx->pc = 0x4E4B60u;
    ctx->pc = 0x4E4B64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E4B60u;
    // 0x4e4b64: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E4C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E4C20u, 0x4E4B60u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x4E4B68u;
label_4e4b68:
    // 0x4e4b68: 0x831024  and         $v0, $a0, $v1
    ctx->pc = 0x4e4b68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x4e4b6c: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x4e4b6cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x4e4b70: 0x84c30000  lh          $v1, 0x0($a2)
    ctx->pc = 0x4e4b70u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4e4b74: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x4E4B74u;
    {
        const bool branch_taken_0x4e4b74 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E4B78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E4B74u;
        // 0x4e4b78: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e4b74) {
            ctx->pc = 0x4E4B98u;
            goto label_4e4b98;
        }
    }
    ctx->pc = 0x4E4B7Cu;
    // 0x4e4b7c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4e4b7cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4e4b80: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4e4b80u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4e4b84: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4e4b84u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4e4b88: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x4e4b88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4e4b8c: 0x813930e  j           func_4E4C38
    ctx->pc = 0x4E4B8Cu;
    ctx->pc = 0x4E4B90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E4B8Cu;
    // 0x4e4b90: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E4C38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E4C38u, 0x4E4B8Cu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x4E4B94u;
    // 0x4e4b94: 0x0  nop
    ctx->pc = 0x4e4b94u;
    // NOP
label_4e4b98:
    // 0x4e4b98: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4e4b98u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4e4b9c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4e4b9cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4e4ba0: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x4e4ba0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x4e4ba4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4e4ba4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4e4ba8: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x4e4ba8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4e4bac: 0xa4e2232c  sh          $v0, 0x232C($a3)
    ctx->pc = 0x4e4bacu;
    WRITE16(ADD32(GPR_U32(ctx, 7), 9004), (uint16_t)GPR_U32(ctx, 2));
    // 0x4e4bb0: 0x813d772  j           func_4F5DC8
    ctx->pc = 0x4E4BB0u;
    ctx->pc = 0x4E4BB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E4BB0u;
    // 0x4e4bb4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F5DC8u;
    sub_004F5DC8_0x4f5dc8(rdram, ctx, runtime); return;
    ctx->pc = 0x4E4BB8u;
}
