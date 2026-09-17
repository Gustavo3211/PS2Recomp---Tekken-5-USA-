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

// Function: sub_004CFB50
// Address: 0x4cfb50 - 0x4cfcb0
void sub_004CFB50_0x4cfb50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004CFB50_0x4cfb50");
#endif

    switch (ctx->pc) {
        case 0x4cfb7cu: goto label_4cfb7c;
        case 0x4cfbf0u: goto label_4cfbf0;
        case 0x4cfc04u: goto label_4cfc04;
        case 0x4cfc14u: goto label_4cfc14;
        case 0x4cfc1cu: goto label_4cfc1c;
        case 0x4cfc68u: goto label_4cfc68;
        case 0x4cfc78u: goto label_4cfc78;
        case 0x4cfc88u: goto label_4cfc88;
        case 0x4cfc98u: goto label_4cfc98;
        default: break;
    }

    ctx->pc = 0x4cfb50u;

    // 0x4cfb50: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4cfb50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x4cfb54: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4cfb54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4cfb58: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4cfb58u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4cfb5c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x4cfb5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x4cfb60: 0x261101b4  addiu       $s1, $s0, 0x1B4
    ctx->pc = 0x4cfb60u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 436));
    // 0x4cfb64: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4cfb64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x4cfb68: 0x86220000  lh          $v0, 0x0($s1)
    ctx->pc = 0x4cfb68u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4cfb6c: 0x4400023  bltz        $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x4CFB6Cu;
    {
        const bool branch_taken_0x4cfb6c = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x4cfb6c) {
            ctx->pc = 0x4CFBFCu;
            goto label_4cfbfc;
        }
    }
    ctx->pc = 0x4CFB74u;
    // 0x4cfb74: 0xc12b642  jal         func_4AD908
    ctx->pc = 0x4CFB74u;
    SET_GPR_U32(ctx, 31, 0x4CFB7Cu);
    ctx->pc = 0x4AD908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AD908u, 0x4CFB74u, 0x4CFB7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4CFB7Cu;
label_4cfb7c:
    // 0x4cfb7c: 0x3c05007f  lui         $a1, 0x7F
    ctx->pc = 0x4cfb7cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)127 << 16));
    // 0x4cfb80: 0x24a50fcc  addiu       $a1, $a1, 0xFCC
    ctx->pc = 0x4cfb80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4044));
    // 0x4cfb84: 0x860401be  lh          $a0, 0x1BE($s0)
    ctx->pc = 0x4cfb84u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 446)));
    // 0x4cfb88: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x4cfb88u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7F0FCCu));
    // 0x4cfb8c: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x4cfb8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x4cfb90: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x4cfb90u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x4cfb94: 0x24060080  addiu       $a2, $zero, 0x80
    ctx->pc = 0x4cfb94u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x4cfb98: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4cfb98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4cfb9c: 0x240704a0  addiu       $a3, $zero, 0x4A0
    ctx->pc = 0x4cfb9cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1184));
    // 0x4cfba0: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x4cfba0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x4cfba4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4cfba4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4cfba8: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x4cfba8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x4cfbac: 0x84a20000  lh          $v0, 0x0($a1)
    ctx->pc = 0x4cfbacu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4cfbb0: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x4cfbb0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x4cfbb4: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x4cfbb4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
    // 0x4cfbb8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x4cfbb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x4cfbbc: 0x94637320  lhu         $v1, 0x7320($v1)
    ctx->pc = 0x4cfbbcu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 29472)));
    // 0x4cfbc0: 0xa6060158  sh          $a2, 0x158($s0)
    ctx->pc = 0x4cfbc0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 344), (uint16_t)GPR_U32(ctx, 6));
    // 0x4cfbc4: 0xa603011c  sh          $v1, 0x11C($s0)
    ctx->pc = 0x4cfbc4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 284), (uint16_t)GPR_U32(ctx, 3));
    // 0x4cfbc8: 0xa607000c  sh          $a3, 0xC($s0)
    ctx->pc = 0x4cfbc8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 7));
    // 0x4cfbcc: 0xa6000118  sh          $zero, 0x118($s0)
    ctx->pc = 0x4cfbccu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 280), (uint16_t)GPR_U32(ctx, 0));
    // 0x4cfbd0: 0xa6000120  sh          $zero, 0x120($s0)
    ctx->pc = 0x4cfbd0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 288), (uint16_t)GPR_U32(ctx, 0));
    // 0x4cfbd4: 0xa600015e  sh          $zero, 0x15E($s0)
    ctx->pc = 0x4cfbd4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 350), (uint16_t)GPR_U32(ctx, 0));
    // 0x4cfbd8: 0xa6000160  sh          $zero, 0x160($s0)
    ctx->pc = 0x4cfbd8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 352), (uint16_t)GPR_U32(ctx, 0));
    // 0x4cfbdc: 0xa6000162  sh          $zero, 0x162($s0)
    ctx->pc = 0x4cfbdcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 354), (uint16_t)GPR_U32(ctx, 0));
    // 0x4cfbe0: 0xa6000164  sh          $zero, 0x164($s0)
    ctx->pc = 0x4cfbe0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 356), (uint16_t)GPR_U32(ctx, 0));
    // 0x4cfbe4: 0xa6000166  sh          $zero, 0x166($s0)
    ctx->pc = 0x4cfbe4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 358), (uint16_t)GPR_U32(ctx, 0));
    // 0x4cfbe8: 0xc127e84  jal         func_49FA10
    ctx->pc = 0x4CFBE8u;
    SET_GPR_U32(ctx, 31, 0x4CFBF0u);
    ctx->pc = 0x4CFBECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4CFBE8u;
    // 0x4cfbec: 0xa6000168  sh          $zero, 0x168($s0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 16), 360), (uint16_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49FA10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49FA10u, 0x4CFBE8u, 0x4CFBF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4CFBF0u;
label_4cfbf0:
    // 0x4cfbf0: 0x96220000  lhu         $v0, 0x0($s1)
    ctx->pc = 0x4cfbf0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4cfbf4: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x4cfbf4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x4cfbf8: 0xa6220000  sh          $v0, 0x0($s1)
    ctx->pc = 0x4cfbf8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 2));
label_4cfbfc:
    // 0x4cfbfc: 0xc12564a  jal         func_495928
    ctx->pc = 0x4CFBFCu;
    SET_GPR_U32(ctx, 31, 0x4CFC04u);
    ctx->pc = 0x4CFC00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4CFBFCu;
    // 0x4cfc00: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x495928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x495928u, 0x4CFBFCu, 0x4CFC04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4CFC04u;
label_4cfc04:
    // 0x4cfc04: 0x50400025  beql        $v0, $zero, . + 4 + (0x25 << 2)
    ctx->pc = 0x4CFC04u;
    {
        const bool branch_taken_0x4cfc04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4cfc04) {
            ctx->pc = 0x4CFC08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4CFC04u;
            // 0x4cfc08: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4CFC9Cu;
            goto label_4cfc9c;
        }
    }
    ctx->pc = 0x4CFC0Cu;
    // 0x4cfc0c: 0xc127bf2  jal         func_49EFC8
    ctx->pc = 0x4CFC0Cu;
    SET_GPR_U32(ctx, 31, 0x4CFC14u);
    ctx->pc = 0x4CFC10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4CFC0Cu;
    // 0x4cfc10: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49EFC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49EFC8u, 0x4CFC0Cu, 0x4CFC14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4CFC14u;
label_4cfc14:
    // 0x4cfc14: 0xc12b94c  jal         func_4AE530
    ctx->pc = 0x4CFC14u;
    SET_GPR_U32(ctx, 31, 0x4CFC1Cu);
    ctx->pc = 0x4CFC18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4CFC14u;
    // 0x4cfc18: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AE530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AE530u, 0x4CFC14u, 0x4CFC1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4CFC1Cu;
label_4cfc1c:
    // 0x4cfc1c: 0x860301bc  lh          $v1, 0x1BC($s0)
    ctx->pc = 0x4cfc1cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 444)));
    // 0x4cfc20: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x4cfc20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x4cfc24: 0x10620012  beq         $v1, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x4CFC24u;
    {
        const bool branch_taken_0x4cfc24 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x4CFC28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CFC24u;
        // 0x4cfc28: 0x28620003  slti        $v0, $v1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4cfc24) {
            ctx->pc = 0x4CFC70u;
            goto label_4cfc70;
        }
    }
    ctx->pc = 0x4CFC2Cu;
    // 0x4cfc2c: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x4CFC2Cu;
    {
        const bool branch_taken_0x4cfc2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4cfc2c) {
            ctx->pc = 0x4CFC30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4CFC2Cu;
            // 0x4cfc30: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4CFC48u;
            goto label_4cfc48;
        }
    }
    ctx->pc = 0x4CFC34u;
    // 0x4cfc34: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x4CFC34u;
    {
        const bool branch_taken_0x4cfc34 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x4cfc34) {
            ctx->pc = 0x4CFC60u;
            goto label_4cfc60;
        }
    }
    ctx->pc = 0x4CFC3Cu;
    // 0x4cfc3c: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x4CFC3Cu;
    {
        const bool branch_taken_0x4cfc3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4CFC40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CFC3Cu;
        // 0x4cfc40: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4cfc3c) {
            ctx->pc = 0x4CFC9Cu;
            goto label_4cfc9c;
        }
    }
    ctx->pc = 0x4CFC44u;
    // 0x4cfc44: 0x0  nop
    ctx->pc = 0x4cfc44u;
    // NOP
label_4cfc48:
    // 0x4cfc48: 0x1062000d  beq         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x4CFC48u;
    {
        const bool branch_taken_0x4cfc48 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x4CFC4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CFC48u;
        // 0x4cfc4c: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4cfc48) {
            ctx->pc = 0x4CFC80u;
            goto label_4cfc80;
        }
    }
    ctx->pc = 0x4CFC50u;
    // 0x4cfc50: 0x1062000f  beq         $v1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x4CFC50u;
    {
        const bool branch_taken_0x4cfc50 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x4cfc50) {
            ctx->pc = 0x4CFC90u;
            goto label_4cfc90;
        }
    }
    ctx->pc = 0x4CFC58u;
    // 0x4cfc58: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x4CFC58u;
    {
        const bool branch_taken_0x4cfc58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4CFC5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CFC58u;
        // 0x4cfc5c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4cfc58) {
            ctx->pc = 0x4CFC9Cu;
            goto label_4cfc9c;
        }
    }
    ctx->pc = 0x4CFC60u;
label_4cfc60:
    // 0x4cfc60: 0xc133f2c  jal         func_4CFCB0
    ctx->pc = 0x4CFC60u;
    SET_GPR_U32(ctx, 31, 0x4CFC68u);
    ctx->pc = 0x4CFC64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4CFC60u;
    // 0x4cfc64: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4CFCB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4CFCB0u, 0x4CFC60u, 0x4CFC68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4CFC68u;
label_4cfc68:
    // 0x4cfc68: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x4CFC68u;
    {
        const bool branch_taken_0x4cfc68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4CFC6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CFC68u;
        // 0x4cfc6c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4cfc68) {
            ctx->pc = 0x4CFC9Cu;
            goto label_4cfc9c;
        }
    }
    ctx->pc = 0x4CFC70u;
label_4cfc70:
    // 0x4cfc70: 0xc133fb8  jal         func_4CFEE0
    ctx->pc = 0x4CFC70u;
    SET_GPR_U32(ctx, 31, 0x4CFC78u);
    ctx->pc = 0x4CFC74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4CFC70u;
    // 0x4cfc74: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4CFEE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4CFEE0u, 0x4CFC70u, 0x4CFC78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4CFC78u;
label_4cfc78:
    // 0x4cfc78: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x4CFC78u;
    {
        const bool branch_taken_0x4cfc78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4CFC7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CFC78u;
        // 0x4cfc7c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4cfc78) {
            ctx->pc = 0x4CFC9Cu;
            goto label_4cfc9c;
        }
    }
    ctx->pc = 0x4CFC80u;
label_4cfc80:
    // 0x4cfc80: 0xc133fee  jal         func_4CFFB8
    ctx->pc = 0x4CFC80u;
    SET_GPR_U32(ctx, 31, 0x4CFC88u);
    ctx->pc = 0x4CFC84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4CFC80u;
    // 0x4cfc84: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4CFFB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4CFFB8u, 0x4CFC80u, 0x4CFC88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4CFC88u;
label_4cfc88:
    // 0x4cfc88: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x4CFC88u;
    {
        const bool branch_taken_0x4cfc88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4CFC8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CFC88u;
        // 0x4cfc8c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4cfc88) {
            ctx->pc = 0x4CFC9Cu;
            goto label_4cfc9c;
        }
    }
    ctx->pc = 0x4CFC90u;
label_4cfc90:
    // 0x4cfc90: 0xc134038  jal         func_4D00E0
    ctx->pc = 0x4CFC90u;
    SET_GPR_U32(ctx, 31, 0x4CFC98u);
    ctx->pc = 0x4CFC94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4CFC90u;
    // 0x4cfc94: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4D00E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4D00E0u, 0x4CFC90u, 0x4CFC98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4CFC98u;
label_4cfc98:
    // 0x4cfc98: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4cfc98u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4cfc9c:
    // 0x4cfc9c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4cfc9cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4cfca0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4cfca0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4cfca4: 0x3e00008  jr          $ra
    ctx->pc = 0x4CFCA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4CFCA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CFCA4u;
        // 0x4cfca8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4CFCA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4CFCACu;
    // 0x4cfcac: 0x0  nop
    ctx->pc = 0x4cfcacu;
    // NOP
    ctx->pc = 0x4cfcb0u;
}
