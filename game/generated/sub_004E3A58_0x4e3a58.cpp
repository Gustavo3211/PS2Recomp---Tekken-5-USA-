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

// Function: sub_004E3A58
// Address: 0x4e3a58 - 0x4e3b90
void sub_004E3A58_0x4e3a58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E3A58_0x4e3a58");
#endif

    switch (ctx->pc) {
        case 0x4e3a84u: goto label_4e3a84;
        case 0x4e3b58u: goto label_4e3b58;
        case 0x4e3b68u: goto label_4e3b68;
        case 0x4e3b78u: goto label_4e3b78;
        case 0x4e3b88u: goto label_4e3b88;
        default: break;
    }

    ctx->pc = 0x4e3a58u;

    // 0x4e3a58: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4e3a58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x4e3a5c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4e3a5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4e3a60: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4e3a60u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e3a64: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x4e3a64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x4e3a68: 0x261101b4  addiu       $s1, $s0, 0x1B4
    ctx->pc = 0x4e3a68u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 436));
    // 0x4e3a6c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4e3a6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x4e3a70: 0x86220000  lh          $v0, 0x0($s1)
    ctx->pc = 0x4e3a70u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4e3a74: 0x442000c  bltzl       $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x4E3A74u;
    {
        const bool branch_taken_0x4e3a74 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x4e3a74) {
            ctx->pc = 0x4E3A78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E3A74u;
            // 0x4e3a78: 0x8e040140  lw          $a0, 0x140($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 320)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E3AA8u;
            goto label_4e3aa8;
        }
    }
    ctx->pc = 0x4E3A7Cu;
    // 0x4e3a7c: 0xc12b642  jal         func_4AD908
    ctx->pc = 0x4E3A7Cu;
    SET_GPR_U32(ctx, 31, 0x4E3A84u);
    ctx->pc = 0x4AD908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AD908u, 0x4E3A7Cu, 0x4E3A84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E3A84u;
label_4e3a84:
    // 0x4e3a84: 0xa600015e  sh          $zero, 0x15E($s0)
    ctx->pc = 0x4e3a84u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 350), (uint16_t)GPR_U32(ctx, 0));
    // 0x4e3a88: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x4e3a88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x4e3a8c: 0xa6000160  sh          $zero, 0x160($s0)
    ctx->pc = 0x4e3a8cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 352), (uint16_t)GPR_U32(ctx, 0));
    // 0x4e3a90: 0xa602000e  sh          $v0, 0xE($s0)
    ctx->pc = 0x4e3a90u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 14), (uint16_t)GPR_U32(ctx, 2));
    // 0x4e3a94: 0xa60001b6  sh          $zero, 0x1B6($s0)
    ctx->pc = 0x4e3a94u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 438), (uint16_t)GPR_U32(ctx, 0));
    // 0x4e3a98: 0x96220000  lhu         $v0, 0x0($s1)
    ctx->pc = 0x4e3a98u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4e3a9c: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x4e3a9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x4e3aa0: 0xa6220000  sh          $v0, 0x0($s1)
    ctx->pc = 0x4e3aa0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4e3aa4: 0x8e040140  lw          $a0, 0x140($s0)
    ctx->pc = 0x4e3aa4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 320)));
label_4e3aa8:
    // 0x4e3aa8: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x4e3aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
    // 0x4e3aac: 0xac4411b4  sw          $a0, 0x11B4($v0)
    ctx->pc = 0x4e3aacu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x7F11B4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7F11B4u, _value); } while (0);
    // 0x4e3ab0: 0x848301b4  lh          $v1, 0x1B4($a0)
    ctx->pc = 0x4e3ab0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 436)));
    // 0x4e3ab4: 0x4600006  bltz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x4E3AB4u;
    {
        const bool branch_taken_0x4e3ab4 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x4E3AB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E3AB4u;
        // 0x4e3ab8: 0xdfb10008  ld          $s1, 0x8($sp) (Delay Slot)
        SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e3ab4) {
            ctx->pc = 0x4E3AD0u;
            goto label_4e3ad0;
        }
    }
    ctx->pc = 0x4E3ABCu;
    // 0x4e3abc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4e3abcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e3ac0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4e3ac0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4e3ac4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4e3ac4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4e3ac8: 0x8139308  j           func_4E4C20
    ctx->pc = 0x4E3AC8u;
    ctx->pc = 0x4E3ACCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E3AC8u;
    // 0x4e3acc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E4C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E4C20u, 0x4E3AC8u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x4E3AD0u;
label_4e3ad0:
    // 0x4e3ad0: 0x3c03007f  lui         $v1, 0x7F
    ctx->pc = 0x4e3ad0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)127 << 16));
    // 0x4e3ad4: 0x8484016a  lh          $a0, 0x16A($a0)
    ctx->pc = 0x4e3ad4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 362)));
    // 0x4e3ad8: 0x246311a0  addiu       $v1, $v1, 0x11A0
    ctx->pc = 0x4e3ad8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4512));
    // 0x4e3adc: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x4e3adcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
    // 0x4e3ae0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x4e3ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x7F11A0u));
    // 0x4e3ae4: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x4e3ae4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x4e3ae8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4e3ae8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4e3aec: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x4e3aecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x4e3af0: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x4e3af0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x4e3af4: 0x84640000  lh          $a0, 0x0($v1)
    ctx->pc = 0x4e3af4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4e3af8: 0x8602016a  lh          $v0, 0x16A($s0)
    ctx->pc = 0x4e3af8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 362)));
    // 0x4e3afc: 0x54440008  bnel        $v0, $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x4E3AFCu;
    {
        const bool branch_taken_0x4e3afc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x4e3afc) {
            ctx->pc = 0x4E3B00u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E3AFCu;
            // 0x4e3b00: 0x960201bc  lhu         $v0, 0x1BC($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 444)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E3B20u;
            goto label_4e3b20;
        }
    }
    ctx->pc = 0x4E3B04u;
    // 0x4e3b04: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4e3b04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e3b08: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4e3b08u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4e3b0c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4e3b0cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4e3b10: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4e3b10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4e3b14: 0x8139308  j           func_4E4C20
    ctx->pc = 0x4E3B14u;
    ctx->pc = 0x4E3B18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E3B14u;
    // 0x4e3b18: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E4C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E4C20u, 0x4E3B14u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x4E3B1Cu;
    // 0x4e3b1c: 0x0  nop
    ctx->pc = 0x4e3b1cu;
    // NOP
label_4e3b20:
    // 0x4e3b20: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4e3b20u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4e3b24: 0x21443  sra         $v0, $v0, 17
    ctx->pc = 0x4e3b24u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 17));
    // 0x4e3b28: 0x2c430006  sltiu       $v1, $v0, 0x6
    ctx->pc = 0x4e3b28u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x4e3b2c: 0x5060001b  beql        $v1, $zero, . + 4 + (0x1B << 2)
    ctx->pc = 0x4E3B2Cu;
    {
        const bool branch_taken_0x4e3b2c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x4e3b2c) {
            ctx->pc = 0x4E3B30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E3B2Cu;
            // 0x4e3b30: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E3B9Cu;
            return;
        }
    }
    ctx->pc = 0x4E3B34u;
    // 0x4e3b34: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x4e3b34u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x4e3b38: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x4e3b38u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
    // 0x4e3b3c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x4e3b3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x4e3b40: 0x8c63b9e0  lw          $v1, -0x4620($v1)
    ctx->pc = 0x4e3b40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294949344)));
    // 0x4e3b44: 0x600008  jr          $v1
    ctx->pc = 0x4E3B44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x4E3B50u: goto label_4e3b50;
            case 0x4E3B60u: goto label_4e3b60;
            case 0x4E3B70u: goto label_4e3b70;
            case 0x4E3B80u: goto label_4e3b80;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4E3B44u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x4E3B4Cu;
    // 0x4e3b4c: 0x0  nop
    ctx->pc = 0x4e3b4cu;
    // NOP
label_4e3b50:
    // 0x4e3b50: 0xc138eec  jal         func_4E3BB0
    ctx->pc = 0x4E3B50u;
    SET_GPR_U32(ctx, 31, 0x4E3B58u);
    ctx->pc = 0x4E3B54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E3B50u;
    // 0x4e3b54: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E3BB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E3BB0u, 0x4E3B50u, 0x4E3B58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E3B58u;
label_4e3b58:
    // 0x4e3b58: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x4E3B58u;
    {
        const bool branch_taken_0x4e3b58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E3B5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E3B58u;
        // 0x4e3b5c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e3b58) {
            ctx->pc = 0x4E3B9Cu;
            return;
        }
    }
    ctx->pc = 0x4E3B60u;
label_4e3b60:
    // 0x4e3b60: 0xc138efe  jal         func_4E3BF8
    ctx->pc = 0x4E3B60u;
    SET_GPR_U32(ctx, 31, 0x4E3B68u);
    ctx->pc = 0x4E3B64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E3B60u;
    // 0x4e3b64: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E3BF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E3BF8u, 0x4E3B60u, 0x4E3B68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E3B68u;
label_4e3b68:
    // 0x4e3b68: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x4E3B68u;
    {
        const bool branch_taken_0x4e3b68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E3B6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E3B68u;
        // 0x4e3b6c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e3b68) {
            ctx->pc = 0x4E3B9Cu;
            return;
        }
    }
    ctx->pc = 0x4E3B70u;
label_4e3b70:
    // 0x4e3b70: 0xc138f22  jal         func_4E3C88
    ctx->pc = 0x4E3B70u;
    SET_GPR_U32(ctx, 31, 0x4E3B78u);
    ctx->pc = 0x4E3B74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E3B70u;
    // 0x4e3b74: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E3C88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E3C88u, 0x4E3B70u, 0x4E3B78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E3B78u;
label_4e3b78:
    // 0x4e3b78: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x4E3B78u;
    {
        const bool branch_taken_0x4e3b78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E3B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E3B78u;
        // 0x4e3b7c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e3b78) {
            ctx->pc = 0x4E3B9Cu;
            return;
        }
    }
    ctx->pc = 0x4E3B80u;
label_4e3b80:
    // 0x4e3b80: 0xc138f10  jal         func_4E3C40
    ctx->pc = 0x4E3B80u;
    SET_GPR_U32(ctx, 31, 0x4E3B88u);
    ctx->pc = 0x4E3B84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E3B80u;
    // 0x4e3b84: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E3C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E3C40u, 0x4E3B80u, 0x4E3B88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E3B88u;
label_4e3b88:
    // 0x4e3b88: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x4E3B88u;
    {
        const bool branch_taken_0x4e3b88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E3B8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E3B88u;
        // 0x4e3b8c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e3b88) {
            ctx->pc = 0x4E3B9Cu;
            return;
        }
    }
    ctx->pc = 0x4E3B90u;
}
