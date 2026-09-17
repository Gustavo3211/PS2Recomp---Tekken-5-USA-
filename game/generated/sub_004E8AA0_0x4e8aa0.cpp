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

// Function: sub_004E8AA0
// Address: 0x4e8aa0 - 0x4e8b50
void sub_004E8AA0_0x4e8aa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E8AA0_0x4e8aa0");
#endif

    switch (ctx->pc) {
        case 0x4e8aa0u: goto label_4e8aa0;
        case 0x4e8aa4u: goto label_4e8aa4;
        case 0x4e8aa8u: goto label_4e8aa8;
        case 0x4e8aacu: goto label_4e8aac;
        case 0x4e8ab0u: goto label_4e8ab0;
        case 0x4e8ab4u: goto label_4e8ab4;
        case 0x4e8ab8u: goto label_4e8ab8;
        case 0x4e8abcu: goto label_4e8abc;
        case 0x4e8ac0u: goto label_4e8ac0;
        case 0x4e8ac4u: goto label_4e8ac4;
        case 0x4e8ac8u: goto label_4e8ac8;
        case 0x4e8accu: goto label_4e8acc;
        case 0x4e8ad0u: goto label_4e8ad0;
        case 0x4e8ad4u: goto label_4e8ad4;
        case 0x4e8ad8u: goto label_4e8ad8;
        case 0x4e8adcu: goto label_4e8adc;
        case 0x4e8ae0u: goto label_4e8ae0;
        case 0x4e8ae4u: goto label_4e8ae4;
        case 0x4e8ae8u: goto label_4e8ae8;
        case 0x4e8aecu: goto label_4e8aec;
        case 0x4e8af0u: goto label_4e8af0;
        case 0x4e8af4u: goto label_4e8af4;
        case 0x4e8af8u: goto label_4e8af8;
        case 0x4e8afcu: goto label_4e8afc;
        case 0x4e8b00u: goto label_4e8b00;
        case 0x4e8b04u: goto label_4e8b04;
        case 0x4e8b08u: goto label_4e8b08;
        case 0x4e8b0cu: goto label_4e8b0c;
        case 0x4e8b10u: goto label_4e8b10;
        case 0x4e8b14u: goto label_4e8b14;
        case 0x4e8b18u: goto label_4e8b18;
        case 0x4e8b1cu: goto label_4e8b1c;
        case 0x4e8b20u: goto label_4e8b20;
        case 0x4e8b24u: goto label_4e8b24;
        case 0x4e8b28u: goto label_4e8b28;
        case 0x4e8b2cu: goto label_4e8b2c;
        case 0x4e8b30u: goto label_4e8b30;
        case 0x4e8b34u: goto label_4e8b34;
        case 0x4e8b38u: goto label_4e8b38;
        case 0x4e8b3cu: goto label_4e8b3c;
        case 0x4e8b40u: goto label_4e8b40;
        case 0x4e8b44u: goto label_4e8b44;
        case 0x4e8b48u: goto label_4e8b48;
        case 0x4e8b4cu: goto label_4e8b4c;
        default: break;
    }

    ctx->pc = 0x4e8aa0u;

label_4e8aa0:
    // 0x4e8aa0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4e8aa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_4e8aa4:
    // 0x4e8aa4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4e8aa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_4e8aa8:
    // 0x4e8aa8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4e8aa8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4e8aac:
    // 0x4e8aac: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x4e8aacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_4e8ab0:
    // 0x4e8ab0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4e8ab0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_4e8ab4:
    // 0x4e8ab4: 0xc1232f2  jal         func_48CBC8
label_4e8ab8:
    if (ctx->pc == 0x4E8AB8u) {
        ctx->pc = 0x4E8AB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E8AB4u;
        // 0x4e8ab8: 0x261101b4  addiu       $s1, $s0, 0x1B4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 436));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E8ABCu;
        goto label_4e8abc;
    }
    ctx->pc = 0x4E8AB4u;
    SET_GPR_U32(ctx, 31, 0x4E8ABCu);
    ctx->pc = 0x4E8AB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E8AB4u;
    // 0x4e8ab8: 0x261101b4  addiu       $s1, $s0, 0x1B4 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 436));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48CBC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48CBC8u, 0x4E8AB4u, 0x4E8ABCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E8ABCu;
label_4e8abc:
    // 0x4e8abc: 0x3c03007f  lui         $v1, 0x7F
    ctx->pc = 0x4e8abcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)127 << 16));
label_4e8ac0:
    // 0x4e8ac0: 0xac62120c  sw          $v0, 0x120C($v1)
    ctx->pc = 0x4e8ac0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4620), GPR_U32(ctx, 2));
label_4e8ac4:
    // 0x4e8ac4: 0x86220000  lh          $v0, 0x0($s1)
    ctx->pc = 0x4e8ac4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
label_4e8ac8:
    // 0x4e8ac8: 0x4400010  bltz        $v0, . + 4 + (0x10 << 2)
label_4e8acc:
    if (ctx->pc == 0x4E8ACCu) {
        ctx->pc = 0x4E8ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E8AC8u;
        // 0x4e8acc: 0x2605014a  addiu       $a1, $s0, 0x14A (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 330));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E8AD0u;
        goto label_4e8ad0;
    }
    ctx->pc = 0x4E8AC8u;
    {
        const bool branch_taken_0x4e8ac8 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x4E8ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E8AC8u;
        // 0x4e8acc: 0x2605014a  addiu       $a1, $s0, 0x14A (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 330));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e8ac8) {
            ctx->pc = 0x4E8B0Cu;
            goto label_4e8b0c;
        }
    }
    ctx->pc = 0x4E8AD0u;
label_4e8ad0:
    // 0x4e8ad0: 0xc12b642  jal         func_4AD908
label_4e8ad4:
    if (ctx->pc == 0x4E8AD4u) {
        ctx->pc = 0x4E8AD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E8AD0u;
        // 0x4e8ad4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E8AD8u;
        goto label_4e8ad8;
    }
    ctx->pc = 0x4E8AD0u;
    SET_GPR_U32(ctx, 31, 0x4E8AD8u);
    ctx->pc = 0x4E8AD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E8AD0u;
    // 0x4e8ad4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AD908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AD908u, 0x4E8AD0u, 0x4E8AD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E8AD8u;
label_4e8ad8:
    // 0x4e8ad8: 0x2605014a  addiu       $a1, $s0, 0x14A
    ctx->pc = 0x4e8ad8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 330));
label_4e8adc:
    // 0x4e8adc: 0x24021080  addiu       $v0, $zero, 0x1080
    ctx->pc = 0x4e8adcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4224));
label_4e8ae0:
    // 0x4e8ae0: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x4e8ae0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_4e8ae4:
    // 0x4e8ae4: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x4e8ae4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_4e8ae8:
    // 0x4e8ae8: 0xa4a20000  sh          $v0, 0x0($a1)
    ctx->pc = 0x4e8ae8u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 2));
label_4e8aec:
    // 0x4e8aec: 0xa603000e  sh          $v1, 0xE($s0)
    ctx->pc = 0x4e8aecu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 14), (uint16_t)GPR_U32(ctx, 3));
label_4e8af0:
    // 0x4e8af0: 0xa6040148  sh          $a0, 0x148($s0)
    ctx->pc = 0x4e8af0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 328), (uint16_t)GPR_U32(ctx, 4));
label_4e8af4:
    // 0x4e8af4: 0xa600015e  sh          $zero, 0x15E($s0)
    ctx->pc = 0x4e8af4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 350), (uint16_t)GPR_U32(ctx, 0));
label_4e8af8:
    // 0x4e8af8: 0xa6000160  sh          $zero, 0x160($s0)
    ctx->pc = 0x4e8af8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 352), (uint16_t)GPR_U32(ctx, 0));
label_4e8afc:
    // 0x4e8afc: 0xa60001b6  sh          $zero, 0x1B6($s0)
    ctx->pc = 0x4e8afcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 438), (uint16_t)GPR_U32(ctx, 0));
label_4e8b00:
    // 0x4e8b00: 0x96220000  lhu         $v0, 0x0($s1)
    ctx->pc = 0x4e8b00u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
label_4e8b04:
    // 0x4e8b04: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x4e8b04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
label_4e8b08:
    // 0x4e8b08: 0xa6220000  sh          $v0, 0x0($s1)
    ctx->pc = 0x4e8b08u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 2));
label_4e8b0c:
    // 0x4e8b0c: 0x84a20000  lh          $v0, 0x0($a1)
    ctx->pc = 0x4e8b0cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
label_4e8b10:
    // 0x4e8b10: 0x4400003  bltz        $v0, . + 4 + (0x3 << 2)
label_4e8b14:
    if (ctx->pc == 0x4E8B14u) {
        ctx->pc = 0x4E8B14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E8B10u;
        // 0x4e8b14: 0x94a30000  lhu         $v1, 0x0($a1) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E8B18u;
        goto label_4e8b18;
    }
    ctx->pc = 0x4E8B10u;
    {
        const bool branch_taken_0x4e8b10 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x4E8B14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E8B10u;
        // 0x4e8b14: 0x94a30000  lhu         $v1, 0x0($a1) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e8b10) {
            ctx->pc = 0x4E8B20u;
            goto label_4e8b20;
        }
    }
    ctx->pc = 0x4E8B18u;
label_4e8b18:
    // 0x4e8b18: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x4e8b18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_4e8b1c:
    // 0x4e8b1c: 0xa4a20000  sh          $v0, 0x0($a1)
    ctx->pc = 0x4e8b1cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 2));
label_4e8b20:
    // 0x4e8b20: 0x960201bc  lhu         $v0, 0x1BC($s0)
    ctx->pc = 0x4e8b20u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 444)));
label_4e8b24:
    // 0x4e8b24: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4e8b24u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_4e8b28:
    // 0x4e8b28: 0x21443  sra         $v0, $v0, 17
    ctx->pc = 0x4e8b28u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 17));
label_4e8b2c:
    // 0x4e8b2c: 0x2c430007  sltiu       $v1, $v0, 0x7
    ctx->pc = 0x4e8b2cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
label_4e8b30:
    // 0x4e8b30: 0x50600031  beql        $v1, $zero, . + 4 + (0x31 << 2)
label_4e8b34:
    if (ctx->pc == 0x4E8B34u) {
        ctx->pc = 0x4E8B34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E8B30u;
        // 0x4e8b34: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E8B38u;
        goto label_4e8b38;
    }
    ctx->pc = 0x4E8B30u;
    {
        const bool branch_taken_0x4e8b30 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x4e8b30) {
            ctx->pc = 0x4E8B34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E8B30u;
            // 0x4e8b34: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4E8BF8u;
            return;
        }
    }
    ctx->pc = 0x4E8B38u;
label_4e8b38:
    // 0x4e8b38: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x4e8b38u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_4e8b3c:
    // 0x4e8b3c: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x4e8b3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
label_4e8b40:
    // 0x4e8b40: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x4e8b40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_4e8b44:
    // 0x4e8b44: 0x8c63ba70  lw          $v1, -0x4590($v1)
    ctx->pc = 0x4e8b44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294949488)));
label_4e8b48:
    // 0x4e8b48: 0x600008  jr          $v1
label_4e8b4c:
    if (ctx->pc == 0x4E8B4Cu) {
        ctx->pc = 0x4E8B50u;
        goto label_fallthrough_0x4e8b48;
    }
    ctx->pc = 0x4E8B48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4E8B48u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
label_fallthrough_0x4e8b48:
    ctx->pc = 0x4E8B50u;
}
